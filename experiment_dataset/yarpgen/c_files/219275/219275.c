/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_18 != var_18) != var_11))) >> (1 / 9223372036854775791)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 -= (min(((min(1180028818, 12))), (max((arr_5 [i_0 + 2] [i_1 + 1]), (arr_5 [i_0 + 1] [i_1 + 1])))));
                var_21 = (max((arr_2 [i_0 + 1]), (((1371846325 & 0) % (-1180028818 - -72)))));
            }
        }
    }
    #pragma endscop
}
