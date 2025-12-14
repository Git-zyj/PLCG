/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (1 & 1)));
    var_17 = (((((1 ? (max(var_13, var_3)) : (((var_5 ? var_3 : var_1)))))) ? ((((min(var_10, var_3))) ? var_1 : var_11)) : (~63488)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_18 = (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
                arr_7 [i_0] = (((arr_2 [i_0]) ? (arr_3 [i_0] [i_2 - 2] [i_0]) : (arr_0 [1] [1])));
                var_19 = ((63488 ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [i_0])));
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_20 = 2262581403;
                var_21 = (((((-112 ? 1 : 1))) ? var_9 : (arr_9 [i_3] [i_3] [i_3] [i_3 - 2])));
                arr_10 [i_0] [i_0] [i_0] = var_5;

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] = (((arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (arr_12 [i_0] [i_3 - 1] [i_3] [i_4 + 1]) : (arr_6 [i_3] [i_3 + 1] [i_4 + 1])));
                    arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] &= 63485;
                    arr_16 [i_0] [i_0] [7] [9] [i_0] = ((1 ? 971731274 : 2219357894127918916));
                    var_22 -= 180;
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_23 += (arr_12 [i_3] [i_3] [i_3] [i_3]);
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((!(arr_0 [i_0] [i_0])));
                    var_24 = var_3;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_25 = (4294967295 && 37);
                    arr_22 [i_0] [i_0] [i_3] [i_0] [i_6] = (((arr_17 [i_0] [i_0] [i_1] [i_6]) ? (arr_17 [13] [i_1] [i_3] [13]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_23 [i_0] [i_0] [i_3 - 2] = ((1 ? 16227386179581632700 : 96));
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_26 = (max(var_26, (((((arr_17 [i_0] [i_1] [i_1] [i_7]) >> (3045027173239157125 - 3045027173239157123)))))));
                arr_27 [i_0] [i_0] = ((0 << (-1 + 8)));
                arr_28 [i_0] [i_0] = ((~(max(((var_7 / (arr_0 [i_0] [i_0]))), 1))));
            }
            var_27 = (max(var_27, (((-28759 || ((((arr_18 [i_0] [i_0]) ? (arr_6 [1] [i_1] [i_1]) : (((!(arr_5 [i_0] [i_1] [i_1] [i_1]))))))))))));
            var_28 = (min(5888958101103989205, (((18446744073709551612 ? 63470 : 15)))));
            var_29 = ((!((max(var_11, (max(192, 1)))))));
        }
        var_30 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
        var_31 = ((0 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((((arr_2 [i_0]) == 1)))));
        arr_29 [i_0] = (((max(-5144949998328960866, (((var_12 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_6))))) >> ((((!-1329) == (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_32 = var_6;
    #pragma endscop
}
