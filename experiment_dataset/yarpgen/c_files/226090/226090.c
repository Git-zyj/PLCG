/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) && (((-((3775982629403901342 ? var_16 : var_10)))))));
        arr_3 [i_0] = (982557994 / 1073741824);
        arr_4 [i_0 - 1] = 21771;
        arr_5 [i_0] [i_0] = ((~(((!(((-(arr_1 [i_0])))))))));
        arr_6 [6] = (((-(arr_1 [i_0 - 1]))) >= ((((arr_1 [i_0 + 1]) <= (arr_1 [i_0 + 1])))));
    }
    var_17 = -var_3;
    var_18 = 1048320;
    var_19 -= 127;

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (min(var_20, (1073741815 % 2147475456)));
        arr_9 [i_1] [i_1] |= -1048316;
        arr_10 [i_1] [i_1] = ((-(((arr_7 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_21 -= (min(97, ((var_14 << (var_12 - 1120759376)))));
        arr_13 [i_2] = (((((-2147475457 | (arr_12 [1])))) & (((~1) ? (1073741815 < var_16) : ((15117557747891134925 / (arr_12 [i_2])))))));
        arr_14 [i_2] [i_2] = ((~(15117557747891134932 != 2797825010)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (min(var_22, (((!((min((arr_0 [i_3] [i_3]), (!2199023255551)))))))));

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_23 += -3284185923;
            var_24 &= (arr_0 [i_3] [i_3]);
            var_25 *= (arr_7 [i_3]);
            var_26 = (min(var_26, var_9));
            var_27 *= (arr_17 [i_3] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_23 [i_5] = var_4;
            arr_24 [i_5] = var_4;
            arr_25 [i_5] = (arr_20 [i_5]);
        }
        var_28 = (max(var_28, ((((((arr_16 [i_3]) ? (arr_16 [i_3]) : (arr_16 [i_3]))) >= (((arr_19 [0] [0] [i_3]) ? (arr_19 [i_3] [i_3] [i_3]) : (arr_19 [i_3] [i_3] [i_3]))))))));
        var_29 = (arr_1 [i_3]);
        var_30 *= (((((-32 ? (~-45) : 3221225471))) || (((-(arr_0 [i_3] [i_3]))))));
    }
    #pragma endscop
}
