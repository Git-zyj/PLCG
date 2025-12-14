/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2147483632;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((-var_11 ? (1362 ^ -458955621) : (-458955615 + -35)));
            arr_6 [i_0] = (((((!(arr_1 [i_0] [i_1])))) << (var_4 - 28)));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_2 + 1] = (min((max(458955598, (var_5 || var_14))), -74));
            var_16 = ((((var_9 || (arr_1 [i_2 - 2] [i_2 - 1]))) ? (((arr_1 [i_2 + 1] [i_2 - 1]) ? (arr_1 [i_2 - 2] [i_2 - 1]) : (arr_1 [i_2 - 1] [i_2 - 1]))) : ((max((arr_1 [i_2 + 1] [i_2 - 2]), -21943)))));
        }
        var_17 &= (arr_0 [i_0] [4]);
        arr_11 [i_0] = ((-((min((arr_4 [i_0] [i_0] [i_0]), (((!(arr_3 [i_0] [i_0] [11])))))))));
    }
    var_18 = (((min(var_0, (~-74))) + ((var_8 ? var_7 : 458955621))));
    var_19 = (min(var_19, (((var_1 ? ((-var_0 ? var_6 : var_7)) : (min(var_0, (458955608 - var_6))))))));
    var_20 = -266;
    #pragma endscop
}
