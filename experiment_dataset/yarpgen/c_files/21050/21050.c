/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? (var_2 % var_6) : var_12));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 ^= (((((!(1098813738 % 1804756974)))) & (((var_0 + 2147483647) << (((arr_1 [20]) - 2353313497))))));
        arr_2 [i_0] [i_0 + 1] = (min((~-1098813724), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((((((arr_0 [i_1]) ? (arr_3 [i_1]) : (((arr_3 [i_1]) ? 237080436 : var_3))))) ? 4057886870 : (((~var_12) ? 9762152747297694122 : (arr_4 [i_1] [i_1])))));
        var_18 = (min((1098813741 && 72057594037927935), (((var_2 - var_7) ? (max(15665869317399942030, (arr_1 [i_1]))) : (((arr_1 [i_1]) ? var_13 : 5053340080444617631))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 ^= (((arr_0 [22]) ? var_10 : 1));
            arr_10 [i_1] [i_1] [i_2] = (var_4 ? (max(var_6, 7618218171749684612)) : (max(((var_0 ? var_0 : (arr_0 [i_1]))), ((7846683487000196189 ? var_11 : 1)))));
        }
    }
    var_20 = (min((((max(var_6, var_4)) / -var_1)), var_8));
    #pragma endscop
}
