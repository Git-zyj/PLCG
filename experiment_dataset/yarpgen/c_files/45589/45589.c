/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= min(((var_4 ? var_0 : var_0)), var_12);
    var_19 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (min((min((3304913858 & 857962664), 1755175391)), (max((min(3259136423, var_8)), 20))))));
                var_21 += arr_1 [i_0] [i_1];
            }
        }
    }
    var_22 &= min((min((max(var_13, 732825804)), (var_12 + var_17))), ((var_10 << (var_15 - 3596863975))));
    var_23 = (min(var_23, var_8));
    #pragma endscop
}
