/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = var_12;

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_17 -= (((((-(arr_0 [i_1 + 1])))) ? (min(var_11, var_9)) : ((((arr_0 [i_1 - 2]) * (arr_0 [i_1 + 2]))))));
            var_18 = (min(var_18, ((((!var_11) * (arr_4 [2] [i_1] [i_0]))))));
            var_19 += ((~(6946 * 6938)));
            var_20 = (((((arr_4 [i_1 + 2] [i_1] [i_1 + 1]) + 9223372036854775807)) >> ((31 ? 0 : 1))));
            arr_6 [i_0] [i_0] [i_1] = 90;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_3] [i_0] [i_0] = (((!(arr_2 [i_0]))));
                var_21 = (max(var_21, (((-86 - (!58589))))));
                var_22 = arr_4 [i_0] [i_2] [i_0];
            }
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                var_23 -= ((var_3 ? var_14 : (((arr_0 [i_0]) ? 58609 : (arr_11 [2] [i_0] [3] [2])))));
                arr_16 [i_0] [i_4] = var_13;
                var_24 *= (!var_1);
                arr_17 [i_2] [i_2] [i_2] = var_14;
            }
            var_25 *= -2;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_26 = (min(var_26, ((!(((6943 ? (arr_0 [i_5]) : 58592)))))));
            var_27 *= ((((arr_0 [i_0]) ? (arr_15 [i_0] [i_0] [i_5] [i_5]) : var_8)));
            arr_20 [i_0] [i_0] = (((var_8 + 2147483647) << ((((min(var_11, (arr_8 [i_5])))) - 94))));
        }
        var_28 &= 194555033;
        var_29 = (((arr_0 [i_0]) ? ((((((var_7 ? (arr_1 [i_0]) : (arr_7 [i_0])))) || var_14))) : ((((arr_19 [i_0]) || (arr_19 [i_0]))))));
        arr_21 [i_0] = (((1 <= 58589) * ((~(~var_1)))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_30 = ((((((var_2 ? (arr_18 [i_6] [i_6]) : var_11)))) ? (((!(~var_10)))) : (58591 + 124)));
        var_31 = ((-(402653184 <= 58616)));
        arr_25 [i_6] [i_6] = (!4106390930239691220);
    }
    var_32 += ((var_12 ? var_5 : (!var_8)));
    var_33 -= var_6;
    #pragma endscop
}
