/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((15 ? 4816783559255715837 : 1569896008));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [9] = (arr_3 [i_0] [i_1] [i_1]);
            arr_5 [i_0] [i_0] = ((1463454236 ? (13306347414613565551 * var_9) : (13306347414613565558 == -57)));
        }
        var_11 = (min(var_11, var_9));

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_12 = ((-(arr_8 [i_2 + 1] [i_0] [i_0])));
            arr_9 [i_2] [i_0] = (arr_3 [i_2] [i_2 - 3] [i_2 + 3]);
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_13 = (((-(arr_11 [i_3]))));
            arr_15 [i_4] [6] = ((((1 ? (arr_13 [16] [i_4] [i_4]) : var_2)) % ((((-var_7 + 2147483647) << (((arr_8 [i_3] [6] [i_4]) - 12)))))));
        }
        arr_16 [i_3] = ((min((((var_1 ^ (arr_14 [14] [i_3])))), 16218263)) >= var_6);
        var_14 = max(((1 ? (max(var_5, var_2)) : (arr_13 [i_3] [i_3] [i_3]))), (((18446744073709551615 ? (arr_11 [i_3]) : -var_9))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_19 [i_5] [i_5 + 1] = (((!var_6) ? var_8 : (arr_0 [i_5])));
        var_15 = (max(var_15, 1332792230));
        var_16 = ((-(arr_0 [i_5 + 1])));
        arr_20 [i_5] = (((arr_0 [i_5 + 1]) ? var_8 : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 - 1])));
    }
    #pragma endscop
}
