/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_18 &= (max((max((arr_2 [i_1 - 1] [i_0]), ((((arr_2 [9] [i_1 + 3]) ? (arr_3 [i_0] [i_1]) : 127))))), var_16));
            var_19 = (max((arr_1 [i_0]), (((arr_1 [i_0]) * (arr_1 [i_0])))));
            var_20 = (max(127, 1348172943709165511));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_21 = (max((((((-127 - 1) + 2147483647)) >> 1)), var_16));
                            var_22 = (((arr_5 [i_0]) || ((max(((max((arr_3 [i_0] [i_0]), (arr_0 [i_3])))), (var_14 / 1))))));
                            var_23 ^= (max((min((var_14 ^ var_10), (((var_16 << (((arr_5 [i_1]) - 209))))))), ((((arr_1 [i_1]) * var_5)))));
                            var_24 = (min((arr_1 [i_0]), (((-127 - 1) & -18446744073709551615))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] = -116;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_0 - 1] [i_1] [4] [10] [i_0] [i_3] [i_5] = (((~4058) ? var_15 : (arr_4 [i_1 - 2] [i_0] [i_0] [i_0 - 1])));
                            var_25 = (max(var_25, -122));
                        }
                        arr_19 [i_0] = ((((4294967295 * (max(var_15, 0)))) == ((((252 >= ((var_12 ? var_9 : var_3))))))));
                    }
                }
            }
            var_26 = (max(4294967295, 1));
        }

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_27 = (arr_5 [i_0]);
            var_28 = ((~((((((arr_5 [i_0]) ^ (arr_6 [i_0] [i_6] [i_6] [i_6])))) ? var_0 : ((max(23, 65535)))))));
        }
        var_29 = min((max(4294967295, -21138)), (18446744073709551615 == 192));
        var_30 = (((((((70368744144896 ? 2119460338 : 19))) - (((arr_20 [i_0] [i_0] [i_0 - 1]) ? var_15 : 18446744073709551597)))) - ((((4294967295 || ((max(var_17, var_16)))))))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_31 = (min(var_31, ((((((var_14 + var_13) ? ((-(arr_23 [i_7]))) : ((min((arr_23 [i_7]), 0))))) >= ((((max((arr_24 [i_7] [i_7]), 14))) ^ (!-5263))))))));
        var_32 = (max(-var_12, ((((arr_25 [i_7]) || (arr_25 [i_7]))))));
    }
    var_33 = ((!(((((var_2 ? var_4 : -5291)) ^ var_9)))));
    var_34 ^= ((var_15 ? -var_9 : var_10));
    #pragma endscop
}
