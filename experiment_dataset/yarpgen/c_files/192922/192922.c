/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((!(1 && 1)));
        arr_5 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0]) : 1);
        arr_6 [15] |= (~1);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((!(arr_2 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_13 [i_1] = 0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [13] [2] [i_3] [i_4] [i_5] = -5283;
                            arr_26 [i_2] [i_5] [i_3] [i_2] [i_4] [i_3] = ((-(arr_7 [i_2] [i_2 + 1])));
                            arr_27 [i_1] [i_1] [i_1] [10] [i_1] [i_5] = (((arr_12 [i_2 - 2] [i_2 - 1]) || (((arr_8 [i_3]) != (arr_21 [i_5])))));
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] [i_6] = (((arr_2 [i_2 - 2] [i_6 + 2]) && -6921505391644209130));
                            var_12 = (max(var_12, 19167));
                            var_13 = (min(var_13, (((1648313078 < ((((-625971004 + 2147483647) << (((-2390287048657369409 + 2390287048657369434) - 25))))))))));
                        }
                        arr_31 [i_3] [i_3] [i_2] [i_2] [i_1] = (((arr_20 [i_3] [i_3] [i_3]) <= (((arr_17 [i_1] [i_2] [i_3] [i_4]) * 32767))));
                    }
                }
            }
            var_14 = (max(var_14, (((((32767 ? -2135228204 : (arr_7 [11] [0]))) + ((0 ? 25298 : (arr_7 [i_2] [i_1]))))))));
            var_15 = (min(var_15, (((!(arr_24 [i_1] [i_1] [1] [i_2] [i_2 - 2]))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_16 = 2789917247;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_17 = -1761778366;
                        var_18 = ((-(arr_37 [1] [1] [i_9])));
                        var_19 = (arr_32 [i_10]);
                        arr_42 [i_7] [i_7] [i_9] [i_10] [i_7] [i_9] = (((arr_35 [i_7 - 1]) ? (~1316047156) : (1 != 1505050056)));
                    }
                    arr_43 [i_7 + 1] [i_9] [i_9] = (((arr_0 [i_7 + 1]) << (65535 - 65523)));
                    arr_44 [i_9] = (1 < (arr_39 [i_7] [13] [i_7 - 1] [14]));
                }
            }
        }
    }
    var_20 = var_6;

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_21 = (max(75729356, 198));
        arr_48 [i_11] [i_11] = (min((((4080 <= (-1 < 2221679625160584393)))), (arr_1 [i_11])));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_22 *= ((((min(625971022, ((max((arr_46 [8] [20]), 82)))))) ? (arr_34 [i_12]) : ((((((arr_40 [i_12] [i_12] [i_12] [0]) ? (arr_0 [i_12]) : (arr_1 [14]))) <= -2390287048657369408)))));
        arr_51 [i_12] [i_12] = 42553;
        var_23 *= ((max((arr_46 [i_12] [i_12]), (arr_46 [i_12] [10]))));
    }
    #pragma endscop
}
