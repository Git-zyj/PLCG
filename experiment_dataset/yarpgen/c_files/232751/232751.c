/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [15] [i_0] = var_6;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 931009802;
            var_15 ^= ((255 ? (1 | var_2) : (arr_4 [i_0] [i_0 + 3] [i_0])));
            var_16 = (92 <= 252);
        }
        var_17 = (((arr_2 [i_0 - 1] [17]) << (((arr_1 [i_0 + 2]) - 54206))));
        var_18 = (((((var_0 > (arr_4 [i_0 + 1] [5] [i_0 + 1])))) - -1));
    }
    var_19 = (((((235 ^ (!var_4)))) / var_13));
    var_20 = var_3;

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = 3363957495;
        var_21 = (-35 <= -244);
        var_22 = (max(var_22, ((((((~(arr_7 [18] [i_2])))) != (((255 ^ 127) ? (((arr_7 [i_2] [i_2]) ? 2525575731 : (arr_7 [i_2] [2]))) : ((~(arr_8 [6]))))))))));
        arr_11 [i_2] = (min(var_8, ((((((1 ? var_7 : 5053933144803697980))) ? (!1586999269) : (249 >= 4294967294))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_23 = (min(var_23, (arr_14 [12] [12] [i_3])));
            var_24 ^= 5662024550243601982;
            var_25 = (min(var_25, 100));
            var_26 = ((var_11 >= (arr_9 [i_3] [i_4])));
            var_27 *= ((~(arr_8 [i_3])));
        }

        /* vectorizable */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_5] [i_5 + 2] = ((-((2043649483 / (arr_1 [i_5])))));
            var_28 -= ((var_5 && (arr_17 [i_5 - 1])));
            var_29 += (arr_12 [i_5] [i_5]);
        }
        arr_20 [i_3] = ((((((arr_13 [i_3]) ? (arr_13 [i_3]) : (arr_13 [i_3])))) ? ((min(var_7, (arr_13 [i_3])))) : (((arr_13 [i_3]) ? (arr_13 [i_3]) : (arr_13 [i_3])))));
    }
    #pragma endscop
}
