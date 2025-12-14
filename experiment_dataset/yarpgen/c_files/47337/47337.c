/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [3] [i_0 + 3] [i_0] = (((arr_0 [i_1] [i_1]) ? (((((((-108 ? var_6 : 65531))) && -18407)))) : (min(var_3, (arr_6 [i_0] [i_0])))));
                    arr_8 [i_0] [i_0 + 1] &= (arr_4 [14] [2]);
                    arr_9 [7] [7] [i_2] [i_2] = ((((max((arr_5 [20] [i_0] [i_0] [i_0 - 1]), var_4))) ? ((~(((arr_5 [i_1] [i_1] [i_1] [i_1]) | (arr_1 [i_0]))))) : (((((((arr_0 [i_0] [i_0 - 2]) ? (arr_1 [i_1]) : var_9))) ? (!var_5) : 107)))));
                    var_12 = ((((((((arr_0 [i_1] [i_1]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))) && (((var_7 - (arr_3 [i_0 + 3])))))) ? (((arr_5 [i_0 + 3] [i_0] [i_0] [i_0]) ? (arr_5 [i_0 - 1] [i_0 - 1] [21] [i_0]) : (arr_5 [i_0 + 3] [17] [i_0 - 2] [8]))) : ((1 >> (((arr_5 [i_0] [i_0] [i_0] [i_0]) + 298052497))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = (min((min(((~(arr_13 [i_0]))), (((!(arr_3 [i_3 + 1])))))), (arr_14 [i_4] [i_4 + 1] [i_4 + 3] [i_4] [i_4 - 4])));
                                var_13 = ((!((min(102, 13022490014438375291)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
