/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = ((~(((-5738494536791893786 + 9223372036854775807) << (var_11 - 2346340239)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((arr_2 [i_0]) ^ (arr_1 [i_0]))) & (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = ((max((arr_3 [i_0 - 3]), (arr_3 [i_2]))));
                            var_23 = var_19;
                            var_24 += (((arr_9 [i_3] [i_0 - 1] [i_0] [i_3]) ? 4983 : (((arr_2 [i_2]) ? (((var_11 ? (arr_6 [i_3] [i_1] [i_1] [i_1]) : 2394190894))) : ((~(arr_9 [i_1] [i_1] [i_2] [i_3])))))));
                            var_25 = (arr_8 [i_3] [i_0] [i_3] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
