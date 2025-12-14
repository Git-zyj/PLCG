/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((~(-32767 - 1))) ? var_9 : (min(var_11, var_1))))));
    var_14 = (min(var_14, ((((var_1 <= 4095) > -var_9)))));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 -= -32755;
                    var_17 = var_10;
                    var_18 = (arr_2 [i_1 + 1]);
                }
                var_19 ^= (max(48, (max(127, -29))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_20 = (arr_8 [i_0] [i_1] [i_1 - 1] [i_3]);
                    var_21 ^= (((arr_3 [i_1]) ? (((arr_4 [i_3]) / (arr_4 [i_3]))) : (!var_6)));
                    var_22 = ((var_6 ? var_7 : var_0));
                    var_23 = (arr_0 [i_1] [i_3]);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_24 += (((arr_14 [i_5 - 1]) ? (arr_14 [i_5 - 1]) : (arr_14 [i_5 - 1])));
                        var_25 = (((arr_5 [i_1 - 1]) / ((var_7 ? (arr_7 [i_5 - 1] [i_4] [i_0] [i_0]) : (arr_14 [i_0])))));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_26 = -16384;
                        var_27 = (-32767 - 1);

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_28 = ((~(((!(arr_19 [i_4]))))));
                            var_29 = ((35150012350464 ? 46228 : 0));
                        }
                    }
                    var_30 = ((-32756 || ((!(arr_15 [i_4] [i_4])))));
                    var_31 += (var_2 * var_12);
                }
            }
        }
    }
    #pragma endscop
}
