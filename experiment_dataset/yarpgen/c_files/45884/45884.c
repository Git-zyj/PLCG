/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = ((var_10 ? (arr_0 [i_1]) : (((arr_7 [i_2] [i_1] [i_0]) | -15286))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [12] [i_1] [i_0] = (((((1 & (arr_13 [i_2] [i_2 + 2] [i_2] [i_2])))) ? (arr_5 [i_2 + 3] [i_1] [i_1]) : (arr_12 [i_2 + 2] [i_2] [i_2 + 3] [9] [i_0])));
                                var_13 = (!((((!1874077188930839731) ? (min(2, var_8)) : (arr_0 [11])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_14 = ((((((((var_9 ? -1874077188930839732 : -1874077188930839732))) ? ((((arr_0 [i_2]) ? 1874077188930839731 : (arr_0 [i_5])))) : 7928413876030788415))) ? var_8 : ((7928413876030788415 ? (arr_13 [i_0] [i_1] [i_5] [i_5]) : (~4293389762941077343)))));
                        var_15 = ((((min(((-1874077188930839731 ? var_1 : var_6)), (!3893414493)))) ? (((((max(-1, 7819451094326275514))) ? 1874077188930839731 : (((859637499 ? (arr_2 [0]) : 1750047335)))))) : 7928413876030788415));
                        arr_19 [i_0] [i_1] [i_2] [5] = var_10;
                        arr_20 [i_0] [1] [11] [i_5] [i_1] = (((((1772176220489075759 ? -1214426208509169237 : 47))) || (((var_9 ? (arr_17 [1] [i_1] [i_1] [i_1]) : (arr_0 [3]))))));
                    }
                    arr_21 [i_1] = ((var_8 ? (max((arr_4 [i_1] [i_1] [i_2 - 1]), (arr_6 [i_0] [i_0]))) : ((((((~(arr_8 [i_1] [i_1] [i_1])))) ? -1874077188930839731 : (arr_5 [i_2 + 3] [7] [7]))))));
                    var_16 += ((((!(arr_17 [i_0] [2] [i_2 + 3] [i_2])))));
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
