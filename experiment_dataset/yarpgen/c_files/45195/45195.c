/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(var_13, ((var_17 / ((21273 ? 4225916251636427039 : 1))))));
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_1] |= ((var_14 ? (arr_1 [i_1 + 1] [i_0]) : (min(((-(arr_4 [i_0] [0] [i_1]))), 1))));
            arr_7 [i_1] = ((1 ? 1 : (min(58598, 3345847586))));
            var_21 = (min((max((arr_2 [i_0]), (min(12969, var_16)))), (26414 << 0)));
            var_22 = (max(var_22, (((((max(663007488, 3455182834))) || (((1 % (min(1, 284841476))))))))));
            arr_8 [i_1] = ((var_4 ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1] [i_1 + 1] [i_1])));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_23 *= (((arr_11 [16] [16] [i_2 + 1]) < ((((((arr_10 [i_0] [i_0]) + 2147483647)) >> (((arr_1 [i_0] [i_2]) - 32220)))))));
            var_24 += var_14;
            var_25 *= (max(var_18, (max(-9223372036854775807, (var_12 & var_14)))));
        }
        var_26 = var_6;
        arr_12 [i_0] = (min(((9223372036854775807 ? (((arr_4 [i_0] [i_0] [i_0]) ? 1 : -909108424)) : 51793)), (((1 < (((arr_1 [i_0] [i_0]) * -6)))))));
        var_27 = ((~(arr_0 [i_0])));
        arr_13 [i_0] = (max((((-12971 ? (max(0, 14)) : 22403))), (min((min(1, -1544641458065413134)), 3584))));
    }
    #pragma endscop
}
