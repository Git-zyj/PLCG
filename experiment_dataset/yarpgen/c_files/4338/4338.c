/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (((arr_1 [i_0] [i_1]) ? 0 : ((((0 ? 1 : 3241210490))))));
                var_12 -= (arr_0 [i_0 + 1] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 += 1;
                            var_14 -= (min(((((min(var_3, var_11))) ? (arr_2 [i_0] [i_3]) : (max(var_8, var_6)))), ((max(-103, 11526)))));
                        }
                    }
                }
            }
        }
    }
    var_15 |= (min(var_7, 5310972642375531713));
    #pragma endscop
}
