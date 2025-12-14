/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((~((min(0, 1))))) + (((-1930124378 & 4464774816107054229) ? ((var_16 ? -1 : 5)) : ((var_14 ? var_10 : var_7))))));
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [6] [6] [1] = ((arr_1 [9] [9]) ? ((((min(-3, -28))) ? ((396640935251368643 ? 1 : 10)) : ((min(12, (arr_1 [i_0] [i_0])))))) : (~0));
                var_19 -= 29478;
                var_20 -= (max((min(0, var_11)), ((((((~(arr_0 [i_0 + 1])))) > var_6)))));
                arr_7 [i_0] [i_0] [i_0] &= (((((12 * (arr_1 [i_0 + 2] [i_0 + 2])))) ? -5 : ((0 ? 17 : (arr_3 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
