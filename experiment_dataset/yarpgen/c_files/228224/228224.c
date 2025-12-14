/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 17467564797987604278));
    var_13 = ((min(var_4, (17467564797987604289 + var_2))));
    var_14 = (((!9) < ((~(max(979179275721947309, 979179275721947357))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (-119 | 17467564797987604289);
                var_16 = (36 != 17467564797987604271);
                var_17 = ((((min((arr_5 [i_0] [i_1]), ((((arr_0 [i_0]) >= 221)))))) ? ((((arr_0 [i_0]) % (arr_2 [i_1])))) : (((((20 ? 252 : (arr_2 [i_1])))) ? 17467564797987604273 : var_2))));
            }
        }
    }
    var_18 = (((-var_2 + 2147483647) << (((var_11 & 4235922214) - 72941600))));
    #pragma endscop
}
