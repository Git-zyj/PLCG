/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (max(((var_1 ? (min((arr_3 [i_0] [i_1] [i_0]), var_3)) : (((arr_0 [i_0]) | (arr_3 [i_0] [i_0] [i_0]))))), ((((((arr_3 [i_0] [i_0] [i_1]) ? var_2 : var_16))) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [7])))));
                var_19 &= ((-(arr_1 [i_1] [6])));
                var_20 = ((((567775407008212225 ? 2863 : 1273997284)) << ((((var_10 ? var_14 : -var_3)) - 4294965593))));
                var_21 = (~4323981269957887215);
            }
        }
    }
    var_22 ^= var_17;
    var_23 &= ((((!(var_9 == var_15))) || (((~((var_17 ? var_16 : var_3)))))));
    #pragma endscop
}
