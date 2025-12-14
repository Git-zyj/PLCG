/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((!((((var_12 % var_6) ^ (max(8345341918212658721, -17)))))));
    var_18 = ((240 ? var_14 : ((-((var_6 ? 31278 : 43))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((!(--8345341918212658700)));
                var_20 = (min(var_20, var_1));
                var_21 = (((arr_1 [i_0]) - ((2111141261 ^ (arr_1 [i_1])))));
                var_22 = ((-32766 ? (arr_1 [i_0]) : ((((~var_0) > (~var_15))))));
            }
        }
    }
    var_23 = (((var_13 ? ((min((-127 - 1), var_14))) : ((var_11 ? var_0 : 38757)))));
    var_24 = var_9;
    #pragma endscop
}
