/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -3;
    var_16 ^= ((var_10 ? var_12 : var_11));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, (48227 < 1590618517)));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = -125;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_18 = var_8;
        var_19 += ((arr_5 [i_1]) << ((((arr_6 [i_1]) != ((0 ? 1590618525 : (arr_4 [i_1])))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 *= (min(1590618541, 25));
            var_21 += 1559;
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_22 = arr_9 [i_1];
                var_23 = (((((arr_15 [i_1] [i_1]) + 2147483647)) << (((-1590618509 | -1590618517) - 2704348795))));
            }
            var_24 = ((var_0 < ((((!(arr_7 [i_1])))))));
        }
        var_25 = (min(var_25, (((-1590618517 && ((((arr_12 [i_1] [i_1] [i_1]) ? ((-(arr_15 [i_1] [3]))) : (arr_10 [i_1] [4] [i_1])))))))));
        var_26 &= ((63977 ? 1 : -1590618540));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_27 = -1590618509;
        arr_20 [i_5] [i_5] = (arr_12 [i_5] [i_5] [i_5]);
        arr_21 [i_5] = ((~((~(arr_13 [i_5])))));
        arr_22 [i_5] = (arr_6 [i_5]);
    }
    #pragma endscop
}
