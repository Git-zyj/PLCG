/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((var_8 ? -238 : -15995))) ? var_3 : ((max(var_8, var_10))))), (max((max(var_9, 4294967288)), (max(var_1, 42514))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 += (max((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [4]))) >> (var_6 - 78))), -0));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 ^= (max(((!(((30634 ? 4230 : (arr_3 [10] [16])))))), ((!(max(0, 1))))));
            var_16 = (max((arr_4 [i_1] [i_0] [i_0]), (arr_0 [i_0])));
            arr_5 [i_0] = (max((((arr_2 [i_0]) ? (arr_1 [i_0] [i_1]) : ((var_4 ? (arr_4 [6] [6] [i_1]) : (arr_3 [i_0] [i_0]))))), ((max(((~(arr_4 [i_1] [18] [i_1]))), (max(243387912, 4565)))))));
        }
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_17 = (max(1798500158, 107));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 |= ((!((max(var_12, var_2)))));
            var_19 = (min(var_19, (((((max((((arr_2 [i_2]) ? (-9223372036854775807 - 1) : (arr_7 [i_3]))), (!1)))) ? (max((((((arr_6 [i_2]) + 2147483647)) << (var_12 - 31846))), ((-(arr_9 [9] [i_3]))))) : ((max(-7948, 32761))))))));
        }
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_20 += ((var_12 ? 1518503071 : (arr_3 [i_4] [i_4])));
        var_21 = (min(var_21, (arr_1 [i_4 - 2] [i_4 - 2])));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = ((-(((arr_16 [i_5 - 2] [i_5] [i_5 - 1]) ? (arr_16 [i_5 + 2] [1] [i_5 + 2]) : (arr_16 [i_5 + 2] [i_5 + 1] [i_5 + 3])))));
            var_23 = -32436;
            arr_18 [i_5] [i_6] [i_6] = ((((((arr_14 [i_5 + 1]) ? (arr_14 [i_5 + 1]) : (arr_14 [i_5 + 1])))) ? (((((var_7 ? (arr_3 [i_5] [i_5]) : (arr_15 [i_5])))) ? (arr_16 [10] [i_5 - 2] [i_5 + 3]) : (arr_0 [i_5]))) : ((max(54017, 65535)))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_24 = (arr_13 [i_5]);

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_24 [9] [i_7] [8] |= ((-((-(arr_3 [i_8] [i_8])))));
                arr_25 [i_7] [i_8] = (max(((65524 ? (((arr_12 [i_5]) ? var_8 : 216)) : -2147483636)), (max((((arr_0 [i_5]) & var_7)), (arr_23 [i_5] [i_7] [i_8])))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_25 = (max((arr_16 [6] [i_7] [i_9]), ((((max(41681, (arr_23 [i_5 + 1] [i_7] [i_9])))) * (arr_21 [i_9] [i_7] [i_5])))));
                var_26 = (max(((((arr_15 [i_5]) >> (((arr_1 [6] [i_5]) - 63))))), (max((((arr_12 [i_5]) ? (arr_4 [i_5] [i_7] [i_9]) : var_4)), ((max((arr_1 [i_7] [2]), 0)))))));
                arr_28 [i_5] [i_5] = arr_0 [i_7];
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_32 [i_5] [i_5] [17] [i_5] = ((-(((!(arr_31 [i_5 - 2] [i_5 + 3] [i_5]))))));
                var_27 = ((((((arr_16 [1] [i_5 + 2] [i_5 + 2]) ? (arr_12 [i_7]) : (arr_0 [i_5])))) ? (((arr_16 [i_5 - 1] [i_5] [i_5]) ? (arr_12 [i_10]) : (arr_12 [i_7]))) : (((arr_0 [i_7]) ? (arr_12 [i_7]) : (arr_0 [i_10])))));
                var_28 = (max(var_28, (((((max((arr_21 [i_7] [i_5 - 1] [i_5]), (max(11, (arr_31 [i_10] [6] [i_5])))))) && var_10)))));
            }
            var_29 = (arr_21 [i_5 + 3] [i_7] [i_7]);
            var_30 ^= (arr_27 [18]);
        }
        var_31 = (max(var_31, ((max(388917196, (((((!(arr_30 [i_5 + 2] [i_5] [i_5] [i_5]))) ? (arr_19 [i_5] [i_5 - 1] [i_5 + 2]) : ((max(1, -24362)))))))))));
    }
    var_32 = (max((max((max(var_1, var_6)), var_7)), 4294967295));
    var_33 = var_5;
    #pragma endscop
}
