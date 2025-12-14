/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_11 += (((((((min(var_3, var_0))) == ((max(var_1, -112)))))) - (arr_2 [i_1])));
                var_12 *= (arr_1 [i_0]);
            }
        }
    }
    var_13 += (((~(max(var_5, var_4)))));
    var_14 = (max((-127 - 1), 111));
    var_15 = (((min(var_4, (var_5 <= var_1)))));
    #pragma endscop
}
