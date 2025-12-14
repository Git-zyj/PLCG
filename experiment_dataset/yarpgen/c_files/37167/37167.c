/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? var_7 : (33784 + 6)));
    var_13 = (max(var_11, var_9));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (((arr_2 [i_0]) & (((31734 && (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = (((~0) & (min((arr_0 [i_0]), (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] = (17282168306886545113 <= -32);
            arr_8 [i_1] = -112451707;
            arr_9 [i_1] = ((42 ? 1325601310 : (((arr_1 [i_0]) ? 1 : (max((arr_6 [i_1]), (arr_5 [i_1])))))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_15 = (max(var_15, (((~((-2147483625 ? 94 : 1572363736)))))));
                var_16 = (i_1 % 2 == 0) ? ((((((~(arr_1 [i_0])))) / (max((((var_0 << (((((arr_5 [i_1]) + 1274189099)) - 18))))), (max(var_5, var_6))))))) : ((((((~(arr_1 [i_0])))) / (max((((var_0 << (((((((arr_5 [i_1]) + 1274189099)) - 18)) - 1993525730))))), (max(var_5, var_6)))))));
                var_17 *= ((!(arr_1 [i_0])));
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                arr_17 [0] &= (((((arr_5 [0]) / var_3))) ? ((1057676241889467867 ? var_11 : (arr_14 [i_0] [i_1] [i_1] [i_3 + 2]))) : (arr_1 [i_3 - 3]));
                arr_18 [i_1] = var_4;
                var_18 = (max(var_18, ((14658802523893596376 >= (~-8)))));
                arr_19 [i_1] = ((!(arr_16 [i_3 + 2] [i_3 + 2] [i_1])));
            }
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            var_19 = var_6;
            var_20 = (max(var_20, ((((arr_15 [i_4 - 3] [i_4 - 3] [i_4] [i_4]) ? (arr_15 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2]) : (arr_15 [i_4 + 1] [i_4 - 1] [i_4] [i_4]))))));
            var_21 = ((arr_10 [i_0] [i_4 - 3]) * -8033);
        }
        var_22 = (max(var_22, (arr_11 [4])));
    }
    #pragma endscop
}
