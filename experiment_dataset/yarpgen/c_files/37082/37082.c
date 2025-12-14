/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((~20805) ^ var_0))) ? var_2 : (min((var_1 ^ var_0), var_11))));
    var_17 = ((((((var_3 ? 255 : var_13)) ^ (var_11 && var_5))) ^ (min(var_5, ((var_15 ? var_7 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((arr_0 [14] [14]) <= (~-257))))));
                    arr_10 [i_0] = (min(265, -256));
                }
            }
        }
    }
    #pragma endscop
}
