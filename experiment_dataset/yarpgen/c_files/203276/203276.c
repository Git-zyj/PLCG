/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max(((var_2 | (max(var_12, var_4)))), var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((max(-49, (min(1252669890, 15457141746214904870))))))));
                    var_18 = (min(var_18, (((max(747925059, 33822867456))))));
                }
            }
        }
    }
    #pragma endscop
}
