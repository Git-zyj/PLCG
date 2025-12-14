/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_10, ((var_11 ? 243 : var_4))))) ? (((((var_5 ? var_10 : 4194303))) ? (((var_6 ? var_9 : var_8))) : (var_6 & 25))) : var_11));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((~((((((!(arr_0 [i_0] [i_0])))) >= 136)))));
        var_14 ^= ((-((((max((arr_0 [4] [i_0]), (arr_1 [i_0])))) << ((((var_10 ? 1421154650 : 8188)) - 8171))))));
        var_15 = ((~((-4194303 ^ (((max(var_11, (arr_1 [i_0])))))))));
        arr_3 [i_0] = (((((((arr_1 [i_0]) >= ((((arr_1 [i_0]) == (arr_1 [i_0])))))))) != var_7));
        var_16 = ((1 ? 1 : 4194303));
    }
    #pragma endscop
}
