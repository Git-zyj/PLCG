/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((((8878154096898408827 ? var_12 : var_9))) ? (~8497509092896474056) : ((((arr_12 [i_4] [i_1] [i_2] [i_3] [i_3 + 1]) << (var_9 - 2480224362))))));
                                var_22 = var_14;
                            }
                        }
                    }
                    var_23 = ((((arr_4 [i_2] [i_1]) ? var_3 : (arr_4 [i_0] [i_1]))));
                    var_24 = (((((max((arr_2 [i_1]), -1)) + var_9)) + ((max(((((arr_2 [i_0]) ? -590701280 : -42))), (max(var_12, (arr_8 [i_1] [i_1] [6] [i_1]))))))));
                }
            }
        }
    }
    var_25 = ((-var_6 * (var_9 + var_19)));

    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_26 ^= (((((-(max(2321590527015712122, 8878154096898408813))))) ? (max(1, 14590703397395769687)) : (((arr_14 [i_5 + 1]) | 2273105650471803193))));
        var_27 = 1;
        var_28 ^= (max(((5 ? (arr_14 [i_5 + 1]) : (arr_13 [i_5 + 1] [i_5 + 1]))), ((((arr_13 [i_5] [i_5 + 1]) % (arr_13 [i_5] [i_5 + 1]))))));
        arr_15 [15] = max(-3, -14156411443816565);
    }
    #pragma endscop
}
