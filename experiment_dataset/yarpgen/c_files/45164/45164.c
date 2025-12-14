/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_0;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_12 = 97;
        var_13 = (max(var_13, (((((min(var_5, ((max(1202715766, 19)))))) ? (((((var_10 * (arr_0 [4] [i_0 + 1])))) ? var_9 : var_3)) : -1)))));
        var_14 -= (1 / 4294967289);
        var_15 = (min(var_15, 134217724));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (min((min((((134217723 ? 6 : 1))), var_7)), 4160749572));
        var_17 = (min(var_17, (((((arr_4 [i_1] [i_1]) || ((max(-2460337456050259120, var_3)))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 += (max(0, (((arr_10 [i_2] [i_2]) << (((arr_10 [i_2] [i_2]) - 57))))));
        var_19 = 0;
        var_20 += (arr_9 [i_2] [i_2]);
    }
    var_21 = (min((((1 & 0) | (((104643786 << (12295003297751504718 - 12295003297751504706)))))), 1));
    #pragma endscop
}
