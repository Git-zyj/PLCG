/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 += (var_4 < var_0);
        arr_4 [6] = 1;
        var_21 += (!(arr_3 [i_0]));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = ((!((!(arr_1 [i_1])))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = ((var_9 > (arr_9 [i_1] [i_2])));
            var_24 = (min(var_24, var_7));
        }
        var_25 = (max((((~1) ? ((max((arr_8 [i_1]), var_1))) : -23645)), ((((max(23670, 1))) ? -23645 : 1))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_16 [i_3] = ((1 ? (arr_6 [i_4 + 3] [i_4 - 1]) : (arr_6 [i_4 + 3] [i_4 - 1])));
            var_26 = (arr_2 [i_3]);
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_27 = -11684;
            var_28 = (arr_12 [i_5] [i_3]);
        }
        var_29 = ((((var_0 ? (arr_2 [i_3]) : 11762)) << (((((arr_14 [i_3]) + 16320)) - 3646628704))));
        var_30 = (1107906880 > -761310009);
        var_31 = (min(var_31, (((!(arr_0 [i_3] [i_3]))))));
        var_32 ^= ((var_16 ? (arr_8 [i_3]) : ((var_6 / (arr_1 [i_3])))));
    }
    var_33 = ((62 ? 4 : 0));
    var_34 = 232;
    var_35 = ((-((var_11 ? -21 : var_0))));
    #pragma endscop
}
