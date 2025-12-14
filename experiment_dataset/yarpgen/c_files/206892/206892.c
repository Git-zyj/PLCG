/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(((((384462090 ? 3 : 1979034313)) > (~var_7))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 &= (arr_1 [i_0]);
        var_22 = 4004210868;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] = (((((var_10 || 6363341223440034672) ? (arr_1 [i_1]) : ((var_9 ? 11599148397827935743 : (arr_0 [5]))))) * ((min(65535, 5129995374547036459)))));
        var_23 = (max(var_23, (arr_3 [i_1] [8])));
        arr_5 [i_1] = 12355503235524422422;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_24 &= 2217476729123765680;
        var_25 += (arr_1 [i_2 + 1]);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_26 = (((((((min((arr_8 [i_2] [i_2]), 32746))) >> ((((var_17 << (910548181 - 910548172))) - 492))))) ? (arr_6 [i_2 + 1]) : (min(4294967295, (max(-5942407893251119003, 1))))));
            var_27 = ((-3976658168 >> (((~var_11) + 7))));
            var_28 = 86;
        }

        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_29 = (((((arr_0 [i_2 + 1]) && (arr_0 [i_4]))) ? ((((arr_0 [i_2]) ? (arr_0 [i_2 + 2]) : (arr_0 [i_2 + 2])))) : (arr_0 [4])));
            var_30 ^= (max(235417268, 1));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_31 = (min(var_31, (arr_8 [i_2 + 3] [16])));
            var_32 = ((~(-32767 - 1)));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            var_33 -= (((arr_11 [i_2 - 1] [11]) || (arr_11 [i_2 + 1] [16])));
            arr_18 [i_2] [i_2] [i_2] = (~-1);
            var_34 = ((-51 ? (arr_6 [i_2 - 1]) : var_2));
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_35 &= 65535;
        var_36 = ((((((~var_10) ^ (((-33 ? (arr_20 [i_7]) : (arr_17 [i_7]))))))) ? (max((min(6620993239979507762, 16939702670803609926)), ((4194304 % (arr_7 [18]))))) : var_15));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_37 *= (((arr_21 [i_8]) >> (255 - 250)));
        arr_24 [i_8] [15] = 10432765295681364885;
        var_38 = ((22073 % (arr_23 [i_8])));
        var_39 = (min(var_39, var_10));
    }
    #pragma endscop
}
