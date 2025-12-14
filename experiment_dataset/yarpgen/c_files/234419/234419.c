/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 ? var_7 : var_7)));
    var_12 = (var_2 - 49);

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_13 += (65524 || 2377445899);
        arr_2 [i_0] = (-9223372036854775807 - 1);
        var_14 = 824838589;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [4] = ((~(((arr_3 [i_1]) ? (arr_3 [i_1]) : 1917521396))));
        arr_6 [18] = (min(-1898996445, (min((arr_3 [i_1]), 6987406434147227320))));
        var_15 = 57;
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (!var_1);
        var_16 = (arr_4 [7] [i_2]);
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_17 = ((((1917521397 == 16777215) || (arr_10 [i_3 + 2]))));
        var_18 = ((-((-(arr_12 [4] [9])))));
        arr_14 [i_3] [i_3] = (((((-(arr_13 [i_3] [1]))))) ? 1996820556 : -4278190081);
    }
    var_19 = (max(var_9, ((min(var_5, -2147483647)))));
    #pragma endscop
}
