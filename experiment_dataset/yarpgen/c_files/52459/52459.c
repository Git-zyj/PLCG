/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = -528243946;
                                var_20 = -64;
                                var_21 = (arr_11 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                            }
                        }
                    }
                    var_22 *= (53 * 10);
                    arr_13 [1] = ((~((var_18 ? (arr_0 [i_0] [i_1]) : -40))));
                }
            }
        }
        var_23 *= ((-1 || (-15717 == 32752)));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_24 += ((min(var_11, (arr_14 [18]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_25 = (((!-9006193786167722477) ? ((4095 ? 1 : (arr_16 [17] [i_5 + 2]))) : 16673));
                    arr_20 [i_5] = var_8;
                }
            }
        }
        var_26 = ((~(0 <= 0)));
        var_27 ^= (((var_5 + 2147483647) << (((-5049466189762918244 || 9223372036854775807) - 1))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_28 = (max(((~(arr_16 [i_8] [i_8]))), ((~(arr_14 [i_8])))));
        arr_25 [i_8] = (max(((!(arr_15 [i_8]))), ((20 < (688717045 >= 3840)))));
        var_29 = (min((max(((4723341025022694465 ? 1 : 16)), 1)), var_15));
        var_30 = (max(((+((91 ? (arr_24 [i_8] [i_8]) : var_9)))), var_13));
    }
    var_31 = ((var_8 <= ((((-96 - 7286448590678831967) == var_14)))));
    #pragma endscop
}
