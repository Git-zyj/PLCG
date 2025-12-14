/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 ^= ((((((var_11 && 73) >> ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [10])))))) ? ((((((arr_2 [i_0 + 1]) || (arr_10 [i_1])))) - (-437 - 4797))) : (arr_5 [i_0 + 1] [i_4])));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] = (((((-3595870239015227993 ? ((var_1 ? (arr_11 [i_0]) : var_2)) : var_10))) * (((max(-974042341, 17544167616044180286)) * ((((arr_1 [i_0]) ? var_14 : -1648214296903143969)))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, (arr_2 [2])));
                    arr_15 [i_2] [i_1 + 2] [i_2] = (1 * 3326908353858741586);
                }
            }
        }
    }
    var_20 = (~var_4);
    var_21 = ((((((~var_16) % (4294967295 - -3595870239015227964)))) ? (((((var_17 ? var_7 : var_8))))) : -3595870239015227989));
    #pragma endscop
}
