/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((((~var_14) ? (~1364555157) : ((16087 ? 1 : var_0))))) || -1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 -= min(((((((arr_3 [i_0] [i_0]) & (arr_3 [i_0] [i_0])))) ? (((arr_7 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_2]))) : ((((arr_7 [i_0]) ? 1 : 1))))), ((((((((arr_7 [i_1]) < var_2)))) == (((arr_8 [i_0] [i_0] [i_0] [i_0]) | 1))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (~1);
                }
            }
        }
    }
    var_17 = (-var_13 + -var_12);
    #pragma endscop
}
