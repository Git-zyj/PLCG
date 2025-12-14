/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_12 = (arr_4 [i_1]);
        arr_5 [i_1] = ((var_0 - ((var_3 - ((~(arr_4 [i_1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = (arr_1 [i_1] [i_2]);
            arr_8 [4] [i_2] &= (((((arr_6 [i_1] [i_1] [i_1]) ? 8388607 : -7004080240757519519))) ? (arr_4 [i_2]) : (arr_3 [i_1]));
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            var_14 ^= (((((((min(36028797018963967, 1))) ? (max(14674929458277968591, 14619979636325729889)) : ((((arr_10 [i_1] [i_1] [1]) ? (arr_1 [i_1] [i_1]) : 1)))))) ? (arr_1 [i_1] [i_3]) : (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
            arr_11 [i_1] = -38;
            var_15 = ((((min((arr_9 [i_1] [i_1]), var_0))) ? (17672 & 20) : (~576179277326712832)));
            var_16 = (var_0 * 3);
            arr_12 [10] [i_1] [10] |= (((892514394520620242 / 242) ? 1 : 6804899077560820927));
        }
        var_17 = var_5;
        arr_13 [i_1] [i_1] = ((((min(((14524027177352096513 ? 0 : (arr_3 [i_1]))), (arr_0 [i_1])))) ? (max((((249 ? 0 : -221937714))), (arr_4 [i_1]))) : (((-(arr_0 [i_1]))))));
    }
    #pragma endscop
}
