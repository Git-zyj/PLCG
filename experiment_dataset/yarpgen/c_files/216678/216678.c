/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, -0));
                arr_7 [i_0] = ((((((arr_1 [16] [i_1]) ? (arr_3 [i_0 + 2] [14]) : (((arr_5 [i_1]) ? 2947 : (arr_0 [i_0])))))) ? (arr_1 [6] [6]) : 6272225017445286498));
            }
        }
    }
    var_18 ^= (9223372036854775807 ? (0 <= -80) : var_11);
    #pragma endscop
}
