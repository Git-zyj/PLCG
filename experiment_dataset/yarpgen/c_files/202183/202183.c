/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = -var_18;
            var_21 = ((((((arr_2 [i_0] [i_0] [i_0]) ? (arr_4 [i_1]) : (arr_2 [i_0] [i_0] [i_1])))) || (arr_1 [i_0] [i_0])));
            var_22 = var_2;
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_23 = arr_0 [i_0] [i_0];
            var_24 = ((+((32689 ? (!var_15) : 94))));
            var_25 |= 0;
            var_26 = (((var_9 || (~30))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_27 = (arr_4 [i_3]);
            var_28 = (min(var_28, (((((min((arr_7 [i_3]), (arr_7 [i_3])))) ? (arr_5 [i_3]) : var_10)))));
            var_29 = (max(var_29, (arr_9 [i_3] [i_0] [i_3])));
            var_30 = (max(var_30, (arr_10 [i_0 - 1] [i_0 - 1])));
        }
        var_31 &= ((((!((max(22367, (arr_10 [i_0] [i_0])))))) ? (min((((var_14 ? (arr_9 [20] [i_0] [i_0]) : (arr_5 [i_0])))), (11762671175996481271 & 11762671175996481271))) : ((((arr_8 [2] [i_0]) ? ((var_8 ? (arr_7 [2]) : (arr_10 [5] [i_0]))) : ((max(232, -22367))))))));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_32 *= (+-44729);
        var_33 += (((1 ? ((-4461756124641709233 ? 47429 : -4461756124641709233) : 106))));
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_17 [i_5] = ((((((((-(arr_6 [i_5])))) ? (arr_10 [i_5] [i_5]) : (max(var_3, (arr_5 [i_5])))))) ? ((((((var_14 - (arr_16 [i_5])))) || var_11))) : ((-(((arr_6 [i_5]) * 242))))));
        var_34 &= 81;
        var_35 = ((max((arr_16 [i_5]), 44729)));
        var_36 = (min((((22366 >= (arr_2 [i_5] [i_5] [i_5])))), (min((0 | 51517), ((((arr_0 [i_5] [i_5]) > 106)))))));
        var_37 = (min(var_37, (32846 == 1)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_38 = ((1477191547617448670 ? 17592186044415 : -26433));
        var_39 -= ((~((((((-34872658 ? -1 : var_9)) + 2147483647)) >> (arr_16 [i_6])))));
    }
    var_40 = (~87);
    #pragma endscop
}
