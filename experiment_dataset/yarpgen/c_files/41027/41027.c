/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((var_8 | var_10) && var_1)))));
    var_13 = (max(var_13, -18446744073709551615));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_14 -= (max(var_9, (8191 >= 3310642637)));
            var_15 = (max(((((!(arr_4 [i_1] [18] [i_0]))) ? (((-(arr_2 [i_0] [i_0])))) : (min((arr_0 [i_1]), var_0)))), -8191));
            arr_5 [i_0] [i_0] [i_1] = max(((var_4 | (arr_0 [i_0 - 1]))), (~-8168));
        }
        var_16 = (!18446744073709551615);
        var_17 += (min((-1157765979 && 7136), ((((-32747 + 2147483647) << (((-1157765979 + 1157766007) - 28)))))));
        var_18 = ((-(min((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 -= (((arr_6 [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_6 [i_2])));
        arr_8 [i_2] = ((~((-(arr_7 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] |= (((((((1 && (arr_3 [i_3] [i_3] [i_3]))) ? (arr_11 [i_3] [i_3]) : (((!(arr_0 [i_3]))))))) && ((((max(var_2, 2991608982)) * ((var_7 ? var_10 : var_11)))))));
        var_20 ^= (((arr_10 [i_3]) || -4401));
        var_21 = (min(6861, 65535));
    }
    var_22 -= (var_4 != -51309);
    #pragma endscop
}
