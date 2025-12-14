/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 60203;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((((max(1, 200))) >> (var_1 + 31813)))))));
                arr_7 [i_0] = 0;
                var_22 = (min(var_22, ((min(((7508585162823124337 ^ (1 | 1))), ((min((29695 + 2), var_10))))))));
            }
        }
    }
    var_23 *= var_10;
    #pragma endscop
}
