/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 + (((~var_2) ? ((min(var_1, var_13))) : (~var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = ((-2 ? 17 : 0));
                var_16 = (max(-23, (max(9, ((-18 ? -1 : (arr_0 [i_0] [i_0])))))));
            }
        }
    }
    var_17 = var_4;
    var_18 *= ((((max(3786044313329262774, 15980310929818700156))) ? (var_10 * 201) : 26));
    #pragma endscop
}
