/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (((((arr_4 [i_1]) << (((arr_2 [i_0] [i_1] [i_1]) - 1589626926)))) * ((min((arr_6 [i_1] [i_0]), var_15)))));
                    var_18 = ((10 && var_5) ? var_5 : (arr_4 [i_0]));
                    var_19 = 62914560;
                }
            }
        }
    }
    var_20 ^= 0;
    var_21 = var_6;
    var_22 |= var_1;
    #pragma endscop
}
