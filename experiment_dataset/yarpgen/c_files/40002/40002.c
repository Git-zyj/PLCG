/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? var_0 : ((((min(-33, 3442153524555811089))) ? var_8 : var_8))));
    var_12 = (min(var_12, 246));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 6687479172519128413;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_1] = 14347;
            var_14 ^= (min(10, ((39312 ? (arr_0 [i_1] [i_0]) : (arr_0 [i_0] [i_0])))));
        }
        var_15 ^= var_6;
        var_16 = (min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = (arr_0 [i_2] [17]);
        var_18 = (~(((arr_5 [i_2]) ^ ((108 ? 14285390988031007619 : 12916876580897647415)))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = var_8;
        var_19 = (max(var_19, (arr_7 [i_3])));
        arr_10 [i_3] [i_3 + 1] = var_6;
        arr_11 [i_3] [i_3] = ((-14352 == (max(((-15364 ? 227 : var_0)), 39312))));
        arr_12 [i_3] = (((((((max(18446744073709551615, 0))) ? (arr_6 [i_3] [i_3]) : ((((arr_1 [16]) ? var_2 : (arr_3 [i_3 + 2] [i_3]))))))) ? 0 : (arr_2 [i_3] [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [21] = 18446744073709551612;
        var_20 = (max(var_4, ((234 ? (var_7 || 14176701069301097102) : (min(343422605, (arr_14 [i_4])))))));
        var_21 = (max(var_21, var_4));
    }
    #pragma endscop
}
