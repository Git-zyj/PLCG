/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(var_6, ((var_8 << (((max(11942021638180837687, 8)) - 11942021638180837671)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 |= (max((var_0 && var_7), (max(var_7, 10275029033832662527))));
                    var_15 -= (max(((var_4 ? 16388974103331213296 : 2102781422)), (max(64454, var_7))));
                    var_16 = max((max((max(13267789025963440810, 15)), 80)), var_10);
                }
            }
        }
    }
    var_17 = (var_3 ? (max(var_7, ((-16 ? 9679715256640393213 : -623584546)))) : var_5);
    var_18 = (min(var_5, 1));
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
