/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (((var_4 ? (arr_2 [i_1]) : (arr_2 [4]))));
                arr_4 [i_0] = ((~(((max((arr_3 [2]), var_4)) + var_10))));
                var_12 = (min(var_12, (36 + -var_3)));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_13 = (((301649285 ? -45 : -13652)));
                    var_14 = var_2;
                    arr_8 [i_2 - 1] [i_0] [i_0] = var_7;
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_15, (~161)));
                                var_16 += ((((min((arr_12 [i_5] [i_1] [i_1] [i_3 - 1]), var_7))) ? (min(16482157353359777581, 42021)) : (arr_15 [6] [i_4 + 1] [i_4 + 1] [i_3 + 2] [i_3 - 1])));
                                arr_16 [1] [i_0] [2] [1] [i_5] = (((~32642) != var_8));
                                var_17 ^= ((44 + (+-1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [3] [i_3] [i_0] [i_1] [i_0] = (min(-945800546023390726, ((-57929 ? 1964586720349774045 : var_2))));
                                var_18 = (arr_6 [7] [i_0] [9] [i_1]);
                                var_19 = ((((arr_14 [i_0] [i_0] [i_3] [i_6] [1] [i_0]) / 945800546023390740)));
                            }
                        }
                    }
                    var_20 = (max((((arr_15 [i_3] [i_3] [6] [i_0] [i_0]) / -5821069062220821710)), (((((max((arr_0 [i_0] [i_0]), var_6))) ? (max(var_1, var_5)) : ((max(-1533832360, (arr_22 [i_3] [i_3] [6] [i_0])))))))));
                }
            }
        }
    }
    var_21 = (((((var_2 - ((min(var_4, 945800546023390725)))))) ? var_0 : ((min(((var_2 ? var_8 : var_6)), ((max(-26059, var_1))))))));
    #pragma endscop
}
