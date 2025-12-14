/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((~32767), ((var_5 ? ((1215339426882275288 ? (-9223372036854775807 - 1) : 52794)) : var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = var_2;
                var_15 = (min(((min((~1), (1 - -16641)))), 1));
            }
        }
    }
    #pragma endscop
}
