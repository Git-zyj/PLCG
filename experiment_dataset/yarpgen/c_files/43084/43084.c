/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-132886155 + 2147483647) << (110427603301182258 - 110427603301182258)));
    var_17 += (-20058 ^ 818406621);
    var_18 = (min(var_18, (((3476560674 * (((65530 / 3476560674) * (2089980384 / 818406621))))))));
    var_19 += ((63416 * (((29922 / 24003) + 3933074691))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = 202894907;
                    var_21 = 1;
                }
            }
        }
    }
    #pragma endscop
}
