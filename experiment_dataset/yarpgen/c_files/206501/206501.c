/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((((max(30, 0))) ? (1812250213 >= 184) : (max(var_6, var_1)))), (((((var_3 ? -5 : var_15)) / var_17))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = -47465792;
        var_21 = (min(var_21, ((((var_3 ? (arr_3 [i_0]) : (arr_3 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (min(var_22, ((max((max((arr_3 [i_1 + 2]), (max(var_1, var_14)))), (((!(arr_8 [i_1 + 2])))))))));
            var_23 ^= ((((((((4 ? -959124438 : 15849))) ? ((((arr_8 [1]) % var_2))) : (max((arr_1 [i_1 - 1] [i_1]), (arr_0 [i_1])))))) ? ((~((max(-90, var_16))))) : ((1812250189 ? 0 : -42148700))));
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_11 [i_1 + 1] = ((((((min(var_17, -3158188312274468605))) == ((-1 ? var_13 : var_1)))) ? -1214490035 : var_0));
            arr_12 [i_3] [i_3 + 1] = ((((84 ? (arr_7 [i_1 + 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 + 1]))) >> (1 / 207)));
        }
        arr_13 [i_1 + 1] = (14448 & 1884178945);
        arr_14 [i_1] [i_1] = ((!(((233 ? var_1 : 162)))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_24 ^= (((((max(var_4, 3645278748)))) ? ((((!45661) << (((arr_16 [i_4]) - 16658280949849366696))))) : ((((max(var_5, 18446744073709551615))) ? -528482304 : var_11))));
        var_25 = (max(var_25, ((((((var_15 ? 188 : (arr_17 [i_4])))) ? (arr_17 [i_4]) : -1)))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_20 [i_5] [i_5] &= min((((arr_18 [i_5]) >> (var_11 + 1089728601))), -808899466);
        arr_21 [18] = 1884178945;
        var_26 *= 3599802515;
        var_27 += (arr_19 [19] [i_5]);
        var_28 = (min((((arr_19 [i_5] [i_5]) > (((arr_18 [i_5]) ? var_9 : 168)))), ((!((max((arr_18 [i_5]), 877933884)))))));
    }
    var_29 &= ((!((max(var_5, (var_1 >= var_12))))));
    #pragma endscop
}
