/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_5) ? (((((min(var_3, 2914244355559258699)) != (231 < var_8))))) : (max(var_2, (min(2914244355559258680, var_6))))));
    var_12 = (min(-86, 103));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ? ((min((arr_1 [i_0] [i_0]), 1))) : ((~(arr_0 [i_0] [i_0])))))) ? ((((((arr_0 [i_0] [i_0]) ? 3175469273 : 624074456))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : 25491));
        var_13 *= (max(var_0, (min((arr_1 [i_0] [i_0]), ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 -= (((2930509083148462357 / 29) ? 1399 : (((arr_4 [i_1 - 1]) & 14))));
        var_15 = ((!(((47402 ? (arr_3 [i_1]) : (arr_4 [i_1 - 1]))))));
        arr_5 [i_1] = 32581;

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_16 += (max((max(var_3, (arr_7 [i_1]))), (~var_3)));
                arr_11 [i_3] [i_2 - 1] [16] = ((+(((arr_9 [i_3 - 2] [i_3] [i_3 - 1]) + var_8))));
                arr_12 [i_3] [i_2 - 1] [i_3] = (arr_6 [i_1 - 1] [i_2] [i_3 + 1]);
                arr_13 [i_3] [i_3] [i_1] = (min((arr_4 [i_1 - 1]), ((55648860540871781 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))));
            }
            var_17 -= ((((((max(14348, var_1))) ? (335404424 | 57) : (max((arr_3 [i_2]), (arr_8 [i_1] [i_2 + 2] [i_2 + 1]))))) | ((((arr_3 [i_2 + 2]) ? ((((arr_8 [i_2] [i_2] [i_1]) ? (arr_4 [i_1]) : (arr_9 [i_1] [i_1] [i_2])))) : ((var_7 ? var_7 : (arr_7 [i_1]))))))));
            var_18 = (arr_3 [i_1]);
        }
    }
    #pragma endscop
}
