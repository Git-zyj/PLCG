/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = 7668596476922419289;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = ((-((var_6 ? (var_2 && 10778147596787132327) : (((arr_4 [i_0]) ? var_6 : var_1))))));
                                arr_16 [i_0] [21] [i_4] [i_4] = ((-(((-var_0 < (max(7595825934045922192, var_1)))))));
                                var_15 = ((((max(var_7, 44215))) << (7668596476922419289 - 7668596476922419227)));
                                var_16 = ((~((8 ? (~7668596476922419301) : 61))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_17 -= 8713432383524176771;
                            var_18 -= ((var_9 + (max((arr_2 [i_2 - 1]), (arr_3 [i_2 - 1] [i_6 + 3])))));
                            var_19 = (min(var_19, ((((arr_19 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? ((((61 ? var_1 : (arr_10 [i_1] [i_1]))))) : (max((!var_2), (min(-3922178612528955216, 82)))))))));
                            var_20 -= ((~((var_7 ? var_9 : (var_5 / -39)))));
                        }
                        arr_21 [i_2] = (max((0 | var_7), (1073900699 <= 7878406275072149730)));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_21 = ((var_10 && ((((arr_4 [i_7]) ? 0 : var_4)))));
                            var_22 += ((var_9 != (arr_7 [i_2] [i_1] [i_2] [i_7])));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_29 [7] [7] = ((!(((-var_1 ? (min(var_5, 4676415847068413812)) : (17448030344382346596 != 0))))));
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_9] = ((!((!(arr_5 [i_2 - 1])))));
                        }
                        var_23 = var_10;
                        var_24 = ((((min(7668596476922419289, 84118068))) ? (((-(arr_25 [i_0] [i_2 - 1] [i_2] [i_0] [i_2])))) : ((-9191 ? 1 : -3779741413073455022))));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_33 [18] [i_1] = (((arr_24 [i_0] [i_1] [i_2] [i_10] [i_10] [i_2 - 1]) ^ (max(0, -432872980764363934))));
                        var_25 ^= (!var_5);
                    }
                }
            }
        }
    }
    var_26 = (max(((-(max(var_11, var_5)))), 65535));
    #pragma endscop
}
