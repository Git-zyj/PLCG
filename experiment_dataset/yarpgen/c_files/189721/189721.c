/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_10 = var_6;
                                var_11 = (arr_11 [i_0] [13] [1] [7] [i_4 + 1]);
                                var_12 = (min(var_12, 471908908));
                            }
                        }
                    }
                    arr_13 [i_1 - 2] = 140;
                    arr_14 [i_1] = (arr_11 [i_0] [i_0 - 2] [i_0] [i_2] [i_2]);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] |= (max((arr_6 [i_0 - 4] [i_0 - 2]), var_8));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_13 = (arr_10 [i_0] [i_1 - 1] [i_7 - 1] [i_7 - 1]);
                                var_14 = ((min(3823058388, 3823058391)));
                            }
                        }
                    }
                    var_15 = (max(((min((min(111, -5788875256885808754)), 471908908))), (min(((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_5]) : (arr_9 [i_0] [i_0] [i_5] [i_0])))), var_1))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_25 [i_8] [i_1] = (max((max((min((arr_10 [i_0] [i_0] [i_8] [i_0]), 115)), (((-(arr_12 [i_0] [i_1] [4] [i_1] [i_1] [i_0])))))), (max(((var_9 + (arr_0 [i_8]))), (arr_12 [i_0] [i_0] [17] [i_0 + 2] [i_0] [2])))));
                    var_16 = ((((((arr_15 [i_8] [19] [i_8]) ? (arr_15 [i_0 - 2] [i_0 - 2] [i_8]) : var_2))) ? 2746546098 : ((min((arr_12 [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0]), (arr_22 [i_8] [i_0 + 1] [i_1 - 3] [i_1] [i_8] [i_0]))))));
                }
                var_17 *= ((-(arr_5 [1] [1])));
                var_18 = (~4610560118520545280);
                arr_26 [i_0] [i_1] = -1408538746958318490;
            }
        }
    }
    var_19 *= var_9;
    var_20 = (min((var_5 + var_9), (((max(var_4, var_1))))));
    #pragma endscop
}
