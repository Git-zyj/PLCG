/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = var_7;
        var_16 = arr_1 [i_0];
        var_17 = ((52891 > (!-1212894946042242439)));
        var_18 = ((-(~var_13)));
        var_19 = (~29722);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (((min((1 < 1212894946042242445), var_7)) < ((((arr_3 [i_1]) ? 1890151278 : 238)))));
        arr_4 [i_1] = ((230240018599009566 ? (!238) : (((230240018599009566 && (arr_3 [i_1]))))));
        var_21 = ((1212894946042242449 ? ((0 ? 230240018599009577 : 0)) : ((31 ? -773751092 : 1212894946042242438))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            var_22 = (min(var_22, (arr_0 [9] [i_3 - 1])));
            var_23 = (max(var_23, var_6));
            var_24 = (var_14 == 0);
            var_25 -= (arr_6 [i_2] [i_3]);
            var_26 = var_8;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_27 ^= 60764;
            var_28 = -1266335877;
            var_29 = (((((arr_10 [i_2] [i_2] [i_4]) ? 31 : 62914))) ? (arr_9 [i_2] [i_4]) : 244);
            var_30 = (((arr_6 [i_2] [i_4]) ? 0 : 4));
        }
        var_31 = (((((1 ? 1 : (arr_5 [i_2] [i_2])))) ? (arr_10 [i_2] [i_2] [i_2]) : 1682650300));

        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            var_32 -= (arr_8 [i_2] [i_5 - 2]);
            arr_14 [i_2] [i_5] = (((arr_5 [i_5] [i_5 - 2]) * (arr_11 [i_5 - 1])));
            var_33 = ((!(!592637966)));
            arr_15 [i_2] [i_5] = ((-((7595243345733976758 ? -230240018599009543 : (arr_8 [i_2] [i_5])))));
        }
    }
    #pragma endscop
}
