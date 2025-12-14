/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(((((var_12 || 2544895048) * 0))), var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] [2] [10] [12] = (min(((1 / (((arr_3 [i_0] [5]) ? var_2 : 836505041)))), var_1));
                                var_14 = (min(var_14, (((((((((-28 ? 25 : var_2))) || ((max(9223372036854775807, (arr_7 [i_0] [i_1] [i_2]))))))) != (~249))))));
                                arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] = (((((arr_2 [i_3 - 3]) || ((((arr_6 [i_1] [i_1] [i_2] [6]) ? (arr_2 [i_0]) : 17))))) ? (max(((max((arr_6 [i_1] [i_1] [i_0] [i_0]), 1))), (((arr_9 [i_1] [i_1]) ? (arr_2 [i_3]) : (arr_0 [i_0] [8]))))) : (min(((~(arr_6 [i_1] [i_1] [8] [i_3]))), ((((arr_11 [i_1] [i_1] [i_1] [i_3 - 2] [i_4]) > -8192)))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] = (((-127 - 1) ? 1 : 6144));
                }
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
