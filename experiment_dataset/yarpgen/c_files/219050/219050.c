/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = -var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (max(var_21, (((((var_6 ? 1 : var_14)) != ((var_10 ? 43 : var_13)))))));
        var_22 = ((((arr_1 [i_0] [i_0]) && 0)));
        var_23 = var_18;
        var_24 = ((((var_13 ? 1 : var_12)) == -20102));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_25 = (((arr_3 [i_1] [i_1]) ? ((982767785 ? 50732 : var_11)) : (((arr_3 [i_1] [i_1]) ? 1 : (arr_2 [i_2])))));
            var_26 += (arr_3 [i_1] [1]);
            var_27 = -var_6;
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            var_28 = var_13;
            var_29 = ((-var_11 ^ ((-(arr_3 [1] [i_3 + 1])))));
            var_30 = 1;
        }
        var_31 -= (((arr_6 [i_1] [i_1] [i_1]) || var_5));
        var_32 = ((((((arr_5 [i_1] [i_1] [i_1]) ? var_15 : 24))) ? -124 : (24745 || var_8)));
        var_33 = (((((4194303 ? 77776240 : var_11))) ? var_14 : ((~(-2147483647 - 1)))));
        var_34 = (min(var_34, (((1 || (1 < 77776235))))));
    }
    #pragma endscop
}
