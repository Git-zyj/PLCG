/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((187 > ((var_3 ? var_9 : var_7)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 48;
        var_14 = (((arr_1 [i_0]) - (!var_4)));
        var_15 = (min(var_15, 154));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_16 ^= var_1;
        var_17 = 200;
        var_18 = (min(var_18, ((((arr_5 [i_1 + 2]) ? (!45) : ((158 ? 154 : (arr_4 [i_1] [i_1]))))))));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_19 = var_1;
        var_20 = ((111 >> (((~154) + 171))));
        arr_8 [i_2] = min((!139), 68);
        arr_9 [i_2] = (((((91 >= (67 | 57)))) * ((~(139 <= 101)))));
        arr_10 [i_2] = 131;
    }
    #pragma endscop
}
