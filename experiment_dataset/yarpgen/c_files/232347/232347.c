/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_1));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = ((((!((max(52126, 7825525724902982363))))) ? var_15 : (min(var_2, (arr_2 [i_0] [i_1])))));
            var_19 = (arr_1 [i_0]);
        }
        var_20 = (arr_1 [i_0]);
        var_21 = arr_4 [i_0 + 2] [i_0];
        var_22 *= ((-((52112 >> (((arr_5 [i_0] [i_0 - 1]) - 70))))));
        var_23 = var_6;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_24 = (max(var_24, ((((((~var_13) + 2147483647)) >> (((18636 > (-127 - 1)))))))));
        var_25 = (((((14034210577733504189 >> (var_10 - 17415738650030066816)))) ? ((((-5068866221940227914 && (arr_4 [i_2] [i_2]))))) : var_6));
    }
    var_26 |= var_10;

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_27 = 7825525724902982363;
        var_28 = ((-9223372036854775807 - 1) && (((~(!var_2)))));
        var_29 = 0;

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_30 = (arr_6 [i_3]);
            var_31 = (-((4238194118503996514 ? 8496018056795562660 : 122)));
            var_32 &= (-9223372036854775801 ? (~var_8) : (((-(arr_14 [i_3] [14] [i_4 + 2])))));
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_33 = (max(var_33, ((var_6 ^ (arr_15 [i_5 - 1])))));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_34 = ((((max(1168465055025965858, 7780773423454804008))) ? -var_0 : (((-(arr_4 [i_5] [i_5 - 1]))))));
            var_35 = var_7;
            var_36 = 32765;
        }
        var_37 = (min((((16020610133708504948 ^ (arr_3 [i_5] [i_5] [i_5])))), (arr_2 [i_5 - 2] [i_5])));
        var_38 = ((~(arr_0 [i_5])));
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_39 = (arr_4 [i_7] [i_7 + 3]);
        var_40 = ((7708071732337217587 > var_6) ? (((arr_22 [i_7 + 2]) ? ((-1168465055025965841 ? 1 : -7825525724902982364)) : 3209690588495746455)) : ((~((var_15 ? var_11 : (arr_3 [11] [11] [i_7 - 1]))))));
    }
    #pragma endscop
}
