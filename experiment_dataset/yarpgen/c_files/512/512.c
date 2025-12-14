/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((((var_2 ^ (arr_2 [i_1])))) ? var_1 : (min(1631508970, (arr_3 [i_0]))))) >> ((((-((var_7 - (arr_0 [i_0] [i_1 + 4]))))) - 8834439616905848635))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_1, -var_6));
                            var_13 -= (min(var_10, 1));
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, 386561565));
    var_15 = (max(var_15, (!var_0)));
    var_16 ^= 2663458325;
    var_17 = ((var_1 ? (((-((min(150, var_4)))))) : ((0 ? (!var_2) : ((var_6 ? var_9 : 2663458325))))));
    #pragma endscop
}
