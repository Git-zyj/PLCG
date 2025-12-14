/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_7 | var_1)));
    var_11 ^= (max((~-114), ((((max(var_3, var_6))) % var_8))));
    var_12 &= var_5;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((!(((var_2 ? ((var_5 ? var_0 : (arr_1 [i_0 - 1] [i_0 - 1]))) : var_0))))))));
        var_14 &= (((((((arr_0 [i_0 + 2] [i_0 + 1]) >= (arr_0 [i_0] [i_0 - 1]))))) % (max((arr_0 [i_0] [i_0 + 1]), -43))));
        var_15 ^= (max(((var_0 ? var_6 : (arr_2 [i_0 - 1]))), ((((arr_2 [i_0 + 2]) / (arr_2 [i_0 + 2]))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((~((max(var_1, 1511958208))))))));
        var_17 = (((((((~(arr_0 [i_1] [i_1])))) ? var_6 : -var_1)) < ((((!(-597991324425798237 | var_7)))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 -= (((((~(arr_5 [i_2])))) || 2783009088));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_19 += (((arr_1 [i_3 + 2] [i_3 - 1]) ? (arr_6 [i_3 + 2]) : ((1188856559 ? 0 : 9987934507547788662))));
            var_20 ^= -26058;
            var_21 = (arr_5 [i_3]);
            var_22 = var_7;
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_23 = (max(((max(((((arr_11 [i_2]) >= var_0))), ((var_2 ? (arr_10 [i_2]) : var_3))))), 2783009087));
            var_24 = (min(var_24, ((((((6 ? 597991324425798251 : (!-5915682928779731252)))) ? (((~((max(var_7, (arr_7 [i_2] [i_4 - 1]))))))) : (arr_13 [i_2] [i_2] [2]))))));
            var_25 += (((((((38 ? var_0 : -2100688839114141518))) ? -var_7 : (var_8 * var_5))) <= ((((((var_0 ? var_6 : var_2))) ? var_7 : ((56096 >> (1511958208 - 1511958190))))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_26 = (1 ? 58255 : 1835008);
            var_27 = (min(var_27, (((var_2 ? var_8 : (arr_12 [i_5] [i_5] [i_5]))))));
            var_28 = (min(var_28, ((((~var_9) ? (max((var_0 + var_1), (arr_18 [i_2]))) : ((max((arr_13 [i_2] [i_2] [0]), (~1)))))))));
        }
        var_29 += var_6;
    }
    var_30 = (max(var_30, var_0));
    #pragma endscop
}
