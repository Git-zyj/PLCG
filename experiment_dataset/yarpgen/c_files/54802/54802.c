/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(30613, (max(2081317609, -7721475342829499306))))) ? ((~(max(498159331, var_1)))) : var_10);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_16 = -2048037078553067325;
        arr_2 [0] = (((9870 & 3247271381) ? (((~(arr_1 [i_0 + 2])))) : var_9));
        var_17 += max(var_11, (max((arr_0 [i_0]), ((((arr_0 [15]) && (arr_1 [i_0])))))));
        var_18 = (max(var_18, (min(-422165623, ((max((arr_1 [10]), (arr_0 [i_0]))))))));
        arr_3 [i_0] [i_0 + 1] &= ((arr_0 [i_0 + 2]) & (((~(((1152851135862669312 && (arr_0 [i_0]))))))));
    }
    var_19 = (min(var_19, ((((!var_13) ? (((255 ? (min(var_4, 16383)) : var_10))) : (((9223372036854775807 + -1) - (((9223372036854775807 ? (-32767 - 1) : 2029795681))))))))));
    var_20 = var_1;
    #pragma endscop
}
