/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = 13146;
                    arr_9 [i_0] [14] [i_2 + 1] = (i_0 % 2 == zero) ? ((min((((var_14 && (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])))), ((60590 ? ((var_3 >> (((arr_4 [i_1 + 1] [i_0]) - 60082)))) : 4952))))) : ((min((((var_14 && (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])))), ((60590 ? ((var_3 >> (((((arr_4 [i_1 + 1] [i_0]) - 60082)) + 55400)))) : 4952)))));
                }
            }
        }
    }
    var_16 = 29215;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_5] = (min((((((var_0 ? 60591 : var_12))) ? var_9 : ((32509 ? var_5 : var_13)))), (((min(26256, (arr_0 [i_3])))))));
                    var_17 = (min(var_17, (((((max(4952, 57249))) ? ((((arr_17 [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 3]) > 57540))) : (23907 - 56574))))));
                    var_18 = (min(var_18, var_14));
                    var_19 = ((((~(arr_15 [i_3] [i_4 - 2] [i_4 - 2]))) * ((((arr_15 [i_3] [10] [i_4 - 1]) <= var_11)))));

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_3] [i_3] [i_5] |= 61319;
                        var_20 = 60111;
                    }
                    for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_4 + 1] [i_5] [i_7 + 2] = ((-(!-var_14)));
                        var_21 = ((((max((var_2 ^ var_8), (!var_3)))) ? (((min(31787, var_2)))) : ((min((arr_5 [i_3] [i_5] [i_4 - 2]), var_3)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
