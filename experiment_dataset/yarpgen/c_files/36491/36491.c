/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2;
    var_16 = (((((-(max(1, 3430772990422622881))))) ? (((max(1, -34)))) : (((var_13 < -383282213) ? var_0 : var_1))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = ((arr_2 [i_0]) ? (arr_2 [i_0]) : (var_10 >= var_5));
        var_18 = (1 - 1);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = ((+(((arr_2 [i_1]) & 1))));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_20 = ((~(((arr_3 [i_1] [i_2]) ? (((arr_3 [i_1] [i_2]) ^ var_2)) : (((-(arr_0 [i_1]))))))));
            var_21 = (((((var_6 ? 383282199 : 224))) ? ((~((32759 ? (arr_3 [i_2 + 1] [i_2 + 1]) : (arr_1 [i_1] [i_2 + 1]))))) : ((12656 ? ((-383282209 ? 1 : var_12)) : var_4))));
            var_22 = 18446744073709551615;
            var_23 = -7;
            var_24 = ((min((arr_1 [i_2 + 1] [i_2 + 1]), (arr_1 [i_2 + 1] [i_2 + 1]))));
        }
        var_25 = (min(var_25, (((((6495 ? ((min(-18289, var_9))) : var_7)) < (((((var_13 ? (arr_2 [i_1]) : 10897)) > var_14))))))));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_26 = (max(var_26, (arr_5 [2])));
        var_27 = (((((3317718894315192224 ? (min((arr_7 [i_3]), var_6)) : (65517 / 32759)))) ? (arr_8 [i_3 - 1]) : (min((max((arr_6 [i_3] [i_3 - 1] [20]), 4294967295)), (((var_14 || (arr_8 [i_3 + 1]))))))));
    }
    #pragma endscop
}
