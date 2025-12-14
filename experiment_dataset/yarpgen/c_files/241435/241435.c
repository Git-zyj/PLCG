/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;
    var_12 = 0;
    var_13 ^= ((~(((((var_2 ? var_2 : var_10)) == (min(var_5, var_10)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 |= min(((11543869735048798064 ? (min((arr_0 [i_0] [i_0]), 11543869735048798085)) : (~6902874338660753550))), ((((arr_3 [i_0]) ? ((var_6 ? (arr_2 [i_0]) : (arr_3 [i_0]))) : 1))));
        var_15 -= max(var_0, var_9);
        var_16 = (max(0, 0));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_5 [12])));
        var_18 = (min(var_18, (((((arr_5 [4]) * (arr_2 [i_1]))) << ((((var_5 << (((arr_0 [5] [i_1]) - 10501896179369127873)))) - 27262975))))));
        var_19 = 28733;
    }
    var_20 = (6929351198857179321 && 6902874338660753551);
    #pragma endscop
}
