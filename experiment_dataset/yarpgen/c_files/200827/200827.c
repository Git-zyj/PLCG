/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 35853;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [6] = arr_4 [i_0];
                var_11 = (min((((((48211 ? var_0 : (arr_1 [i_1])))) ? ((min((arr_3 [i_0] [i_1] [i_0]), 40644))) : (5138 & 60390))), 59970));
            }
        }
    }
    var_12 = var_8;
    #pragma endscop
}
