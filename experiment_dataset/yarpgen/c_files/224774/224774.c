/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 *= (-((164 >> (-2147483632 + 2147483646))));
                var_17 = 242;
                var_18 = -1010972914;
            }
        }
    }
    var_19 = ((~(max(var_3, (~-1010972914)))));
    var_20 |= (var_5 != var_11);
    var_21 += (((((3193733066 - var_1) + 7534052000670513867)) >= (var_10 <= 1101234230)));
    var_22 = var_12;
    #pragma endscop
}
