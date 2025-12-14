/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_19 == var_6);
    var_21 = (min(var_21, var_0));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (((((~var_15) + 2147483647)) << (((arr_0 [i_2]) - 8907246529622233816))));
                    arr_10 [i_1] = ((~((var_16 ? -101 : var_13))));
                }
            }
        }
    }
    var_23 = (max(((-var_16 ? var_0 : -84)), var_1));
    #pragma endscop
}
