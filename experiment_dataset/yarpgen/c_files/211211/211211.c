/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max((((min(14764896913942403653, var_14)) + (arr_0 [i_0 + 4] [20]))), ((((arr_0 [i_0] [i_0]) ? 30170028 : (arr_1 [i_0 - 1]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] = ((-179078526 + (!266601855)));
            var_16 = (~var_4);
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = (min(((((((arr_3 [i_0]) - 0))) ? var_4 : (arr_1 [i_0]))), (((-((0 << (((arr_1 [i_0 - 1]) - 101)))))))));
            var_17 = var_4;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_18 = 12241909573329668684;
            arr_11 [i_0] = (((((max((max(var_9, var_9)), (arr_7 [i_0] [i_3] [i_0 + 2]))))) < -3442020481));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_14 [7] [7] = ((~(arr_12 [i_0] [i_4 + 2])));
            var_19 ^= ((6204834500379882943 ? ((860739670 ? 320860045 : 4944523113973403664)) : var_2));
        }
        var_20 = 31;
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] = (arr_4 [i_5]);
        var_21 = (((((min(5583, 27954)))) <= (((-5583 != 65535) | ((var_4 | (arr_7 [i_5 - 2] [i_5 - 2] [i_5 + 1])))))));
        arr_18 [i_5] [i_5] = 8936485248810901229;
    }
    #pragma endscop
}
