/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = -19614;
                var_19 |= (min((max(var_13, var_3)), (((arr_3 [i_1] [i_0]) ? 5911 : -19652))));
                var_20 = arr_5 [i_0];
            }
        }
    }
    var_21 += (max(var_5, var_3));
    var_22 = (min((max(((var_12 ? 90 : var_15)), (var_16 == var_12))), ((((max(var_2, 1)) >> (-872327397 + 872327415))))));
    var_23 ^= (max(var_10, var_16));
    #pragma endscop
}
