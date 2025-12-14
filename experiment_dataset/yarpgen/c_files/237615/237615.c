/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, var_15));
        var_18 = (arr_1 [i_0]);
        var_19 = (arr_1 [i_0]);
        var_20 = (max(var_20, ((((arr_0 [i_0]) % 12553897427307755509)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 += ((var_2 ? ((var_13 | (~1))) : (((~(arr_4 [i_2]))))));
            var_22 = ((((((((var_8 ? (arr_1 [i_2]) : (arr_1 [i_2])))) ? (arr_4 [i_1]) : (arr_2 [i_2])))) ? (((~(arr_2 [i_2])))) : (arr_3 [i_2])));
            arr_7 [i_1] = (arr_0 [i_1]);
        }
        arr_8 [i_1] = ((~((((((arr_6 [i_1]) ? -2216866951291708586 : (arr_6 [1])))) ? ((-10337 ? (arr_0 [i_1]) : (arr_4 [i_1]))) : ((-21935 ? 28 : var_10))))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_23 = (arr_3 [i_3]);
            var_24 = ((((((127 ? var_16 : (arr_2 [i_1])))) ? (((max((arr_0 [i_3]), var_1)))) : (max(3114644615691037251, (arr_1 [i_1]))))));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_15 [i_4] [i_4] = (((arr_11 [i_4] [i_5 - 1]) ? ((max((arr_9 [i_4 - 1] [i_5] [i_4 - 1]), var_0))) : (((arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1]) - (arr_11 [i_4] [i_5 - 1])))));
                var_25 = (max((((arr_0 [i_5]) ^ 0)), (((!((max(8237, (arr_12 [i_1] [i_1] [i_4])))))))));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_26 -= 21929;

                /* vectorizable */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    var_27 += -2294;
                    var_28 = ((arr_19 [i_7 - 1] [14] [10] [i_7]) || (arr_19 [i_1] [i_4] [18] [i_7]));
                    arr_22 [i_4] = ((!(arr_11 [i_4] [i_4 - 2])));
                    arr_23 [i_4] [i_4] [i_4] [i_7] [6] = ((var_3 + (arr_18 [i_4])));
                }
            }
            var_29 = (i_4 % 2 == zero) ? (((0 >> (((arr_12 [15] [i_4 - 2] [i_4]) - 2519966389878140605))))) : (((0 >> (((((arr_12 [15] [i_4 - 2] [i_4]) - 2519966389878140605)) - 4666182490244566301)))));
        }
        var_30 = ((((!(255 & 226))) || (((1 ? var_13 : (arr_19 [i_1] [13] [i_1] [i_1]))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_29 [i_8] [i_9] = (((((arr_1 [i_8]) + 2147483647)) >> (4294967293 - 4294967292)));
            arr_30 [i_8] = (((arr_20 [i_8] [i_8] [i_9]) != ((~((~(arr_19 [i_8] [i_8] [7] [8])))))));
        }
        var_31 = ((((((~var_16) ? (!var_11) : ((63241 ? var_4 : (arr_14 [i_8])))))) || ((((arr_18 [2]) ? (arr_20 [5] [i_8] [i_8]) : (arr_20 [i_8] [8] [i_8]))))));
        var_32 = min(((((min(2, (arr_9 [i_8] [7] [i_8])))) ? ((max(-8237, var_15))) : (arr_13 [18] [8] [18]))), ((min(((var_16 / (arr_10 [i_8]))), -0))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_33 = ((~((var_12 * (arr_17 [8] [i_10] [12])))));
        var_34 = ((((min(var_2, 115))) ? (((arr_0 [i_10]) ? (arr_12 [i_10] [i_10] [i_10]) : 0)) : (arr_31 [i_10])));
    }
    var_35 = var_6;
    #pragma endscop
}
