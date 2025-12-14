/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((!(!9880)))), -911850773));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 += (((((~(arr_0 [i_0] [i_1])))) ? ((~((911850773 >> (var_10 + 9165475780231006861))))) : 911850773));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (min(((11615 % (arr_7 [i_2] [i_3] [i_3 + 1] [i_3]))), (max((arr_7 [i_2] [i_3] [i_3 - 1] [i_3]), (arr_7 [i_2] [i_3] [i_3 + 1] [i_3])))));
                                var_15 = (max(var_15, ((max((((~(arr_11 [i_3 + 1] [1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3])))), (min(-1, -4926562663934768445)))))));
                                var_16 = (((((-(((arr_0 [i_1] [i_1]) ? var_5 : var_1))))) ? ((((((((arr_6 [i_2]) ? var_1 : (arr_1 [i_0] [i_3])))) || (!9758))))) : (max((arr_3 [i_1] [i_2]), (((var_6 >> (((arr_4 [i_2]) - 1200324565)))))))));
                            }
                        }
                    }
                    var_17 = ((-2198 ? (min(((max(-2209, (arr_2 [i_0])))), -37)) : ((((arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1] [i_2]) >> (((arr_11 [i_0] [5] [i_0] [i_0] [i_0] [i_2] [i_2]) - 171)))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = (max((((-22 / (arr_8 [i_0] [i_0])))), (max(((((arr_7 [i_2] [i_1] [i_2] [i_5]) ? -911850743 : -1332004561))), (var_3 / var_2)))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 6;i_6 += 1)
                        {
                            var_19 = (arr_13 [i_0] [i_6 + 3] [i_2]);
                            arr_16 [i_0] [i_1] [i_2] [i_5] [i_6] = ((((((arr_3 [7] [i_1]) ? var_0 : var_0))) ? (arr_2 [1]) : ((23140 / (arr_11 [0] [0] [i_2] [i_5] [0] [i_6] [i_6])))));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = (arr_0 [i_5] [i_1]);
                            arr_20 [i_2] [i_2] = ((+((((arr_12 [i_7] [i_1] [i_2] [i_2] [i_1] [i_0]) ? var_6 : (arr_6 [i_2]))))));
                        }
                    }
                    arr_21 [i_0] [i_2] = (max(((max((min(1, (arr_15 [i_0] [i_0] [i_2] [i_1] [i_2]))), var_1))), (min(1, 4294967273))));
                    var_21 = (((1 ? 1 : -911850774)));
                }
                var_22 &= arr_15 [i_0] [i_1] [i_1] [i_1] [i_0];
            }
        }
    }
    var_23 &= var_0;

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_24 [0] [i_8] = ((((max(((4294967295 | (arr_22 [i_8]))), (((-17850 ? (arr_23 [i_8]) : (arr_22 [i_8]))))))) & (min((arr_23 [i_8]), (max(var_11, var_10))))));
        var_24 = var_3;
        var_25 = (max(var_25, var_1));
        arr_25 [i_8] [i_8] = (arr_23 [i_8]);
    }
    #pragma endscop
}
