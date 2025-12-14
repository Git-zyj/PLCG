/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_3;
    var_21 = (max(var_21, ((((!var_14) >> ((min((!-21), 10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = var_0;
                var_23 = (min(var_23, ((((((21 > 27) / ((14 ? 2085225329716898022 : 14)))) & ((((!((min(var_5, 20))))))))))));
            }
        }
    }
    #pragma endscop
}
