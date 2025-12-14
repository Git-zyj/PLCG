/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (max(219305526, 18446744073709551615)) : (((((((var_4 ? (arr_2 [i_0] [i_0]) : var_1))) || (arr_2 [i_0 + 1] [i_0])))))));
        var_13 = 112;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = ((max(var_0, (156 >> 0))) > (-var_7 == var_6));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] = (((var_6 * 147) | var_0));
            arr_9 [i_1] [i_1] = (((arr_7 [i_1]) ? 127 : (arr_7 [i_2])));
            var_15 = ((~(arr_0 [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_16 -= (((171 & var_11) || 112));
            var_17 -= (~var_7);
            arr_12 [i_3] [5] [i_1] = (~var_1);
            var_18 = (arr_11 [i_3 + 3] [i_3 + 3] [i_3]);
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 = ((!((max(-var_10, (var_12 / 13834))))));
        var_20 *= ((~(((!(((arr_15 [i_4]) && 51701)))))));
        var_21 += ((((((((var_11 ? (arr_15 [i_4]) : (arr_16 [i_4])))) ? -var_7 : (arr_15 [i_4])))) ? (arr_16 [i_4]) : 43));
        var_22 *= (((((min(var_7, -670867955)) * -670867941)) - (max(4053191141, (arr_14 [i_4])))));
    }
    var_23 &= ((-((((min(-20055, 3500333038)) <= (!10092321762746460875))))));
    var_24 = ((-(min(4294967295, 88))));
    #pragma endscop
}
