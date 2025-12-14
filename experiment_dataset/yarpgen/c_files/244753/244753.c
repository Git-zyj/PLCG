/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((52 ? 2 : 251)) + (var_7 + var_10))) == ((((var_10 ? var_9 : var_10)) | (~var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += (((!(arr_0 [i_0]))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((~(arr_1 [i_0] [i_1])));
            arr_6 [i_1] [i_1] = ((225 ? 212 : 189));
            var_15 = (((arr_5 [i_1]) ? (arr_2 [i_0]) : var_7));
        }
        var_16 = (max(var_16, ((((((((arr_1 [i_0] [i_0]) & (arr_5 [14]))))) == ((((var_0 | (arr_2 [i_0]))))))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_17 = ((~((var_5 ? (!67) : (((!(arr_4 [i_2]))))))));
        var_18 = (!(((~((~(arr_2 [i_2])))))));
        arr_10 [i_2] = ((254 ? (var_4 - var_9) : var_4));
    }
    #pragma endscop
}
