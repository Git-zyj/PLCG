/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 / ((var_17 / ((var_11 ? -31 : var_8))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_21 = (max(var_21, ((((~var_11) ? ((+((-6 ? (arr_1 [i_0] [i_0]) : -4330083203830157580)))) : (((-(arr_2 [i_0] [i_0] [i_0])))))))));
            var_22 = (min(var_22, (((arr_3 [i_1] [i_1 + 2]) ? ((((!(((var_8 ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))))))) : (((((arr_2 [i_1] [i_1] [i_0]) - var_2)) | (((-176230017 ? (arr_4 [i_0] [i_1]) : var_4)))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 = (((arr_3 [i_2] [i_0]) || (((var_2 ^ (arr_4 [i_0] [i_2]))))));
            var_24 = (((arr_6 [i_0] [i_2]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_2] [i_0])));
            var_25 = ((((~(arr_3 [i_0] [i_0])))) ? var_5 : (((15 ? 10 : var_12))));
            var_26 = ((-4330083203830157576 - (arr_6 [i_2] [i_0])));
        }
        var_27 = (((((((((arr_4 [i_0] [i_0]) <= 18009364568903168703)))) & (arr_0 [i_0]))) <= (((((var_2 >> (4294967295 - 4294967268)))) - (~812059716)))));
        arr_7 [i_0] [i_0] |= var_9;
    }
    var_28 = (min(var_28, (var_0 - var_7)));
    #pragma endscop
}
