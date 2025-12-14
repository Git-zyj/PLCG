/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= 16759709191238778268;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (((((max(16759709191238778268, 1687034882470773372)) == (!16759709191238778268))) ? (min((1 ^ 24), -961723510596558588)) : (((1 >= 2069382847) ? (31 % -6584561761684313844) : (~3670016)))));
                    var_18 = min((((((879159450 << (((-84 + 108) - 24))))) ? 137438953472 : (730386474 ^ 961723510596558587))), (((2069382847 % (min(-20, 2069382847))))));
                }
            }
        }
    }
    var_19 = (min(var_19, ((var_10 / (~1687034882470773347)))));
    var_20 = (min((((2479107491 ? (13426455920252986112 != 1) : var_11))), (min(var_2, var_7))));
    #pragma endscop
}
