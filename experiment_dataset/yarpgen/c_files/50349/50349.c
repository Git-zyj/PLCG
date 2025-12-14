/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (max(164, (((92 - var_17) ? (max(186, var_11)) : (~var_13)))))));
    var_20 = (min((min((min(var_18, var_13)), (var_12 < 1861067402))), -var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 += (max(((-((~(arr_1 [i_0]))))), -3362));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_22 ^= ((((((-(arr_1 [i_1])) > var_5)))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_23 = var_14;

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_24 = ((-(((!(arr_6 [i_0] [i_1] [i_0]))))));
                    var_25 |= (((~var_2) ? (15833758619891281170 > 2612985453818270446) : (((arr_2 [9] [i_1]) | 3749196697492752128))));
                    var_26 = 155;
                    var_27 = (min(var_27, (arr_6 [i_2] [i_1] [i_0])));
                }
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    var_28 = (((-1 ? ((var_13 ? (arr_10 [i_1 + 2] [i_1 + 2] [i_0]) : (arr_5 [i_2] [i_1] [i_2]))) : (max(var_14, var_3)))));
                    arr_14 [9] [i_4] = var_13;
                }
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_29 *= (((((~(arr_11 [6] [i_0] [i_0] [6] [i_0])))) ? (((((-(arr_11 [8] [i_1 - 1] [i_0] [i_5] [i_5])))) ? (arr_15 [i_0] [i_0]) : (((arr_5 [i_0] [i_1] [i_0]) ? 117 : (arr_6 [7] [i_1 - 1] [i_5]))))) : (((~var_9) % (~var_6)))));
                var_30 |= (arr_9 [9] [9] [9]);
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                arr_21 [i_6] [i_7] [i_7 - 1] = (((var_17 ? var_5 : (var_5 / var_6))));
                var_31 = (min(var_31, ((((((var_8 ? var_12 : (min((arr_8 [i_6] [i_0]), var_15))))) ? ((((min(var_11, var_17))) ? -1598377296 : var_2)) : (((((!var_4) > 164)))))))));
                var_32 = (max(((((var_12 ? 31 : var_13)) >> ((((max(0, (arr_17 [16] [13] [i_0])))) - 12800)))), (arr_16 [8])));
            }
            arr_22 [17] = (arr_12 [14] [13] [i_6]);
        }
        var_33 = (min(var_33, ((((((-(arr_18 [i_0] [i_0] [i_0]))) + var_11))))));
    }
    #pragma endscop
}
