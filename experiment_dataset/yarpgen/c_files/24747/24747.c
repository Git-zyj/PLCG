/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_4;
    var_16 = 0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (min(var_17, 32767));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 *= ((48 ? 32767 : ((max(-32763, (arr_5 [i_0] [i_1] [i_2] [i_3]))))));
                        var_19 = ((-((7 ? 2047 : 32767))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_20 = (((((~0) ? ((0 ? -32748 : 4)) : -20)) == 1));
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_22 = (max(-20, 27));
                            arr_17 [i_0] [i_1] [i_0] [i_5] [i_1] |= 0;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_26 [i_0] [i_7] [i_7] [i_8 - 1] [i_9] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                            var_23 = 65535;
                            var_24 -= ((-1 ? 38 : ((0 ? 32763 : 1))));
                        }
                    }
                }
                var_25 = 0;
                var_26 -= (((((65535 ? -32763 : (-9223372036854775807 - 1)))) || (18446744073709551615 ^ 1)));
            }
            var_27 = 32763;

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_30 [i_1] [i_10] = ((((min(((18446744073709551615 ? var_0 : 32767)), 536870911))) ? -1 : 0));
                var_28 = (-32767 - 1);
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_29 ^= ((2147483641 ? 127 : -1));
                            var_30 &= (((((min(32767, 0))) && (!-1))) ? (0 || 9223372036854775799) : 18446744073709551610);
                            arr_37 [i_12] [i_1] [i_10] [12] [i_1] = (max(0, (arr_5 [i_1] [i_1] [i_10] [i_1])));
                            var_31 = (((arr_4 [i_0] [i_1] [i_12]) ? 20 : 32767));
                        }
                    }
                }
                arr_38 [i_0] [i_1] [i_10] &= var_0;
                var_32 = ((((-((0 ? 18446744073709551612 : 0)))) > var_10));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_33 -= ((~(arr_6 [i_0] [i_0] [i_0])));
            var_34 -= ((((~(-127 - 1))) <= (~67108863)));
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    var_35 = (0 == 1);
                    var_36 = ((~(min(((0 ? (-9223372036854775807 - 1) : 9)), 192))));
                }
            }
        }
    }
    var_37 |= ((1 ? -0 : ((((max(65535, 1073733632))) ? 98 : var_6))));
    #pragma endscop
}
