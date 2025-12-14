/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_4, (((~((max(var_11, var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (i_0 % 2 == zero) ? (max((arr_0 [i_0]), (((((50986 ? var_14 : 23151)) >> ((((~(arr_0 [i_0]))) - 3872672023))))))) : (max((arr_0 [i_0]), (((((50986 ? var_14 : 23151)) >> ((((((~(arr_0 [i_0]))) - 3872672023)) - 3234130078)))))));
                var_17 ^= (max((arr_1 [10]), (min(((~(arr_1 [24]))), var_10))));
                var_18 += (max(((((arr_1 [0]) | var_7))), (min((arr_2 [12]), (arr_1 [22])))));
            }
        }
    }
    #pragma endscop
}
