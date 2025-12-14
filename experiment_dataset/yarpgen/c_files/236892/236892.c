/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((!(((((max(1191140055, var_7))) ? 1191140073 : (var_5 % var_12))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min((arr_1 [i_0]), -1));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_7 [i_0] = (((min(var_18, 32763)) | (max(-95, (arr_3 [i_0] [i_0])))));
                var_21 = (max((((((var_15 ? (arr_4 [i_0]) : (arr_2 [i_0] [i_1] [i_2]))) << (((((arr_6 [i_0] [i_0]) ? 1907477293 : (arr_0 [i_1]))) - 1907477275))))), (((((arr_0 [i_2]) << (((arr_3 [i_0] [i_1]) - 111)))) << (((arr_3 [i_2] [i_0]) - 75))))));
                var_22 = -1;
                var_23 = ((((~(((arr_2 [i_0] [i_1] [i_2]) ? (arr_0 [i_2]) : (arr_5 [i_0] [i_1] [i_2] [i_2]))))) & var_3));
                arr_8 [i_0] [i_0] [i_0] = (min((((!(arr_0 [i_0])))), ((~(arr_0 [i_0])))));
            }
            var_24 = (((arr_6 [i_1] [i_0]) >> (((arr_6 [i_1] [i_1]) - (arr_6 [i_0] [i_0])))));
            var_25 = (arr_4 [i_0]);
            arr_9 [i_0] [i_0] [i_1] = 4294967285;
            var_26 = ((((!(var_4 == 0)))));
        }
        arr_10 [i_0] = (max(((~(arr_1 [i_0]))), ((-(arr_1 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_3 [i_3] [i_3]);
        var_27 *= ((-((~((~(arr_4 [i_3])))))));
        var_28 = (arr_11 [i_3]);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_17 [i_4] = ((~((-(arr_5 [i_4] [i_4] [i_4] [i_4])))));
        var_29 *= ((~(arr_16 [i_4])));
        arr_18 [i_4] = (-var_9 >= 3103827267);
        arr_19 [i_4] [i_4] = var_15;
    }
    var_30 = var_13;
    var_31 = (max(var_31, (((var_9 ? var_7 : var_11)))));
    var_32 = max((((-var_18 || ((((-127 - 1) ^ var_16)))))), (((~var_2) * -57)));
    #pragma endscop
}
