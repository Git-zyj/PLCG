/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_2;
    var_21 = (-(((var_18 > var_19) ? (((var_5 << (var_5 - 370581498)))) : var_11)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 40;
        var_22 = 4798589334587019718;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_3] = ((-var_13 && (((((min((arr_7 [i_3] [i_2] [i_1] [i_0]), (arr_1 [i_0])))) ? (max(var_15, var_8)) : (((min((arr_4 [i_0]), (arr_9 [i_0] [i_1] [4] [i_2 + 1] [i_2 + 1] [9]))))))))));
                        var_23 = (((max(-var_3, ((((var_18 + 2147483647) << (9223372036854775808 - 9223372036854775808)))))) >= (((((max((arr_0 [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_2 + 1] [i_3])))) ? ((1 ? var_10 : var_17)) : ((-15 ? 1 : -1854343398)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_24 = (arr_4 [i_2]);
                                var_25 = (max(((max(-9115, (arr_12 [5])))), (((arr_6 [i_0]) >> (var_1 <= 2648645516)))));
                            }
                        }
                    }
                    var_26 -= -75;
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_27 *= ((!(((var_14 - (((arr_16 [i_6]) & 4026531840)))))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_28 = (((arr_30 [i_6] [i_7] [i_8] [i_9] [i_9] [i_9] [i_7]) <= (arr_25 [i_7 + 3] [i_10 - 1])));
                            var_29 = ((-(arr_17 [i_6 - 1])));
                        }
                        var_30 = (arr_23 [18] [18] [i_8] [1]);
                    }
                }
            }
        }
    }
    var_31 = (max((!268435455), 2648645516));
    #pragma endscop
}
