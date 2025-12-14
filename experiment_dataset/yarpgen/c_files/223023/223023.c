/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (((!-32755) || (((var_5 << (var_13 - 177))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = var_16;
                                var_21 -= (arr_2 [6] [i_2 - 2] [i_3 + 1]);
                                var_22 = min(((max((arr_11 [i_3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3]), 6808))), ((((((arr_11 [i_0] [i_0] [i_2 - 2] [16] [i_4] [i_1]) ? (arr_9 [i_0] [i_1] [i_1] [i_3 + 2]) : 16549361979539267325))) ? (((63 ? 67 : 32741))) : (~10734574724104485950))));
                                var_23 -= -1;
                                var_24 ^= (arr_12 [i_0 - 1] [i_1] [1] [i_2 - 1]);
                            }
                        }
                    }
                    var_25 = ((((!(arr_9 [18] [i_0 - 1] [i_2 - 2] [18]))) ? (((!(arr_9 [i_0] [i_0 - 1] [i_2 - 1] [i_0 - 1])))) : (65516 || 65510)));
                    var_26 |= ((((((max(var_14, (arr_3 [5]))) & (var_19 && var_14)))) ? (arr_6 [i_0]) : var_10));
                    var_27 = (((-(arr_1 [i_0]))) - ((((arr_12 [i_2] [i_2 - 2] [i_2] [i_2 + 1]) * 1))));
                }
            }
        }
    }
    var_28 = var_16;
    var_29 = var_18;
    var_30 = (max(var_30, (var_10 < -var_2)));
    #pragma endscop
}
