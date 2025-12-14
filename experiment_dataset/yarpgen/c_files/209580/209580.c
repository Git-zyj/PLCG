/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = min((((((arr_1 [i_0]) / (arr_1 [i_0]))) * var_11)), 4630710299841024453);
                var_15 = (min(155, 101));
            }
        }
    }
    var_16 = ((var_13 ? (((5602 ? 5602 : 18096))) : (min(0, 2305772640469516288))));
    var_17 ^= var_2;
    var_18 = var_12;
    #pragma endscop
}
