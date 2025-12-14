/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_17;
    var_21 = (((var_5 <= var_15) ? (!var_11) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_22 *= (!var_14);
                            var_23 = ((!(((26816 ? (var_0 || var_3) : -240)))));
                        }
                    }
                }
                arr_9 [i_1] = ((~var_17) & (max((~var_0), (var_4 | var_12))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_14 [i_4] [i_5] [i_5] = -var_9;
                arr_15 [i_4] [i_5] [i_4] = var_18;
            }
        }
    }
    #pragma endscop
}
