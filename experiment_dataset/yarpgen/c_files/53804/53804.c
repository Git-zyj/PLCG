/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((550170591 ? 0 : 26468)))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (arr_3 [i_2] [i_0]);
                        var_19 = (((var_5 * (arr_2 [i_2 - 2]))));
                        arr_10 [i_3] [i_2 + 1] [i_1] = 550170591;
                        var_20 |= (((arr_5 [i_2 - 2] [i_1] [i_2 - 1]) ? (((((arr_0 [i_3]) + 9223372036854775807)) >> (var_10 - 24661))) : (arr_7 [12] [i_2 + 2] [i_2 - 1] [i_2 + 2])));
                        var_21 = (~var_3);
                    }
                    var_22 = (((arr_8 [13] [i_2 + 2] [i_2 + 2]) ? var_5 : (arr_8 [i_0] [i_2 - 3] [i_2 - 1])));
                    arr_11 [i_1] [i_1] [i_1] [i_0] = ((-(var_8 / -26452)));
                    var_23 = (((~(arr_0 [i_1]))));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_24 = ((40 ? 7192499222771568351 : 550170577));
                    var_25 = (max(var_25, (((var_12 ? (arr_12 [i_0] [i_0]) : (arr_5 [i_4 + 2] [i_4 + 1] [i_4 - 1]))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] = max(((var_12 & (arr_15 [i_5] [i_5] [i_1] [i_0]))), (arr_7 [i_0] [i_1] [i_5] [i_5]));
                    arr_17 [i_1] = var_14;
                    var_26 = (max(var_26, ((((((-(arr_15 [i_0] [4] [i_1] [i_5])))) ? -11210 : var_3)))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_27 = (((((var_14 & 26468) ? ((var_6 ? 18446744073709551608 : 127)) : (!var_3))) == (((min(23186, -22988))))));
                    var_28 = (arr_15 [i_0] [i_1] [i_6] [i_1]);
                    var_29 = ((~((((max(4094739431, 4611677222334365696))) ? ((max(var_9, (arr_6 [i_0])))) : (~var_13)))));
                }
            }
        }
    }
    var_30 = ((((max((max(134, 32767)), 118))) || var_9));
    #pragma endscop
}
