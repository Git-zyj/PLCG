/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_15 ? 232 : (var_11 || var_8)))) ? (((var_5 < (var_13 != var_10)))) : (((var_14 ? -1 : var_6)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = ((var_1 ? (((!(arr_1 [i_0 + 1])))) : (((arr_0 [i_0] [i_0 - 2]) % 1054760081))));
        var_18 = (((arr_1 [i_0]) ? ((241 ? var_0 : var_15)) : var_8));
        arr_2 [6] [4] = (!14);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_2] [i_2] [i_1] = (arr_5 [i_1]);
            arr_8 [i_1] [i_1] = ((241 || ((((~(arr_3 [i_2]))) >= (min((arr_3 [i_1]), -487412609))))));
            var_19 = (((arr_6 [i_2] [i_2] [2]) << (((max(14, 1280259172)) - 1280259149))));
            arr_9 [3] [3] [3] = ((var_2 || ((!(arr_5 [i_2])))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_20 = ((!(~249)));
            arr_12 [i_3] [i_3] = 3231498821;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_21 = (min(var_21, ((((((((min((arr_14 [i_1]), var_11))) ? (arr_3 [i_4]) : 253))) ? (min(((576524415 ? var_3 : var_4)), var_4)) : ((((((arr_13 [i_1] [i_1]) >> (((arr_1 [0]) - 1601958528))))))))))));
            var_22 = var_3;
        }
        var_23 = (~32);
    }
    var_24 ^= 576524415;
    var_25 = (var_1 / (((var_10 ? var_15 : (var_6 / -7)))));
    #pragma endscop
}
