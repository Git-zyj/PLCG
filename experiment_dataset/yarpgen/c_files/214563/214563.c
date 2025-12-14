/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~(min(-13013, var_8))))) ? var_9 : (((min(13017, var_3))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (((((arr_1 [i_0 - 1]) ? var_14 : var_10)) << ((0 ? ((min(var_0, (arr_0 [i_0])))) : 1))));
        arr_3 [i_0] [i_0] = (1 ? -22486 : 1);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (max(var_17, ((((arr_5 [4] [i_1]) ? (arr_5 [22] [i_1]) : (((arr_5 [8] [8]) ? (((arr_0 [0]) * 0)) : ((min(var_3, 13021))))))))));
            var_18 = (min(var_18, var_0));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] = (((((var_13 - (arr_5 [i_0] [i_2])))) ? (arr_8 [i_0 - 1] [i_2 + 2] [i_2 + 2]) : (arr_4 [i_0 - 1] [i_0 - 1])));
            var_19 *= (((arr_7 [1] [i_0] [i_2 - 1]) ? var_13 : (arr_4 [i_0 - 1] [i_0 - 1])));
            var_20 = (max(var_20, ((((((arr_0 [14]) ? (arr_1 [i_2 + 2]) : (arr_5 [1] [1]))) <= ((((arr_0 [1]) / (arr_8 [i_2] [i_2] [i_0])))))))));
            arr_10 [i_0] [i_0] = (7 || -13010);
            var_21 += (((arr_7 [i_0] [i_2 + 2] [i_2 + 1]) / (arr_7 [i_0 - 1] [i_0] [i_2 + 2])));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_22 = ((arr_11 [1] [i_3 - 1]) * -var_0);
            arr_13 [i_0] [i_0] [i_3 + 3] = arr_11 [i_0 - 1] [1];
            arr_14 [i_0] [i_0] = ((((min(1300757051, (((-864772510 || (arr_12 [i_0] [i_3 + 1]))))))) ? ((((arr_6 [i_0] [i_0]) || (((var_3 ? var_15 : (arr_1 [i_0]))))))) : 1));
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_23 = (min(var_23, ((((((arr_11 [i_4 + 1] [i_4 + 1]) ? var_4 : var_6)) > ((-(arr_5 [10] [i_4]))))))));
        arr_18 [i_4 + 1] [i_4] = (min(72, 1904073084));
        arr_19 [i_4] = ((((((((arr_4 [i_4] [i_4]) ? -370096965 : (arr_7 [i_4 + 1] [i_4] [i_4 + 1]))) & ((var_15 | (arr_16 [i_4])))))) % (min(5823624786496183646, 98))));
    }

    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 + 1] = var_9;
        var_24 = (max(var_24, ((min((arr_0 [14]), ((((min((arr_1 [i_5 + 1]), 111))) ? 175 : var_15)))))));
        var_25 = (min(var_25, ((((((var_14 ? (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? (((((-(arr_1 [i_5])))) ? ((var_5 + (arr_7 [i_5 + 1] [7] [i_5]))) : var_5)) : 13010)))));
        arr_23 [i_5] [i_5 + 1] = (((min((arr_1 [i_5 + 1]), var_10)) | ((min((min((arr_11 [i_5] [i_5]), (arr_8 [i_5] [i_5 + 1] [i_5]))), (arr_20 [i_5 + 1]))))));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
    {
        var_26 -= ((((-((var_13 & (arr_27 [i_6]))))) & (min((min((arr_0 [22]), var_10)), ((min(var_15, (arr_26 [i_6]))))))));
        arr_28 [i_6] [i_6] = ((((arr_5 [14] [14]) ? (arr_0 [20]) : (var_2 <= 136))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_27 = (min(var_27, (min(var_1, (((((var_13 ? var_11 : (arr_7 [i_7] [i_7] [19])))) ? (((var_3 ? (arr_27 [i_7]) : var_0))) : (arr_11 [i_7] [i_7])))))));
        var_28 &= (min((min((arr_1 [i_7]), ((((-21029 + 2147483647) << (21028 - 21028)))))), ((min((((arr_21 [i_7] [i_7]) ? 0 : (arr_26 [i_7]))), (((var_11 / (arr_27 [i_7])))))))));
        var_29 = ((((((((-931382940 ? 123 : 0))) ? (arr_7 [i_7] [i_7] [i_7]) : (arr_8 [i_7] [i_7] [i_7])))) ? ((min(var_3, -13010))) : (((arr_26 [i_7]) / ((var_5 ? 1600384174 : -13010))))));
    }
    #pragma endscop
}
