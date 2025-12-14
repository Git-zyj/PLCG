/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((32192 ? -100 : 1))) ? ((((70 ? var_6 : var_5)) + var_6)) : var_6));
    var_15 += var_10;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_16 = (!255);
            var_17 = ((-(arr_4 [i_1])));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_7 [i_0] &= (max((((((((arr_0 [i_0] [12]) && (arr_0 [1] [i_2])))) > (var_11 * 2)))), ((-(((arr_6 [i_0] [i_2]) ? var_13 : (arr_4 [i_2])))))));
            arr_8 [i_0] &= ((((((1 ? (arr_5 [i_0 - 1] [0]) : -31037)))) + 1));
        }
        var_18 = 253;
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (max((!var_8), (arr_11 [3] [i_0 + 3] [i_3 + 1])));
                    var_20 = (max((min((arr_13 [i_3] [i_3 - 2] [i_3]), (arr_4 [12]))), 1));

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_21 = (((1 % 191) << (((~60) + 69))));
                        arr_17 [i_5] [i_5] = (((((arr_12 [i_3 - 1] [i_3 - 1] [1]) % (arr_12 [i_0] [i_3 + 1] [i_4]))) + (arr_12 [i_0] [i_3 + 1] [i_4])));
                        arr_18 [i_0] [i_5] [i_4] [i_5] = ((-32765 ? 26 : 8329591898222430817));
                        var_22 = (arr_6 [i_0 + 2] [i_0 + 2]);
                    }
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_23 += ((((((((var_13 | (arr_13 [i_0 + 3] [i_0] [i_0])))) ? ((33293 ? var_8 : -18340)) : 41919))) ? (arr_21 [1] [1] [1]) : ((-100 ? (arr_11 [i_3 - 1] [i_6 + 1] [i_0 + 3]) : (arr_10 [i_3 + 1] [i_3])))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_24 -= 254;
                            var_25 = (min(var_25, ((((((~((var_6 >> (((arr_10 [12] [12]) - 111))))))) ? ((((((arr_15 [10] [i_3] [13] [1] [i_3]) ? (arr_4 [i_7]) : (arr_21 [i_0] [10] [10]))) ^ (arr_12 [i_0] [i_4] [9])))) : (((((arr_6 [i_0] [i_0]) ? -1133 : 9333636775504027306)) & ((((arr_19 [i_0] [i_0] [i_0] [17] [i_0]) ? (arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [1]) : 7579))))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_26 = (max(var_26, (37144 / 1)));
                            arr_26 [i_0] [i_3 + 1] [i_8] = (arr_4 [i_8]);
                            var_27 = (!1);
                        }
                        var_28 = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                {
                    var_29 = ((-(arr_4 [i_9])));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_30 = (((((!((min(65535, -1151)))))) % (arr_32 [1] [1] [1] [i_11] [i_12] [i_11])));
                                var_31 = (min((~var_11), (((!var_3) / (((arr_34 [i_9] [i_9] [i_9] [i_9] [i_9]) | (arr_11 [i_0] [i_0] [i_0])))))));
                                var_32 ^= 32245;
                            }
                        }
                    }
                    var_33 = (((0 + 18163191598779930578) ? ((-(arr_23 [i_10 - 3] [9] [3] [3] [i_0 - 3]))) : ((32752 << (((((arr_23 [i_10 - 3] [i_9] [i_9] [i_10 - 3] [i_0 - 2]) + 112)) - 24))))));
                }
            }
        }
    }
    var_34 = ((var_1 << ((((var_12 ? var_7 : 18446744073709551615)) - 1529887075))));
    #pragma endscop
}
