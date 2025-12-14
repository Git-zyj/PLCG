/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 16711680;
    var_15 = (max(var_15, var_13));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [1] = ((-(arr_0 [i_0 + 1] [i_0 - 2])));
        arr_3 [i_0] [i_0] = ((~((var_2 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2])))));
        var_16 = (-16711681 || -1464794058);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_7 [9] [i_0] [17] = (min(var_9, ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_6 [i_0 - 2] [7] [i_0])))) ? (arr_4 [i_1 + 1]) : (((arr_1 [i_0]) * var_7))))));
            var_17 ^= max((((arr_5 [i_0 - 2] [i_1 - 2] [i_1 - 1]) ? (((arr_4 [i_0]) ? var_4 : (arr_6 [i_0 - 2] [i_1] [i_1]))) : ((max((arr_0 [1] [1]), 265592967))))), (((((~(arr_5 [i_0] [12] [i_1 + 1])))) & (arr_1 [i_0 + 1]))));
            arr_8 [1] [19] [19] = ((15 ? (max(1, -65535)) : (min((((arr_0 [i_1] [9]) ? -62068409 : -16711681)), 18418))));
            var_18 = (max(245, ((268435448 ? (arr_1 [15]) : (arr_1 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] = ((+(((1 - 17016124386825414438) ? var_2 : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1])))));
            arr_12 [i_0] [1] = (arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 1]);
            var_19 -= ((!((min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1]))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_20 = (min(var_20, ((((((-1135519883 ? 190339057 : 6))) ? (arr_1 [i_0]) : -1)))));
            var_21 = (max(var_21, (arr_1 [i_0 - 2])));
            arr_16 [i_0] [16] [i_0 + 1] = -27592;
        }
    }
    #pragma endscop
}
