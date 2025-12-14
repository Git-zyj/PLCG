/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_19) || var_18));
    var_21 = ((-(max(((min(3601183658781683895, 2513295938))), var_0))));
    var_22 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 *= ((((~(max(4352980989858860418, var_15)))) * 1));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] = var_9;
                        var_24 ^= (arr_0 [i_1]);
                        arr_11 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_3] [i_0] [i_0] [i_0]);
                        arr_12 [i_2] [i_0] [i_2] [i_2] = 2584376686;
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] = (arr_6 [i_1] [i_1] [i_0] [i_1 - 2]);
                        var_25 = (var_1 != var_10);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_26 = 3533366173375987191;
                        var_27 = (max(var_27, (arr_4 [i_0] [i_1] [i_2] [i_5])));
                        var_28 = (arr_17 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]);
                    }
                    arr_20 [i_0] [21] [i_2] = (((((-12972 ? (!153) : -111))) ? -12981 : 12950));
                    arr_21 [i_0] [i_0] [i_0] = 1168421334462444750;
                    var_29 = (min((((!(arr_18 [i_1 + 1] [i_0])))), ((~(arr_3 [i_1 - 1] [i_1 + 1])))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_30 *= ((-(min((~var_12), 12971))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_31 = -var_7;
                            var_32 = 24665;
                            arr_29 [i_7] [i_1] [i_1] [i_1] [i_1] |= 393216;
                            var_33 = (var_9 <= var_6);
                            var_34 = (arr_19 [i_0] [i_1] [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_33 [0] [21] [i_0] [i_6] = ((-16 ^ ((((654002479 ? 12594831617555996967 : var_3))))));
                            var_35 = 4294967288;
                        }
                        arr_34 [2] [i_1] [i_0] [i_6] = (arr_19 [i_0] [i_1 - 2] [i_1 - 1]);
                        arr_35 [i_0] [i_0] = ((!(((var_4 >> (var_10 + 22486))))));
                    }
                }
            }
        }
        var_36 = var_11;
    }
    #pragma endscop
}
