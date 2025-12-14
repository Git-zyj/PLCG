/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_6 < var_7);
    var_16 = ((-2417584605554643913 ? -9223372036854775797 : 47456));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                            {
                                var_17 = (min(((max((arr_9 [i_3 - 1] [i_1 - 2]), (arr_5 [i_0 - 1] [i_0 - 1])))), (arr_6 [i_0 - 1] [i_0 - 1])));
                                arr_12 [i_0 - 1] [i_1 - 1] [i_2] [i_3] [i_4] [i_4] = ((var_9 ? (min((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))) : (arr_7 [i_1 + 1])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_5] = 12901;
                                arr_16 [i_0] [i_1] [i_1] [i_3] [2] [i_5] |= (((118 ? 1 : 12901)));
                            }
                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                var_18 = (-(((((var_11 ? var_9 : var_12))) ? var_0 : (((arr_19 [i_0] [i_6] [i_2] [i_3] [i_6] [i_6] [i_2]) << (((arr_13 [i_6] [i_3] [i_0] [i_1] [i_0]) - 726975092)))))));
                                var_19 = ((-var_8 ? (((arr_14 [i_3] [i_6]) ? (((((arr_0 [i_0] [i_6]) > (arr_18 [i_6] [i_1] [i_2] [i_3] [i_6]))))) : var_3)) : (arr_5 [i_0] [10])));
                                var_20 *= 1;
                                arr_20 [i_6] [i_6] [i_0] [i_6] [i_0] = (((var_13 ? var_11 : (arr_11 [i_3 + 1] [i_6] [i_2] [13] [i_3]))));
                            }
                            var_21 = ((min((arr_17 [i_3 + 1]), var_9)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_28 [i_8] = var_5;
                                var_22 = ((-(arr_19 [i_1 + 2] [i_8] [i_7 + 2] [i_7] [i_7] [i_8] [i_9 - 4])));
                                var_23 = ((arr_3 [i_1 + 1] [i_8] [i_7]) ? (~1534935967) : ((2760031320 ? 29954 : 7307913495638267264)));
                            }
                        }
                    }
                }
                var_24 = ((-(arr_11 [i_1 + 2] [i_1] [i_1 + 1] [12] [12])));
            }
        }
    }
    #pragma endscop
}
