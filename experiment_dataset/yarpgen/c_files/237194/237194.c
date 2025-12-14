/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = (((min(-var_16, (!var_6))) <= -var_4));
    var_21 = var_4;

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_22 *= ((max((!245), (((arr_0 [i_0]) >> (((arr_1 [i_0]) - 56852)))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_23 = (((var_2 <= (arr_1 [i_0 + 1]))));
            arr_5 [i_1] [i_0 - 1] [i_0] = (((((((!(arr_4 [i_0] [i_1])))) <= (arr_0 [i_0 - 3]))) ? ((1 ? var_7 : (arr_2 [i_0] [i_1] [i_0]))) : (arr_1 [i_0 - 1])));
            var_24 = 3078;
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_25 = ((arr_7 [i_0 - 3] [i_2 - 1] [i_0 - 3]) > (arr_7 [i_0 - 2] [i_2 + 2] [i_2]));
            var_26 &= var_2;
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_27 = (max(var_27, ((((!var_0) ? (arr_2 [i_0] [i_3] [13]) : var_10)))));
            var_28 = 16;
            var_29 = (arr_8 [i_0 - 1]);
            var_30 ^= (((arr_7 [i_0 + 1] [i_3 - 3] [i_3 - 3]) * var_9));
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_31 = (((arr_15 [i_4 + 1]) ? var_11 : (arr_15 [i_4 + 1])));
        var_32 = ((!(!var_17)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = var_10;
        var_33 |= (((arr_16 [i_5]) == (arr_17 [10])));
        var_34 = (((arr_16 [i_5]) <= (arr_16 [i_5])));
    }
    var_35 ^= var_0;
    #pragma endscop
}
