/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_8 ? var_4 : ((var_12 ? var_1 : (((max(var_8, 0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = ((var_4 ? (((-53439 > (var_6 - 12120)))) : ((-(min(var_11, (arr_0 [0])))))));
                    arr_10 [2] [i_2] [i_2] = var_8;
                    arr_11 [3] [8] [i_2] [6] = ((1 ? 53464 : (~53439)));
                }
            }
        }
    }
    var_16 ^= (min(((~((max(1, var_13))))), var_2));
    #pragma endscop
}
