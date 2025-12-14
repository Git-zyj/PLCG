/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (var_17 % -112);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 *= (((((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) + 2147483647)) >> (((arr_0 [i_0]) - 1860462883)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_20 ^= (((arr_2 [i_0]) % (arr_2 [i_1])));
            var_21 = (arr_0 [i_1]);
            var_22 = 1;
            var_23 = (((((arr_1 [i_1]) + (arr_3 [i_0] [22] [i_1]))) - ((-1 ? 2972763968755159276 : 49572671))));
        }
        var_24 = arr_1 [i_0];
        var_25 = (min((max((arr_1 [i_0]), (arr_0 [i_0]))), (((arr_0 [i_0]) ? (((((arr_3 [i_0] [i_0] [i_0]) < (arr_1 [i_0]))))) : ((~(arr_0 [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_6 [18] |= (min((((max((arr_5 [i_2]), (arr_5 [i_2]))))), (min((arr_2 [i_2]), ((-(arr_0 [i_2])))))));
        var_26 = (arr_1 [i_2]);
        var_27 = (min(var_27, (arr_2 [i_2])));
    }
    #pragma endscop
}
