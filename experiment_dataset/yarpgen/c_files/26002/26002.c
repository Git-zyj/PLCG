/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = 25659;
        var_15 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((arr_1 [i_0]) ? (arr_2 [i_0]) : 1))));
        var_16 = (max(var_16, (((~(((arr_1 [10]) ? 2430096195 : (arr_1 [6]))))))));
        var_17 &= ((-(max((arr_1 [0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_18 *= ((((min((arr_7 [i_1]), (arr_8 [i_1] [i_2] [i_2])))) ? (((arr_8 [i_1] [i_1] [i_1]) ? (arr_7 [2]) : (arr_8 [i_1] [i_1] [i_1]))) : (((arr_7 [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : var_11))));
            var_19 = (arr_6 [i_1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_20 += ((!(28 / 46)));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = (+(max((arr_17 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_1]), (arr_12 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1]))));
                            var_22 = (max(((1152780767118491648 ? -9223372036854775798 : 46)), (((!(arr_16 [i_5 - 1] [i_1] [i_6] [i_6] [i_5 - 1]))))));
                            var_23 = max(((((((arr_8 [i_3] [i_3] [i_3]) ? -1557513387 : 14270275158519006795))) ? ((~(arr_15 [i_1] [i_1] [16] [i_5 + 2] [i_1]))) : var_11)), (((~(arr_12 [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5 + 2])))));
                            var_24 = (max(var_24, ((((((arr_15 [i_4] [i_4] [i_5 - 1] [i_5] [i_4]) < (arr_15 [i_1] [i_3] [i_5 - 1] [8] [i_3]))) ? (arr_15 [i_1] [i_1] [i_5 - 1] [i_1] [i_3]) : (arr_15 [i_1] [i_3] [i_5 - 1] [i_5 - 1] [i_3]))))));
                        }
                    }
                }
            }
            var_25 = ((!(1557513386 >= 7418)));
        }
        var_26 = (max((((((arr_19 [i_1] [15] [i_1]) ? 1864871077 : (arr_17 [i_1] [i_1] [i_1] [i_1] [10]))) & ((((arr_7 [i_1]) ? (arr_10 [10]) : 3127))))), ((46 ? (arr_19 [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_27 = (max(var_27, 3859988308));
        arr_24 [i_7] [i_7] = ((((((arr_22 [i_7]) ? var_12 : (arr_22 [i_7])))) ? ((((arr_11 [i_7]) >= (arr_11 [i_7])))) : ((((arr_17 [i_7] [i_7] [16] [i_7] [i_7]) >= ((102 ? (arr_19 [i_7] [i_7] [i_7]) : (arr_5 [i_7]))))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_28 = (max(var_28, -1638607298));
                var_29 *= min(var_1, (((((1557513394 ? 8 : var_4))) ? ((1424393620 ? (arr_14 [i_8] [i_8] [i_8 - 1]) : 17946233466348303517)) : 1)));
                /* LoopNest 3 */
                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_30 = (((arr_6 [i_8]) ? (arr_25 [i_12]) : (arr_10 [i_9])));
                                var_31 = arr_36 [i_9];
                                var_32 = 1509492821;
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 += var_9;
    var_34 = ((-((-var_10 ? var_0 : var_10))));
    #pragma endscop
}
