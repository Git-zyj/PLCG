/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((min(var_9, var_6))), (((-415180154 <= (~-15897))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = (((((((16800810411649752460 ^ (arr_5 [i_0] [i_1]))) % -28325))) ? (((min((max(var_6, var_1)), (!var_2))))) : (((arr_2 [i_0] [i_0]) / (min((arr_5 [1] [i_1]), (arr_0 [i_0])))))));
                var_13 *= var_0;
            }
        }
    }
    var_14 = (min(var_14, (((((min((((!(-2147483647 - 1)))), (16800810411649752477 & 13)))) ? (-11336 < var_8) : (((var_9 > (var_6 != var_6)))))))));
    var_15 = var_3;
    #pragma endscop
}
