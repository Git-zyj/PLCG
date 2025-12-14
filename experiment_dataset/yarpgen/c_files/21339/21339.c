/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_11 = (min(var_11, var_1));
            var_12 = var_2;
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_13 = (min(var_13, ((max(var_7, (arr_2 [i_0] [i_0] [i_2]))))));
            var_14 = (min(var_14, (arr_3 [14] [i_0] [i_2 - 1])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = ((arr_8 [i_0] [i_0]) << (var_0 - 10919));
            var_16 = (min(var_16, (((((((arr_4 [i_0]) ? -21240 : (((arr_3 [10] [i_3] [10]) ? var_0 : var_2))))) ? var_7 : (((((((arr_8 [i_0] [i_3]) < (arr_3 [6] [6] [6]))))) + -17827740177982002177)))))));
            var_17 -= (((arr_6 [i_3] [3] [3]) % (min(((var_4 % (arr_7 [i_0] [i_0] [i_0]))), ((-(arr_4 [i_3])))))));
        }
        var_18 |= min(((max((arr_3 [8] [22] [8]), (((arr_2 [i_0] [i_0] [i_0]) & var_0))))), (arr_1 [i_0]));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_12 [i_4 + 2] [i_4 + 2] = (arr_10 [i_4 - 2]);

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_19 = (((-(!-21240))));
            var_20 = (max(var_20, 2515938647));

            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                arr_18 [i_4 - 2] [i_5] [i_6] [i_5] = (((arr_8 [i_4 + 1] [i_4]) + (arr_1 [i_4 + 2])));
                var_21 |= ((~(max(1463764287, 21240))));
            }
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_22 ^= (((arr_1 [i_4 - 3]) ^ (arr_1 [i_4 + 2])));
                    var_23 = (arr_19 [i_4] [i_4] [i_4]);
                    var_24 = ((((((arr_11 [i_4 - 1]) ? 16 : (arr_21 [i_5])))) & (21240 % var_3)));
                }
                var_25 = ((((3954047513711677109 << (240 - 203))) << ((((((max((arr_6 [i_7] [i_5] [i_4 + 2]), (arr_23 [i_4] [i_5] [i_5])))) + (arr_22 [i_4] [i_4 - 3] [i_7]))) + 1162091216))));
            }
            arr_24 [i_5] = arr_15 [i_4] [i_5] [i_5];
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_26 = (arr_26 [i_9]);
        var_27 |= (max((arr_26 [i_9]), ((-(((arr_26 [i_9]) ^ (arr_8 [i_9] [i_9])))))));
        var_28 = ((235 < ((16 << (3954047513711677109 - 3954047513711677086)))));
        var_29 = (((((((-(arr_9 [i_9] [i_9]))) + (!7)))) / (((arr_0 [0] [i_9]) & (arr_0 [12] [i_9])))));
    }
    var_30 = var_1;
    var_31 = (min(var_31, (var_0 + var_7)));
    #pragma endscop
}
