/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = -4009948236331019304;
    var_15 = (((var_5 & 1) ? ((-var_11 ? (var_6 <= var_12) : (var_12 | var_11))) : (((min((var_4 || 1), (max(var_3, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_16 -= ((!((((var_2 ? var_8 : 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_3] [i_4] = ((!((1 != (arr_3 [i_0] [i_0] [i_0])))));
                                var_17 ^= (((((arr_0 [i_3 - 2]) != var_5)) ? (min(-500366001362868573, 3160301664820389297)) : (((-(arr_2 [i_4 - 1]))))));
                            }
                        }
                    }
                    var_18 = (((((-(var_12 / var_1)))) ? (arr_6 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2]) : 1));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((((((~66) ? (arr_12 [i_0] [i_0]) : ((((255 <= (arr_8 [i_0] [i_1] [i_1] [i_5])))))))) ? 2 : (((var_6 / ((1 + (arr_7 [i_0] [i_1] [i_5]))))))));
                    var_19 = (126 % 113);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((~(((arr_6 [i_0] [i_0] [i_5] [i_6]) & (arr_6 [i_0] [i_1] [i_1] [i_6]))))))));
                                var_21 = (max(var_21, ((((min(-1, (arr_1 [i_0])))) ? (min(11693418254963733744, (arr_15 [i_0] [4] [i_0] [i_0]))) : (min((arr_15 [i_6] [i_5] [i_1] [i_0]), -67))))));
                                var_22 &= (min((max((((arr_7 [i_5] [i_6] [i_5]) - var_10)), var_3)), 4243192949));
                            }
                        }
                    }
                }
                var_23 = (min(var_23, (((((-(arr_3 [i_0] [i_0] [1]))) | ((((min(49808, 0))) ? (arr_18 [i_0] [i_0] [i_0]) : var_6)))))));
            }
        }
    }
    #pragma endscop
}
