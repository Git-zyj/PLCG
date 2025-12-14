/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(68, 136)))) ? (min(0, 3342639882112963271)) : var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (!3342639882112963271);
                    var_15 = (!0);
                }
            }
        }
    }
    var_16 = ((var_5 ^ ((var_4 | (((var_10 ? var_1 : var_5)))))));
    var_17 = ((!(var_8 & var_2)));
    #pragma endscop
}
