/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [20])));
        var_21 += 44686;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_22 = ((((((var_10 ? -31 : var_11)) + 2147483647)) >> (arr_3 [i_0 - 1])));
            var_23 &= (((arr_3 [i_1 + 1]) >= ((var_12 << (arr_5 [i_0] [4])))));
            arr_7 [i_0] [i_1] = (arr_5 [i_1 + 1] [i_1]);
            var_24 = (arr_3 [i_0 + 1]);
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_25 = var_11;
            var_26 = (((arr_10 [i_3 - 3]) ? (((arr_10 [i_3 + 1]) ? (arr_10 [i_3 - 4]) : (arr_10 [i_3 - 1]))) : ((-(arr_10 [i_3 - 2])))));
            arr_13 [i_2] [i_2] [i_3] = ((((((!var_18) << ((((arr_1 [i_3 - 1] [i_2]) >= (arr_1 [i_2] [i_2]))))))) || ((min(var_0, ((((arr_4 [4] [i_3] [i_3]) != 594321974643645692))))))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_27 = (min(var_27, (((((((arr_11 [i_4]) ? (arr_6 [i_4] [i_4] [i_4]) : (arr_6 [1] [i_4] [i_2])))) ? (arr_11 [i_2]) : (((!(arr_11 [i_4])))))))));
            var_28 = ((-((((((arr_9 [11] [i_4]) ? var_8 : 594321974643645695)) >= ((((arr_5 [i_2] [i_4]) % var_1))))))));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            arr_20 [i_2] [i_2] [i_5] = (arr_19 [i_5]);
            var_29 -= (arr_17 [i_5] [i_2]);
        }
        var_30 = (max(var_30, ((min(var_17, (((arr_10 [i_2]) & (arr_10 [i_2]))))))));
        arr_21 [i_2] = 1002394840;
    }
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_31 = (min(var_31, (arr_4 [6] [i_6 - 1] [1])));
        var_32 = ((((17852422099065905924 * (!594321974643645692))) <= (arr_2 [i_6 - 2] [12])));
        arr_24 [i_6] [i_6] = (min((min((((arr_23 [i_6]) ? (arr_4 [i_6 - 3] [i_6 - 2] [18]) : (arr_1 [i_6] [i_6]))), (arr_23 [i_6 - 3]))), 1002394840));
        arr_25 [i_6] [i_6 - 2] = ((arr_6 [i_6] [i_6] [i_6]) == 594321974643645692);
    }
    var_33 = ((2147483647 ? 11 : 26250));
    var_34 = (min(var_34, var_11));
    #pragma endscop
}
