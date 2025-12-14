/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_5));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0 - 1]) ? (max(-7109432638181371695, var_9)) : (arr_0 [i_0]))), (arr_1 [i_0 + 1])));
        var_18 = (min((((arr_1 [i_0 - 1]) ? var_8 : 45709953)), var_7));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (max(-1, 1));
        var_20 = (min(var_20, 8792812697194534819));
        var_21 = (max(0, (~15524549611095225967)));

        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((max((~7688), (((((arr_7 [i_1] [0] [i_1]) ? var_0 : var_0)) * ((35981 ? 0 : (arr_3 [i_1 + 1]))))))))));
            arr_8 [i_1] [i_2] [i_1] = ((+(((((arr_6 [18] [18] [i_2]) ? (arr_4 [i_2 - 2]) : var_15))))));
            arr_9 [i_2 - 1] = ((((arr_7 [i_2 - 2] [i_2 + 1] [i_2 - 1]) ? (arr_7 [i_1] [9] [i_1]) : (((1 ? 59943 : 1))))));
            var_23 = (min(var_23, (((((((max(97748521, 10656))) ? 1228801977 : 10136332436181099762)) >= (((((max(-1269, -47))) ? (-32767 - 1) : (-433431121931363801 < 1)))))))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] = ((237877431 ? (((!197) ? -1269 : (max(var_8, 961)))) : ((var_0 ? (arr_11 [i_3 + 1] [i_1 - 1]) : (arr_11 [i_3 - 1] [i_1 + 1])))));
            var_24 = 814569382;
            var_25 = ((-851863029 ? 1 : 1));
            arr_14 [i_3] [i_3] = (((((!(arr_7 [i_1 - 1] [9] [i_3 + 1])))) << ((((14 ? (arr_6 [i_1 + 1] [i_1 + 1] [i_3 - 2]) : (var_15 < 11804784190967669644))) - 2932381414710919110))));
            var_26 = var_16;
        }
        var_27 = (((max((((~(arr_7 [i_1] [i_1] [i_1])))), (arr_5 [i_1]))) != (((-433431121931363798 ? var_15 : ((var_6 ? 1 : 576460752303423486)))))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = (((max(10136332436181099762, (arr_5 [i_4]))) != (arr_10 [i_4 - 1])));
        arr_19 [i_4] = (arr_12 [i_4]);
        var_28 = (((-127 ^ (((1 ? 1 : 983040))))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_29 = 4057089865;
        var_30 = (min(var_30, (((max(((min(1, -28))), ((10136332436181099754 ? 25389 : (arr_21 [18])))))))));
        arr_22 [i_5] = (arr_5 [i_5 - 1]);
    }
    var_31 = 8310411637528451861;
    var_32 = ((((max((min(0, 9659871428117052001)), var_8))) ? (((var_1 ? (((905018799 << (var_16 + 132)))) : -6090893161568251568))) : ((var_2 ? ((((var_7 + 2147483647) << (((-99 + 114) - 15))))) : 1082038032035620379))));
    #pragma endscop
}
