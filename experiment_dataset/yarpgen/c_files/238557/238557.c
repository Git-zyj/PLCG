/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (((~((((arr_1 [i_0]) || (arr_0 [i_0])))))))));
        var_14 &= (((((+(min((arr_2 [i_0]), var_0))))) ? (((max((arr_2 [i_0]), (arr_2 [11]))))) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (max(var_15, (arr_6 [2])));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = (((!var_11) == (((35175782154240 == (arr_7 [11] [14] [7] [14]))))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = max(var_12, 131071);
                        arr_17 [6] [i_1] [i_1] [i_4] = ((-21710 ? 1303659402 : 8192));
                        var_16 *= (((arr_7 [5] [5] [i_2] [i_4]) || ((((((432345564227567616 ^ (arr_14 [0] [i_4] [i_2] [i_1] [i_4] [i_0])))) ? (~var_7) : 35175782154237)))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] = ((9223372036854775806 ? (((var_8 + (((arr_1 [i_0]) ? 15 : (arr_4 [i_2] [i_2])))))) : 70334384439296));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_17 ^= ((((((arr_6 [10]) <= (53589 + var_2)))) == (((arr_0 [i_1]) + (arr_0 [i_0])))));
                        arr_22 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0] = 255;
                        var_18 = (min(var_18, ((min(1, 55)))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_19 ^= 0;
                        var_20 = (min(var_20, (arr_7 [5] [i_1] [10] [i_6])));
                        arr_27 [i_6] [10] [i_1] [i_0] [10] [i_0] &= (arr_6 [6]);
                    }
                    var_21 = 1;
                    var_22 = 1125899905794048;
                    arr_28 [i_0] [i_0] [i_0] [i_1] = (-((min(-35175782154238, 240))));
                    var_23 &= ((((4088 || (arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0]))) ? (((arr_19 [i_2] [i_2] [i_2] [5] [i_2] [15]) + 16376)) : var_5));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_24 &= ((~(arr_30 [9] [i_7])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_39 [i_8] |= (arr_31 [14]);
                        var_25 = (arr_38 [i_8] [i_8] [16]);
                    }
                }
            }
        }
    }
    var_26 = (262140 <= var_3);
    var_27 = (((~var_8) || ((((var_6 + var_7) ^ var_3)))));
    #pragma endscop
}
