/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((!(((131 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_15 = ((((max(47390, var_13))) | (~124)));
            var_16 = (max(var_16, ((2224 && (arr_1 [i_1 + 1])))));
            var_17 = ((-((1676754691 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            arr_6 [i_0] [13] [i_1] = ((((!(-78 + var_8))) ? var_7 : ((((var_6 ? 2565692265 : var_3)) | ((0 ? var_10 : var_3))))));
            var_18 *= (0 ? (((((arr_4 [i_1]) ? 15 : 1871180301)) >> (((~1526856325) - 2768110943)))) : (min(27376, (arr_3 [10] [i_0] [i_0]))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_19 = (max(var_19, ((~(max(((18134 ? (arr_9 [i_0]) : 3866102720)), (~3866102720)))))));
            var_20 *= ((((~(arr_8 [4] [i_2]))) == ((((max(3561171008, -1235018666471649837)))))));
        }
    }
    var_21 -= ((((((max(var_0, var_8))) + (max(var_11, var_10)))) + var_12));
    #pragma endscop
}
