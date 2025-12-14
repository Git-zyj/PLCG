/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (((arr_2 [i_1]) <= (~79)));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_15 = ((((-(arr_4 [i_1]))) >= (arr_0 [i_0])));
                arr_9 [i_0] [i_2] [i_2] = (arr_5 [i_0 - 2]);
            }
            var_16 |= (arr_8 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 1]);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_17 = -521190257;
            var_18 &= (~0);
            var_19 = var_5;
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (((!(~1048064))))));
            var_21 *= ((-(max((arr_8 [i_0] [i_0] [i_4 + 1] [i_0]), 237))));
        }
        arr_14 [3] [3] = (arr_2 [i_0]);
        var_22 = ((((((!var_7) % var_7))) ? (max((((84 | (arr_6 [i_0 + 1] [i_0])))), (min(var_6, 248)))) : (((-((-(arr_6 [i_0] [i_0 + 1]))))))));
        var_23 = (arr_10 [i_0 + 1] [i_0 + 3] [i_0]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_24 = var_7;
        var_25 = 2;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = ((((((var_11 ? 9223372036854775807 : (-9223372036854775807 - 1)))) || (arr_19 [i_6]))));
        var_26 = ((!(((var_3 ? ((max((arr_18 [i_6] [i_6]), var_2))) : ((var_11 ? var_1 : (arr_17 [5]))))))));

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_27 = (((((~(arr_17 [i_7])))) ^ (((var_0 ? var_8 : (arr_19 [i_7]))))));
            arr_24 [i_6] [i_7] = var_0;
            arr_25 [i_6] = var_11;
        }
    }
    var_28 = (((!(((18 ? 237 : 18))))) ? ((var_8 ? 1934926567 : var_6)) : ((((((var_9 ? var_8 : var_9))) ? var_9 : ((var_2 ? var_11 : var_12))))));
    var_29 = (~(!18));
    var_30 = (((min(-4293919231, ((var_11 ? var_1 : (-9223372036854775807 - 1)))))) ? ((var_0 ? var_10 : (var_7 ^ var_12))) : ((-1685822536 ? -var_0 : ((var_3 ? 4294967295 : 1703849008)))));
    #pragma endscop
}
