/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = (!var_0);
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 *= -913701598;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 -= (((!var_3) % (min(((61939 ? 10924 : var_3)), 12997243311150383547))));
                            arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] = min(var_4, 2479841588);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
