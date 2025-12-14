/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_9, -var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((!((min(((min(var_3, var_10))), (min(8, 7377101563747853744))))))))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_19 -= -35;
                            arr_12 [i_0] [i_2] [i_2] [i_1 + 1] [i_1 + 2] [i_0] = -6998486009559820089;
                        }
                        var_20 = (arr_6 [i_0] [i_1] [i_0] [i_0]);
                        arr_13 [i_0] = ((var_2 ? (arr_5 [i_1 + 2] [i_3 + 3] [i_3]) : 38));
                        var_21 = (min(var_21, ((((((var_3 ? var_1 : -76))) ? var_3 : -var_11)))));
                    }
                    arr_14 [i_0] = (((max((arr_5 [i_2 + 2] [i_2 + 2] [i_2]), (arr_5 [i_2 + 2] [i_2 + 2] [i_2]))) / (((max((arr_8 [i_2 + 2] [i_2 + 2] [i_0] [i_2]), (arr_8 [i_2 + 2] [i_2] [i_0] [15])))))));
                    var_22 = ((-(min(7885601856785968713, -1160440602691173753))));
                    arr_15 [i_0] [i_1 + 1] [i_0] [i_2] = (!-1160440602691173763);
                    var_23 = (((((arr_8 [i_1] [i_1 + 2] [i_0] [i_1]) | (arr_4 [i_1] [i_0]))) > ((max((arr_9 [i_1 - 1] [i_1 + 1] [i_2] [i_2 + 2] [i_1 + 2] [i_2]), var_11)))));
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_24 = max(1987, -var_11);
                            arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] = 0;
                            var_25 = ((min((((arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6]) ? var_4 : var_9)), ((min((arr_16 [i_5]), var_11))))));
                            arr_22 [i_0] [i_1 + 1] [12] [i_6] [i_0] [i_0] = (((arr_9 [i_1 - 1] [i_1] [i_1 + 2] [i_5 - 3] [i_6] [i_6]) > (((44763 != (arr_8 [i_1 + 1] [i_1] [i_0] [i_5 - 1]))))));
                            var_26 ^= (min(((((217 ? 41 : 0)))), ((var_15 ? var_11 : 1886299916))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(-var_8, var_6));
    var_28 = min(63546, ((var_9 ? (max(var_1, -1889191869203594509)) : (1175953921 > var_0))));
    #pragma endscop
}
