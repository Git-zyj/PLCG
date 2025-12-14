/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_8;
    var_12 = ((~((((-1636242160 ? var_5 : 1636242159)) >> (var_8 - 9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_3] [1] [i_1] [9] = (arr_6 [6] [i_0] [i_0] [i_3]);
                                var_13 = max((((arr_2 [i_1 - 3]) ? (arr_7 [i_0]) : (~2042492226))), ((((min(var_6, 0))) ? (((arr_4 [i_0] [i_1 - 1]) ? 1806429294 : 2762280826)) : ((-1778591580 ? (arr_12 [i_4] [10]) : (arr_4 [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_14 = (((~var_3) || (1941600017 / var_1)));
                    var_15 = (max(var_15, ((-(max(((~(arr_4 [2] [i_1]))), ((((arr_5 [i_0] [10] [6] [i_2]) >= (arr_9 [i_0] [i_0] [i_0]))))))))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_16 = (arr_3 [i_5]);
                    var_17 = (min(var_17, (arr_15 [i_0 + 1] [i_1] [i_0 + 1] [6])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] [i_0] [i_7] = 87;
                                arr_24 [i_0] [i_1] [i_1] [i_0] [i_7] = ((((max(-0, ((166 ? (arr_4 [i_0] [8]) : (arr_11 [i_0] [i_7] [i_7] [i_7] [i_7])))))) ? (((max(169, 177)))) : (min((max((arr_12 [i_1] [i_5]), (arr_17 [i_6] [i_6] [i_5]))), (((-(arr_7 [i_0]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_18 ^= (max((((arr_0 [i_0 - 1] [i_1 - 3]) ? (arr_0 [i_9] [i_1]) : (arr_0 [i_0 + 1] [i_10 - 1]))), (arr_0 [i_8] [i_0 + 1])));
                                var_19 = max(87, 1388421933);
                                var_20 = (min(var_20, var_6));
                            }
                        }
                    }
                }
                var_21 = (-4396893952361152072 / 65513);
            }
        }
    }
    var_22 = var_7;
    var_23 = (((min(-0, 255)) << (((!((min(-248699685, var_0))))))));
    #pragma endscop
}
