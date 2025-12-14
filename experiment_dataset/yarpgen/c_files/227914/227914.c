/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 & (-var_11 - var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((max(var_14, var_12)));
                var_19 = (max(0, 14098489033861692315));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = (max(var_20, (((var_8 ? var_0 : var_0)))));
                    var_21 -= ((var_4 & (var_1 <= var_7)));
                    var_22 -= (var_16 & var_10);
                    var_23 -= var_1;
                    var_24 = var_10;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_25 = (((min(var_7, var_14)) + (((94695075 ? 4200272220 : 1110419601)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_26 = (var_9 ^ var_14);
                                var_27 -= var_7;
                                arr_18 [i_0] [i_0] [i_3] [i_4] [i_3] [i_4] [i_1] = ((~(var_13 + var_2)));
                                var_28 -= ((((max((var_15 < var_16), var_4))) | var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
