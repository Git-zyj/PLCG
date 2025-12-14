/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_10, var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= ((var_9 % (((~(max(var_3, var_5)))))));
                arr_5 [i_0] [i_1] = (min((max(4747765300133113395, ((max(65525, var_10))))), (min(((var_9 ? 13698978773576438221 : (arr_0 [1] [i_0]))), (31 + var_12)))));
                var_19 -= ((!(((var_13 ? var_16 : var_15)))));
                var_20 -= (-(min(var_14, 510)));
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
