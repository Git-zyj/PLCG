/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((1294704857 ? ((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 - 1]) : 42))) : (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_18 = ((max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2]))) % (arr_0 [i_1 - 1]));
            var_19 ^= 3000262438;
            var_20 = ((1294704878 ? (((arr_5 [i_0 - 1] [i_1] [i_1 - 1]) ? (arr_1 [i_0 + 2]) : var_3)) : 16383));
            arr_6 [i_1] [i_1 + 1] = ((-(arr_1 [i_0])));
        }
        var_21 = var_5;
        var_22 = (max(var_22, (((((((arr_2 [i_0]) ? 4294967280 : (arr_5 [i_0 - 1] [2] [i_0 - 3])))) ? ((0 ? var_5 : ((30871 | (arr_0 [i_0 - 3]))))) : (((!((((arr_2 [i_0]) ? var_6 : (arr_0 [i_0 - 1]))))))))))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_23 = (max(var_23, ((((min(((-(arr_8 [12]))), (arr_7 [i_2 + 2]))) & (min(((18876 ? 2 : 16384)), (arr_7 [i_2]))))))));
        arr_9 [i_2] [12] = ((17811582420397455739 ? 6340474153959218888 : ((((arr_8 [i_2]) ? (((~(arr_7 [i_2])))) : 1294704857)))));
        var_24 = (max(var_24, (((((-(arr_8 [i_2 - 1]))) >> ((((18446744073709551604 ? 3000262428 : 63008)) - 3000262400)))))));
        arr_10 [i_2 + 3] [i_2 + 3] = (!38533);
    }
    var_25 -= ((~(5171839030840671971 % 49498)));
    #pragma endscop
}
