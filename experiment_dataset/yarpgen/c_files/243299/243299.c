/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((((-1975181713 < var_5) - var_7)) >> (var_8 + 19988))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [i_2] [i_1] [i_0] = (((7870188330322674162 ? (arr_4 [i_1 + 1]) : var_11)));
                        arr_12 [i_0] [i_1] [7] [i_3] = ((((max((arr_9 [i_1] [i_2] [i_3] [i_3] [i_3]), (arr_4 [i_0 + 1])))) - (min((arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [2] [i_2]), (arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])))));
                    }
                    for (int i_4 = 3; i_4 < 7;i_4 += 1)
                    {
                        var_15 = ((~(((var_12 / 1513523875101700518) ? -1975181713 : (((1 ? 1 : (arr_0 [i_0]))))))));
                        arr_15 [i_0] [i_1] [1] [0] [i_4] = (arr_7 [2] [i_1] [i_2] [4] [9]);
                        var_16 = 1;
                        var_17 = (-1975181713 ? (((!1) ? (max(-1975181707, 1)) : 3488272414)) : ((-(arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 2]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_18 = var_12;
                        arr_18 [i_1] [i_2] [i_1] = ((~(arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 1])));
                        var_19 = var_3;
                    }
                    var_20 -= -1718917906;
                }
            }
        }
    }
    var_21 = (max(var_21, 3488272414));
    #pragma endscop
}
