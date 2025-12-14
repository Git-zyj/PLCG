/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = 126;

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2]);
            var_15 = ((((min((arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 + 2] [i_1 - 1])))) ? (((min(129, var_2)))) : (((!((min(2845321974, 68))))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                var_16 &= 1296829018;
                var_17 += (((var_10 - (var_12 % 2845321975))));
                var_18 = 2845321975;
                var_19 = (max(var_19, ((min(32755, 130)))));
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_4] = (arr_1 [i_4 + 1]);
                            var_20 = (((((130 ? 510 : var_0))) ? 109 : 1));
                            arr_21 [i_6] [i_5] [i_4] [i_4] [i_4] [i_2] [i_0] = (((((arr_9 [i_6] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_2] [i_5])))) ? (((arr_9 [i_0] [i_4] [i_5]) ? (arr_9 [i_6] [i_4] [i_2]) : 4294967286)) : ((((arr_9 [i_0] [i_2] [i_5]) ? (arr_9 [i_2] [i_2] [i_2]) : -17756))));
                            var_21 |= (min((!var_1), (arr_4 [i_4 + 1])));
                            var_22 ^= ((~(((arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1]) ? (arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1]) : (arr_10 [i_4 - 1] [i_4 - 1] [i_6 + 1])))));
                        }
                    }
                }
                var_23 -= ((((11 ? 1588683299 : 1))) ? 2805675991 : ((172 ? ((101 ? 4294967289 : 10090927080245958269)) : (arr_12 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = var_6;
                            arr_29 [i_0] [i_0] [i_2] [i_2] [9] [i_7] [i_4] = 0;
                            arr_30 [i_8] [i_7] [i_4] [i_4] [i_0] [i_0] = max(((((arr_18 [i_0] [i_4 + 1] [i_7 - 2] [17] [i_8]) == (arr_27 [i_0] [i_4 + 1] [i_7 + 1])))), (((arr_18 [i_4] [i_4 - 1] [i_7 + 2] [i_7] [i_7]) ^ (arr_27 [i_4] [i_4 + 1] [i_7 - 1]))));
                        }
                    }
                }
            }
            var_24 = (max(var_24, (17789 ^ var_2)));
            var_25 = (max(((0 ? 15249694419172164198 : 3197049654537387418)), var_13));
            var_26 = (1 ? (max(var_8, (arr_5 [i_0]))) : (max((arr_5 [i_2]), (arr_5 [i_0]))));
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_37 [i_10] [i_9] [i_10] = ((((~(arr_11 [i_9] [i_9 + 1]))) - (((arr_11 [i_9] [i_9 - 1]) | (arr_11 [i_0] [i_9 + 1])))));
                    arr_38 [i_0] [i_10] [i_10] [i_10] = ((~(((((3069331242 ? 130 : 135)) <= (var_9 < 2706283982))))));
                }
            }
        }
        var_27 &= var_4;
        var_28 = ((214 >> (10090927080245958285 - 10090927080245958255)));
    }
    var_29 = ((var_13 ^ (((max(128, (!2370818780)))))));
    var_30 = (-10 || var_11);
    var_31 = (var_11 < 69);
    #pragma endscop
}
