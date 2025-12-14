/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = ((+(((~var_12) ? var_13 : var_0))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((((var_3 != var_3) || (var_10 & var_8))) ? (((var_17 + var_15) ? var_11 : var_2)) : (var_10 ^ var_1)));
        var_22 = var_10;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_23 = (min(var_23, (((((var_8 ? var_9 : var_16))) ? (var_16 + var_9) : (var_6 * var_9)))));
            arr_6 [i_0] [i_1] = (((var_12 ^ -var_15) + var_19));
            arr_7 [11] [i_1] = ((var_4 ? ((~(var_1 ^ var_13))) : 2006090286));
            var_24 |= ((-((var_12 ? (var_6 & var_12) : (!var_13)))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 = (max(var_25, (((~(!var_12))))));
            arr_12 [i_0] [i_0] [i_2] = ((var_8 - (((var_7 * var_2) ? var_19 : var_19))));
        }
        arr_13 [i_0] [i_0] |= ((~((var_8 ? var_11 : var_11))));
    }
    var_26 |= ((var_8 ? var_1 : (((((var_18 ? var_16 : var_12))) ? (var_3 / var_5) : (var_19 + var_5)))));
    #pragma endscop
}
