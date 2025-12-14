/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_5;
    var_14 = 1138636217;
    var_15 = -2147483647;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_16 |= ((!(((+((((arr_1 [6]) >= (arr_1 [2])))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((((((arr_0 [i_0 - 1] [i_0 - 2]) ? var_3 : (max(-5552796209965399694, 1))))) ? (arr_1 [i_0]) : (arr_0 [i_0 - 3] [i_1])));

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                var_18 = -var_2;
                var_19 = ((((max(var_9, (max(var_8, 0)))))) & ((((max((arr_4 [i_0] [i_2 - 1]), (arr_1 [i_0])))) ? (max((arr_0 [16] [16]), 4)) : (((1138636217 ? (arr_2 [i_0] [i_0]) : (-9223372036854775807 - 1)))))));
            }
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_9 [i_0] [i_3] [i_1] [i_0] = var_4;
                var_20 -= (arr_3 [6]);
                var_21 *= 1011462254;
            }
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_22 ^= ((((15337316305951997509 <= var_5) ? (4158367370601087215 == var_12) : (arr_7 [i_0] [22] [i_4]))));
            arr_12 [i_0] [i_0] = (max((max((arr_8 [i_0 - 1] [i_0]), (4294967272 & -1))), -2147483641));
            var_23 |= ((((((arr_7 [i_0 + 1] [4] [i_4 - 1]) + (arr_7 [i_0 - 1] [6] [i_4 - 1])))) || (((-(arr_1 [22]))))));
            arr_13 [i_0] [i_0] [i_0] = (!10278065377756204065);
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_24 = (((var_10 ? var_10 : (arr_1 [i_0]))));
            var_25 |= (((arr_3 [14]) * (arr_4 [8] [i_5])));
            var_26 = (((((var_6 >= (arr_3 [i_0])))) > var_2));
            arr_16 [i_0] [i_0] [i_0] = (((!0) ? var_10 : var_11));
            arr_17 [i_0] [2] = var_1;
        }
        var_27 *= var_6;
        var_28 = (min(var_28, (!var_2)));
        arr_18 [0] |= (((((-13323 | 6) || (arr_0 [i_0] [i_0]))) ? -2996468613122524931 : ((-9920 ? ((max(33195, 1103158839))) : -1))));
    }
    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = (210 != 725783951);
        var_29 = (((arr_11 [i_6] [i_6] [i_6 + 1]) ? (arr_11 [i_6] [i_6 + 3] [i_6 - 2]) : (arr_11 [i_6 - 3] [i_6 + 2] [i_6 - 1])));
    }
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        arr_24 [i_7] = (arr_4 [i_7] [i_7]);
        arr_25 [i_7] = ((!((min(1, 8516506994705969068)))));
        arr_26 [12] = (arr_2 [i_7] [i_7 + 1]);
        var_30 = var_11;
    }
    #pragma endscop
}
