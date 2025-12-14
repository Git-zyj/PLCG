/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [22] = -12;
        var_20 += ((((arr_0 [i_0] [i_0]) ? 157 : 227)));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [15] = -40;
        var_21 = (min(var_21, ((max(((((arr_1 [i_1 + 1]) || -1))), (max((~2), (((arr_4 [10]) ? 1 : var_17)))))))));
        var_22 = (arr_3 [i_1 + 1]);
        var_23 *= (((((min(1, var_2)) <= (((27843 ? (arr_3 [16]) : 248))))) ? (((!((min(var_13, 1)))))) : var_10));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] [i_2] &= (max(2842232163, (((254 ? 8 : 1)))));
        arr_10 [i_2] &= ((((((arr_4 [i_2 - 2]) ? 8 : 0))) && (((8 ? (arr_4 [i_2 - 2]) : var_7)))));
        arr_11 [i_2] = ((+(((((((arr_3 [22]) ? 10748313905829229122 : 230))) && (29 / 6446573568858307575))))));
        var_24 += -8;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_25 *= (min((arr_0 [i_3] [20]), 21));
            var_26 = (max(var_26, ((max((min((arr_14 [i_3]), -1076010216)), ((~(arr_15 [i_3] [i_4]))))))));
        }
        arr_19 [i_3] [i_3] = ((+(((~-6446573568858307574) ? (((var_9 / (arr_15 [i_3] [i_3])))) : ((3 ? 452571663759733814 : -116))))));
        var_27 = (min((arr_17 [i_3] [i_3]), (arr_15 [i_3] [i_3])));
    }
    var_28 |= ((255 ? var_5 : ((max(var_10, (max(var_19, -55)))))));
    #pragma endscop
}
