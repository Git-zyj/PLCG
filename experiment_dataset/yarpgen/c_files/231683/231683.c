/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_18 = (max(-107, 117));
            var_19 = (((((((((arr_0 [i_1]) ? var_9 : (arr_1 [i_0])))) ? (arr_3 [i_0] [14]) : (arr_3 [i_0] [10])))) ? ((max(var_0, ((var_16 ? 115 : 118))))) : var_17));
            var_20 = (min(var_20, (((max(var_13, (arr_4 [i_0] [10])))))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_1] [i_1 + 4] [i_2] [1] = var_15;
                arr_10 [i_1] = ((((max(1018838861, -8821183048947845088))) ? ((-312 ? (arr_3 [i_0 + 1] [i_1]) : 9904)) : 1));
            }
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_21 = ((var_1 ? (max((arr_7 [8] [i_1]), var_9)) : ((min(var_15, (arr_1 [i_0]))))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_17 [i_0] [i_1 + 1] [i_1] [i_3] [i_4] [1] = (arr_14 [i_0] [i_1] [i_3 - 1]);
                    arr_18 [i_0] [i_0] [i_1 + 2] [2] [i_1] = (((max((min(-8821183048947845088, var_16)), (!77))) <= var_0));
                    var_22 = ((((((arr_8 [i_1] [i_1]) != (arr_8 [i_0 + 1] [i_1])))) <= (((var_12 <= (~var_15))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_23 = (max(((10632762490826503152 ? (arr_3 [i_3 + 1] [i_1]) : 8821183048947845073)), (arr_5 [i_0] [i_0] [i_1])));
                    var_24 = (((((519444280 ? -115 : (arr_7 [i_1] [i_1])))) ^ 5223102609489140588));
                }
            }
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            arr_24 [i_6] [i_6] = (max((arr_4 [i_0] [i_6]), var_17));
            arr_25 [i_6] = (arr_3 [i_0] [i_6]);
        }
        var_25 = (max(var_25, (max((1622642581 / -32), 8821183048947845085))));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_26 *= var_15;
        arr_29 [i_7] = (max((((((-1116239138 ? (arr_7 [i_7] [2]) : 90))) & var_6)), ((((arr_2 [8] [8]) / -1727441567)))));
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] [i_8] = ((((((arr_2 [i_8 + 1] [i_8 + 1]) * var_15))) <= ((-(arr_16 [i_8 + 1] [i_8] [i_8] [i_8] [i_8])))));
        arr_34 [i_8] [i_8] = (max((min(var_9, (arr_6 [i_8]))), (arr_27 [i_8 - 1])));
    }
    var_27 -= var_15;
    #pragma endscop
}
