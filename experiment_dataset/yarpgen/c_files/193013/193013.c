/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? var_10 : 44));
    var_12 = ((0 ? (((!0) ? 65535 : 1)) : 44));
    var_13 = (((((var_6 - 1247186405) ? var_2 : ((var_7 ? var_2 : var_5))))) ? var_4 : (min(7040914568291244968, var_0)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (min((((!((max(-72, 65519)))))), 6630346249889976914));
        var_14 = (min(var_14, var_8));
        arr_3 [i_0] = ((65521 & (((!(arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (((((~((9223372036854775807 & (arr_5 [i_1])))))) ? ((((((arr_5 [i_1]) + 0))) ? var_10 : (~51328))) : ((((3 ? 118 : 3))))));
        arr_7 [i_1] = ((!(((-(arr_4 [i_1]))))));
        arr_8 [i_1] = ((((((arr_5 [i_1]) && var_4))) ^ (!var_4)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_15 = (min(var_15, -72));
        var_16 = ((-(arr_1 [i_2])));
        arr_12 [i_2] = ((var_5 ? (arr_1 [i_2]) : (arr_1 [i_2])));
        arr_13 [i_2] [i_2] = 195;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 *= (0 > 25);

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_18 *= var_9;
            arr_20 [i_3] [i_4] = (!var_0);
            arr_21 [i_4] = 17968410906266044022;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_24 [i_5] = (0 || 1183600667);
            arr_25 [i_5] [i_5] [i_5] = 9775045169210891248;
        }
        var_19 ^= (65535 + var_7);
    }
    var_20 += var_0;
    #pragma endscop
}
