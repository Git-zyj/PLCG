/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_5;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] = (arr_1 [i_0]);
        var_16 ^= (((((((arr_3 [i_0 + 2]) && (arr_1 [i_0 - 1]))))) & (arr_0 [i_0 - 1] [i_0 - 1])));
        var_17 ^= (((((arr_2 [i_0] [i_0 - 1]) ^ (arr_3 [i_0 + 2]))) >= (((arr_3 [i_0 + 2]) - (arr_2 [i_0] [i_0 + 2])))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 = arr_2 [i_1 + 2] [i_1];

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [5] = ((1 && (((1554652224 << ((((arr_0 [1] [i_2]) == (arr_7 [i_1] [i_1])))))))));
            var_19 *= (((arr_6 [i_1]) != ((((-22340 != 73) <= (arr_1 [i_1 - 1]))))));
            var_20 = ((var_2 && ((!(22339 && 19447)))));
        }
        var_21 *= (arr_1 [i_1 + 2]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] = (-68 ^ 4294967268);
        var_22 = ((0 / ((((arr_12 [i_3]) != 11851)))));
        arr_14 [i_3] &= (arr_12 [i_3]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_19 [12] [i_4] [i_5 + 1] = (arr_18 [15] [i_5] [i_4]);
            var_23 = (max((((arr_16 [i_4]) ? var_14 : (arr_16 [i_4]))), (((var_7 <= var_3) ? ((var_1 ? (arr_15 [i_4] [5]) : (arr_11 [i_4]))) : (arr_16 [i_4])))));
        }
        var_24 = (min(var_24, (((((((arr_12 [i_4]) && 651))) > (arr_15 [i_4] [i_4]))))));
        var_25 = (((arr_11 [i_4]) ? (~1) : ((max((arr_16 [i_4]), (arr_12 [i_4]))))));
        arr_20 [13] [i_4] = (arr_15 [13] [9]);
        var_26 = (arr_18 [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
