/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (0 - var_10);
                var_20 = (max(var_20, (((((241 ? 30 : var_18)) >> ((404120560711853169 ? (0 && 18415) : -404120560711853169)))))));
            }
        }
    }
    var_21 = var_5;
    var_22 = ((~var_1) + var_4);
    var_23 = ((((14827 ^ (26990 || 1))) & var_17));
    var_24 = ((max(-22233, -32758)));
    #pragma endscop
}
