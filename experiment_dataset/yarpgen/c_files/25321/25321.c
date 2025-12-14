/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((0 ? ((255 % (((-424960742363029577 <= (arr_0 [i_0] [i_0])))))) : 2));
        var_21 += var_1;
        var_22 = (max(var_22, (((var_16 ? ((min((min(var_2, (arr_0 [i_0] [i_0]))), 254))) : (min(var_12, var_18)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_23 = ((var_11 * ((var_11 ? ((min(-61, var_5))) : (max((arr_0 [i_1] [i_2]), var_12))))));
            var_24 *= ((max(var_4, ((((arr_1 [i_1] [i_2]) > -23943))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_8 [i_1] [i_1] [i_3] = ((((var_5 * ((8461929655237655384 ? 8466 : (arr_2 [i_1])))))) < 18357068976626523022);
            arr_9 [i_3] = (((arr_5 [i_3] [14]) - (min((arr_4 [i_3] [i_3]), 30))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_12 [i_1] [i_4] = var_6;
            var_25 = (((((~(arr_0 [i_1] [i_1])))) ? (((((var_9 << 4) <= ((var_13 << (((var_19 + 1531482650944293104) - 15)))))))) : (((((arr_0 [i_1] [i_1]) ^ (arr_6 [10] [i_1] [10]))) % var_13))));
            var_26 = (25 - 120);
        }
        arr_13 [i_1] [i_1] &= ((var_12 ? (((((((arr_1 [i_1] [i_1]) << var_11))) && 18357068976626523016))) : ((((((arr_3 [i_1]) != (arr_0 [i_1] [i_1])))) * ((var_15 ? 1 : 1))))));
        var_27 -= (min(((4486007441326080 ? var_18 : var_2)), (min(var_13, (arr_11 [i_1] [i_1] [i_1])))));
        arr_14 [i_1] = (((max((arr_3 [i_1]), var_13))) && (((18357068976626523022 ? (max(89675097083028575, -1059682280)) : (1 & 2)))));
        arr_15 [i_1] = (((1 || -124) ? 3100973612389206303 : (var_5 || 1)));
    }
    var_28 = ((((max(var_15, var_8))) ? (((var_6 > var_10) << var_9)) : ((((max(var_10, var_11)) || 254)))));
    var_29 = (((1 * (20922 > -38))));
    var_30 = (min(var_13, (min(1, ((46959 << (255 - 242)))))));

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_31 *= ((((((arr_17 [i_5]) != (arr_17 [i_5])))) << ((((0 ? 0 : -10)) + 13))));
        arr_18 [i_5] [i_5] = ((119 != ((((((~(arr_16 [i_5])))) && ((max(-120, var_6))))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_32 *= 18357068976626523017;
        var_33 = arr_2 [i_6];
        arr_22 [i_6] = (arr_21 [3]);
        arr_23 [i_6] [i_6] = (1502511801500241697 > -5356913756637958905);
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        arr_28 [i_7 + 1] = ((var_8 <= ((((((arr_25 [i_7]) ? var_13 : (arr_25 [i_7])))) ? (((max(var_7, -1)))) : ((var_3 << (622 - 601)))))));
        var_34 = ((((((111 || 1) ? var_8 : (max((arr_26 [i_7 - 2] [i_7 - 2]), (arr_27 [i_7] [i_7 - 2])))))) > (min((arr_26 [i_7] [i_7 - 1]), (((arr_26 [i_7] [i_7]) & var_0))))));
        var_35 = (min(var_35, (var_3 || var_4)));
    }
    #pragma endscop
}
