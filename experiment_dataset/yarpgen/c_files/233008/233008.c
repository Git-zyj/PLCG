/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0] [16] [i_1] = ((var_10 | (arr_1 [i_1])));
            var_14 = (arr_2 [i_0]);
            arr_5 [i_0] = (arr_2 [16]);
            arr_6 [i_0] [i_0] [i_1] = var_11;

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_15 = var_12;
                arr_9 [i_2 - 2] [i_0] = var_7;
                var_16 = (max(var_16, var_4));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_0] = var_13;
                var_17 = (arr_12 [i_0] [i_0] [i_3]);
            }
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_0] [13] = var_6;
            var_18 = (var_3 | -1191535260);
            var_19 = (max(var_19, var_9));
        }
        arr_18 [10] = 1436;
        arr_19 [i_0] = 252;
        var_20 = (arr_2 [2]);
        var_21 -= var_10;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_22 = var_9;
        var_23 = var_7;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (arr_8 [i_6] [i_6] [i_6])));
        var_25 = (min(var_25, ((((arr_15 [i_6] [i_6] [i_6]) % (arr_15 [i_6] [7] [i_6]))))));
        var_26 = (min(var_26, ((((((var_6 ? var_3 : (arr_21 [i_6])))) || (((215370183 ? (-1625010004 & -1625010004) : var_13))))))));
        var_27 ^= (((((var_7 & ((var_1 + (arr_8 [i_6] [i_6] [i_6])))))) ? var_4 : (((arr_23 [i_6] [2]) | var_4))));
    }
    var_28 = (max(var_28, var_13));
    var_29 &= (var_8 < -1026);
    #pragma endscop
}
