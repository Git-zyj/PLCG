/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 |= ((~((var_1 ? var_9 : var_8))));
    var_12 = ((~((var_9 % ((var_2 ? var_2 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((47653 > 18446744073709551615), (((arr_4 [i_0] [i_0] [i_0 - 1]) ? ((0 ? 1 : 0)) : ((((var_6 != (arr_2 [i_0 - 1] [i_1])))))))));
                var_13 = (+(((!1) & (max(var_6, (arr_0 [i_0]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_0 - 1] [5] [i_0] [i_2 - 1] = ((!(arr_4 [i_0 - 1] [10] [i_2 + 4])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 &= arr_8 [i_0] [i_0 - 1] [i_2 + 3] [i_2];
                        var_15 = (arr_1 [i_0 - 1] [i_0 - 1]);
                    }
                }
            }
        }
    }
    var_16 ^= ((var_1 ? (((min(var_3, var_2)))) : var_6));
    #pragma endscop
}
