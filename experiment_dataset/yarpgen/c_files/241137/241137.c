/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0 - 2] = (arr_5 [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 4]);
                    arr_8 [6] [i_1] [6] [i_0] = (arr_2 [i_1]);
                    var_17 = (((1602162317 * 2692804978) == 1));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] = ((((var_13 + (arr_1 [0] [i_1])))));
                        var_18 = 1602162318;
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_19 = (~0);
                        arr_17 [i_1] [i_1] [i_3] [i_5] = ((min((((arr_16 [i_1]) / (arr_6 [i_1]))), ((var_11 ? var_10 : (arr_10 [i_0] [i_1] [i_3] [i_1]))))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_20 = (min(((1602162318 ? (2692804982 < 1602162326) : (min(1438626389, 1602162325)))), (max((min((arr_11 [12] [i_1] [i_3] [i_1]), 22107)), (min((arr_19 [i_0]), (arr_5 [i_0] [i_1] [i_3] [i_6 - 1])))))));
                        var_21 = ((((((1602162325 ? 22107 : 43403))) ? ((8 ? (arr_20 [i_1]) : 2692804978)) : (((min(var_12, (arr_15 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 2]))))))));
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] = 16297;
                        arr_26 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = (min(-126, 1602162314));
                        var_22 = (arr_11 [i_0] [i_1] [1] [i_1]);
                        arr_27 [i_0] [i_1] [i_1] [i_7] = ((+(((arr_16 [i_1]) ^ 57))));
                    }
                    arr_28 [i_1] = (1 + 109);
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    var_23 = -var_2;
                    arr_31 [i_1] [i_1] [i_1] = arr_24 [i_0 + 2] [i_1];
                }
                var_24 = 2692804971;
            }
        }
    }
    #pragma endscop
}
