/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 / (max((max(162, (-9223372036854775807 - 1))), 9223372036854775807))));
    var_12 = 9223372036854775807;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1 - 3] [i_1 + 1] [i_1] = (9223372036854775807 / var_8);
            var_13 = var_7;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = (arr_1 [i_2]);
            arr_9 [5] [i_2] [i_0 - 2] = (((((var_6 + (-9223372036854775807 - 1)))) ? (arr_0 [i_0]) : (arr_7 [i_2] [i_0 - 1])));
        }
        arr_10 [i_0] = ((~(((arr_8 [i_0 - 2]) ^ 9223372036854775807))));
        arr_11 [i_0] = (((((9223372036854775807 >> (((arr_2 [4] [i_0] [6]) - 305475468)))))) ? (arr_1 [i_0 + 2]) : (((arr_5 [4] [0]) * ((-6422 | (arr_1 [i_0 - 2]))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_15 = (((var_0 <= var_3) && (4294967295 * var_8)));
            var_16 = (((-(!65520))));
            var_17 &= -2517704165046199163;
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_18 = (arr_19 [i_3] [4] [i_3]);
            arr_20 [i_3] [i_5 - 2] [i_5 + 2] = (max(var_9, 4271669494910148647));
        }
        arr_21 [i_3] = (4740812550640012161 > 4);
        arr_22 [i_3] = (((arr_14 [i_3]) || (arr_16 [5] [i_3] [i_3])));
        var_19 |= ((-(max(22461, 9223372036854775807))));
    }
    for (int i_6 = 4; i_6 < 6;i_6 += 1)
    {
        var_20 += 5700982880045537394;
        var_21 = ((((((-9223372036854775807 - 1) ? var_0 : (arr_24 [i_6] [i_6])))) ? var_4 : -12960));
        var_22 = 9223372036854775792;
        var_23 = (min(var_23, 4294967295));
        arr_26 [i_6] [i_6 + 2] = var_5;
    }
    #pragma endscop
}
