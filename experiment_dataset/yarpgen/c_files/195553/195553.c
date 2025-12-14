/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max(var_10, ((~(~210))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = ((38738 - (arr_1 [i_0])));
        var_21 = -576460752303423424;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= ((((((max((arr_1 [12]), (arr_0 [1]))) > var_18)))) & (~576460752303423424));
        arr_6 [i_1] [i_1] = ((18446744073709551610 && (((-(-32767 - 1))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (13 / 198);
        var_22 -= (!var_9);
        var_23 = (min(var_23, (arr_2 [i_2])));
        arr_10 [10] [10] = var_2;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                var_24 ^= (min(576460752303423424, -1127909114));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_25 = arr_17 [i_4] [i_4] [i_6];
                            var_26 = (((((4177920 + (-9223372036854775807 - 1)))) ? (min(var_13, -4205333013024064821)) : (arr_8 [i_4 + 1])));
                            arr_20 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6] &= (min((arr_13 [i_5]), ((-(!3855030157)))));
                            var_27 = (8589934591 | 4398012956672);
                        }
                    }
                }
                var_28 *= var_8;
                var_29 = (max(var_14, (((!(arr_7 [i_4] [i_4 + 1]))))));
            }
        }
    }
    #pragma endscop
}
