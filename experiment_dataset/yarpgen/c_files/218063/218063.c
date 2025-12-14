/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 ^= ((~(~var_11)));
        var_17 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_14));
        arr_3 [i_0] = var_3;
        var_18 ^= ((~(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = (!var_3);
        var_20 = ((+(min(((((arr_5 [i_1]) >= (arr_2 [3])))), (~2147483647)))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((~(max(-2156684925325630762, 1))));
            arr_8 [i_1] [i_1] = (arr_0 [i_2] [i_1]);
            var_22 = (min(var_22, ((max(((((arr_1 [i_1]) || -var_5))), ((-(arr_0 [i_1] [i_1]))))))));
            arr_9 [i_1] [i_1] [i_1] = ((~((-(~var_0)))));
            arr_10 [i_1] = ((+((((arr_6 [i_1]) >= (((arr_0 [i_2] [15]) ? (arr_7 [i_1]) : 2147483647)))))));
        }
    }
    var_23 = ((~(((((max(var_4, 2147483647))) || (~-2147483647))))));
    #pragma endscop
}
