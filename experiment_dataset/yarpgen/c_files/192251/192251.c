/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_1] = ((((((((var_0 >> (var_4 + 9461)))) ? var_2 : (var_1 && var_4)))) ? ((((~var_8) != (!var_4)))) : ((((((var_5 ? var_10 : var_2))) || (((var_5 ? var_2 : var_0))))))));
                    var_11 = var_3;
                }
            }
        }
    }
    var_12 = 18166;
    #pragma endscop
}
