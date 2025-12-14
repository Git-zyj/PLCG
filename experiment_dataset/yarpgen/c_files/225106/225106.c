/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (1 ? 1 : 20);
    var_21 = ((((((1435532141 ^ 0) ? (min(var_14, var_19)) : 71)) + 2147483647)) << ((((((51 ? -1435532132 : var_2)) + 117)) - 13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (min((-21 - var_7), -21));
                    var_22 = (min((max(-14, (max(46, var_12)))), 60));
                    arr_8 [i_0] [i_0] [i_0] = ((min(var_3, 7)) & 64);
                    var_23 -= (min(1, 1));
                }
            }
        }
    }
    #pragma endscop
}
