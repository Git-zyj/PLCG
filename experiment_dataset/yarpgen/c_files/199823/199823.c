/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (min(var_15, var_9));
        var_16 = ((196521481 ? -1162082423 : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_17 += var_11;
                        var_18 = -1889541110;
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_2] [i_1] = var_0;
                            arr_16 [i_0] [i_0] [i_2] = var_3;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_19 [i_0] [i_2] [i_2] = var_12;
                            arr_20 [i_0] [i_2] [i_2] [3] [i_6] = -1;
                            var_19 = (max(var_19, (((-30 ? var_14 : var_7)))));
                            var_20 = 2147221504;
                            var_21 *= 2;
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] = (((var_10 >> 1) ? (((var_13 ? 4269456131 : (var_5 | 1923873184)))) : -1804090652));
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_4] [4] [i_0] = (var_6 / -1);
                            arr_27 [i_2] [i_2] [i_1] [i_2] = (6602807691198502354 | 3557816444);
                            arr_28 [i_0] [i_2] [i_2 + 2] [i_4] [i_7] = 11904138192091735640;
                        }
                        for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_22 = (2080687427 < -3);
                            var_23 = ((1761086528 && (((4294967291 ? 2533880768 : 2806115982693004343)))));
                        }
                        arr_32 [i_2] [i_2 - 3] [2] = var_1;
                        arr_33 [i_4] [i_2] [i_2] [i_2] [i_0] = (((((var_3 ? 1761086521 : var_8))) ? var_11 : (var_13 / var_2)));
                    }
                    arr_34 [i_0] [i_0] [i_0] [i_2] = (((6549699027072154781 / 33111) ? 1 : (((var_0 ? var_13 : 0)))));
                }
            }
        }
    }
    var_24 = (((((((1761086528 ? 15640628091016547288 : 18446744073709551598)) & (((-5969 ? 1 : var_13)))))) && (var_13 & 2806115982693004330)));
    var_25 = 1;
    var_26 = 1761086519;
    #pragma endscop
}
