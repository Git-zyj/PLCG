/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [0] [0] = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 |= (arr_10 [i_3]);
                            var_15 -= (max(-var_5, -var_2));
                            var_16 = (~-13948);
                            var_17 = (min((((~((min(var_6, 32765)))))), ((var_2 % (arr_0 [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, 1));
    var_19 = (max(var_19, ((max((min(var_10, var_12)), (!var_0))))));
    #pragma endscop
}
