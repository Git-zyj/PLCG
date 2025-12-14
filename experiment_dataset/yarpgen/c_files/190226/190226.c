/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 &= (41200 % 65);
    var_18 = ((((206 ? (((min(191, 28)))) : 228)) ^ var_3));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_19 += (((arr_1 [i_0 + 3] [i_0 + 2]) + (arr_3 [4] [i_1 - 2])));
            var_20 = ((-117 * (arr_0 [i_1 - 2] [i_1])));
            var_21 = ((1693207155192859530 ? (((arr_1 [i_0] [6]) ? 31 : -117)) : (((562902263884036373 < (arr_0 [11] [i_1 - 1]))))));
        }
        arr_4 [i_0] = ((!(((58012 - (arr_3 [i_0] [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_7 [i_2] = ((127 ? 86 : -10));
        var_22 = (max(var_22, (((+(((arr_2 [i_2]) / 3771830276030295818)))))));
        arr_8 [i_2] = max((((18446744073709551615 != (arr_5 [i_2] [i_2])))), ((16879660477136442495 ? (arr_5 [i_2] [3]) : (arr_5 [i_2] [i_2]))));
    }
    #pragma endscop
}
