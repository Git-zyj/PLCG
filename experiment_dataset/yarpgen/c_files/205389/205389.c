/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = ((~(~var_16)));
        var_18 = (max(var_18, (((var_13 && ((min((arr_1 [i_0]), (max((arr_1 [i_0]), -9223372036854775807))))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_19 = ((arr_4 [i_0]) ? 6956729618691933480 : 1906611843031761972);

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                var_20 ^= (((arr_2 [i_0] [i_0]) | (arr_2 [i_2] [7])));
                var_21 += (arr_6 [i_1] [i_2 + 2] [i_2 + 2]);
                var_22 = 2740145611;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_23 = ((var_4 ? ((1554821682 << (1554821677 - 1554821675))) : (((5907416990519795981 ? var_13 : (arr_9 [i_0] [0] [i_1] [i_3]))))));
                var_24 -= ((65535 << (4294967295 != 1238307857)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_25 = (min(var_25, 54));
                            var_26 |= (((arr_16 [i_5] [i_4] [0] [0] [i_0]) && var_7));
                            var_27 = (((arr_5 [i_0] [i_1]) ? (arr_14 [8] [i_4] [i_4] [i_1] [i_4] [i_0] [i_0]) : var_2));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_28 = ((-(arr_10 [i_0] [i_1] [i_6] [i_6 + 1])));
                        var_29 = (-5397722714086795050 ? 4180421673 : 8777794424800121536);
                        var_30 = 4611686018427387903;
                        var_31 = var_8;
                    }
                }
            }
            var_32 = var_0;
        }
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            var_33 ^= (arr_6 [i_0] [5] [5]);
            var_34 = 3056659466;
            var_35 &= arr_9 [i_0] [i_0] [i_0] [i_0];
            var_36 = (((min(var_13, -5996912795514077350)) / 1554821682));
            var_37 = (((~1238307832) ? (arr_20 [i_0] [i_8 - 1] [i_8]) : (arr_24 [i_8])));
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_38 = ((5397722714086795062 ? var_0 : (min(1238307830, 9223372036854775807))));
        var_39 ^= (arr_22 [2] [i_9] [9] [i_9] [i_9]);
        var_40 |= var_2;
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    var_41 = (min((arr_28 [i_9]), var_14));
                    var_42 &= (max((min((arr_13 [5] [i_10] [i_11 - 1] [i_10] [i_11 - 1]), 1729382256910270464)), (arr_14 [i_9] [8] [4] [i_9] [i_11] [2] [0])));
                    var_43 = (arr_9 [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 1]);
                }
            }
        }
    }
    var_44 = (min((((!(~var_1)))), var_14));
    var_45 = -var_11;
    #pragma endscop
}
