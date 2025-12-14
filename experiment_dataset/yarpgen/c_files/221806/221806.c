/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((((2147483647 ? (var_11 != var_10) : (~var_16)))) & ((2147483627 ? var_6 : -var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 += (((arr_3 [i_1 + 2] [i_1 + 2]) & (((15113641478856930879 > (arr_6 [i_1 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min((min((22 - 78), -22)), ((max((arr_9 [i_4] [i_3] [i_2] [i_1 - 2]), -719432273)))));
                                var_21 += (-31 / -1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_12 ? (var_17 + var_13) : (((var_3 ? ((18446744073709551593 ? -3769769423914248495 : var_7)) : var_8)))));
    var_23 = ((((((11 * var_4) ? var_1 : var_17))) ? var_17 : ((-(min(-32465, 18446744073709551615))))));
    #pragma endscop
}
