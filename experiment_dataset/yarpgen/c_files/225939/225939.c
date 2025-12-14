/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_2;
    var_16 = var_7;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 += ((((~((var_7 ? 2675744394952521713 : 1)))) != ((((arr_0 [8]) << (var_14 - 77))))));
        var_18 = -2675744394952521713;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (arr_3 [1]);
        var_20 = ((~(((arr_1 [i_1]) ? 12708797111362811930 : (~5737946962346739686)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_21 = (max(var_21, (!-1293334086062464400)));
                var_22 += (!var_3);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] [12] [i_5] &= ((((-(arr_2 [i_3 + 1]))) + ((((arr_9 [i_2] [i_5 + 1] [i_5 - 1]) <= var_3)))));
                            arr_20 [i_2] [i_3] [i_4] [i_3] = ((~(min(var_8, (max((arr_1 [i_2]), (arr_0 [i_3])))))));
                            var_23 = ((~(arr_10 [i_3])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
