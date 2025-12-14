/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= (((((((min(var_6, var_4))) & var_3))) || (((((max(var_11, var_7))) ? var_6 : (1 & 1))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [3] = (max(((var_7 && (arr_5 [i_1] [i_0] [3]))), 1));
            var_13 = (arr_2 [i_0]);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_9 [i_2] = (arr_4 [9]);
                var_14 = 4294967295;
                arr_10 [6] [i_1] [i_1] = var_1;
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 = (((arr_1 [i_0]) ? var_10 : var_7));
            arr_14 [9] [i_3] &= ((476713178 ? 4907433343744821911 : (((0 ? var_3 : var_4)))));
            var_16 += (((var_9 & var_0) ? var_7 : var_5));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [8] [i_5] = ((-(((arr_2 [i_0]) ? var_1 : -29987))));
                        var_17 = (max(var_17, (-9223372036854775807 - 1)));
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = max(-113947175189574959, var_0);
        var_18 -= ((arr_1 [i_0]) ? -16310354204941658584 : (15299819027744231586 % 4294967292));
    }
    var_19 = (min(var_19, ((max((((1 ? 9223372036854775796 : 18446744073709551615))), ((max(0, 564257065))))))));
    var_20 = var_5;
    var_21 = var_1;
    #pragma endscop
}
