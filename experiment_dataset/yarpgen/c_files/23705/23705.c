/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_11 [i_1] [6] = (max(66, 2574550243));
                    var_20 = ((((-(max((arr_10 [i_0] [23] [i_0] [i_0]), var_18)))) > ((((!((((arr_6 [1] [i_0]) ? -187809841 : var_19)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (max((min(((max((arr_14 [15] [4] [i_3] [i_3 - 1] [i_4] [17]), 1))), (arr_3 [i_0]))), ((max(1768440500, 335322295)))));
                                arr_18 [i_0] [i_0] [8] [i_0] [i_0] [18] &= min((max(((min(13187, 60))), (min((arr_5 [i_4] [i_1]), -1768440501)))), (~70));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((min((min(var_14, 13161), ((max(var_16, var_18)))))));
    #pragma endscop
}
