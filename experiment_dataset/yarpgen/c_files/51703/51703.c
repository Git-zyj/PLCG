/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((max(var_7, (((2511834639 ? 1783132654 : (arr_5 [10] [i_0] [i_0])))))), (var_11 ^ 7631950828840402133)));
                                var_17 = (max(var_17, (((-((7631950828840402133 ? 7631950828840402133 : -707391333)))))));
                                arr_14 [i_0] [6] [i_0] [i_0] [12] [i_0] [i_0] |= var_3;
                            }
                        }
                    }
                    var_18 -= (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((5134491407908919153 ? 599607784 : var_13)) : ((((arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]) ^ var_8)))));
                }
            }
        }
    }
    var_19 = (((707391332 ^ ((var_13 ? 7631950828840402133 : var_3)))));
    var_20 = var_4;
    #pragma endscop
}
