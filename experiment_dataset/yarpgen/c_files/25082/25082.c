/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = 297431323;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 ^= arr_0 [i_0];
        arr_3 [i_0 - 1] [i_0 + 3] = ((~((~(var_0 & 1)))));
        var_13 &= ((var_8 & (((((var_5 > (arr_1 [13]))) ? (arr_0 [i_0]) : ((min(1, var_0))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((var_4 | (arr_6 [21]))));
        var_14 = ((((((arr_6 [i_1]) & 1)))) ? (~0) : (var_4 | 1));
        arr_8 [i_1] [i_1] = ((-297431322 ? (-1461054017 - -var_6) : (min(((((arr_4 [6]) == 1))), 297431314))));
        arr_9 [i_1] [i_1] = max((min(((-(arr_6 [i_1]))), (arr_4 [i_1]))), var_5);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_15 = var_7;
                var_16 *= (((((arr_15 [i_2]) || (arr_15 [i_2]))) && ((!(arr_15 [i_2])))));
            }
        }
    }
    var_17 = (max((((2147483647 - 1) - ((1 ? -3643561890781288319 : 297431324)))), ((((1 ? -75 : 8035))))));
    #pragma endscop
}
