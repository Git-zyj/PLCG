/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_16 = (((((!var_1) ? (~274877775872) : (min(12253974595397103438, 6192769478312448177)))) << (((((arr_9 [i_0 + 1] [i_1] [6] [i_2] [i_3] [i_4 - 1]) ? (64 | var_9) : -978511131837545833)) - 80))));
                            var_17 *= (((((-(arr_10 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] [i_4])))) >= (max(1221725454, 38))));
                            var_18 = (min(-var_13, (((min(6192769478312448174, var_10)) + var_9))));
                            var_19 = -1;
                            arr_13 [i_3] [i_2] [i_0 - 1] = (-115 && -115);
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [16] [i_5] = (arr_2 [i_0 - 1] [i_0 - 1]);
                            var_20 = 2251799545249792;
                            var_21 = 32767;
                            var_22 = ((!(~var_9)));
                        }
                        var_23 = ((~(((((-20022 + 2147483647) >> (var_1 + 126)))))));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_24 *= 12253974595397103438;
                        var_25 = ((1922158235 ? 1450698082 : -39));
                        var_26 = 20013;
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        var_27 *= -12;
                        var_28 &= 209;
                        var_29 = (arr_1 [i_7 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_30 &= ((~(((~var_13) & (~var_1)))));
                        arr_25 [i_0] [i_0] [i_2] [9] = 6192769478312448177;
                        var_31 = ((-(38 << var_4)));
                        var_32 = (max((((((~var_0) + 2147483647)) >> (((arr_6 [i_0] [i_0] [i_8]) - 10682813224123577683)))), (((min(var_14, 12253974595397103441))))));
                    }
                    var_33 = ((-((var_6 ? (arr_1 [i_0 + 1]) : 44))));
                    var_34 = (arr_10 [i_1 - 3] [i_1] [i_1] [i_1] [i_1] [i_1 - 3]);
                }
            }
        }
    }
    var_35 *= ((max((-39 && -38), var_0)));
    #pragma endscop
}
