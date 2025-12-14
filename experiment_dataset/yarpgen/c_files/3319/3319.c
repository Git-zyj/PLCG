/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((((((arr_1 [i_0]) ^ var_12))) >= var_1)) ? var_3 : (((((var_11 & (arr_1 [13])))) ? (arr_0 [i_0]) : ((255 ? -3550741586863433117 : (arr_2 [i_0] [i_0]))))));
        var_18 = (176818074 || 32746);
        arr_3 [i_0] = ((175 ? var_16 : (524287 < 248)));
    }
    var_19 = var_4;

    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_20 = (min(var_20, ((((arr_5 [i_1]) ? 255 : var_4)))));
        var_21 = (((arr_4 [i_1 + 2]) ? (arr_4 [i_1 - 1]) : 253));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (-1 ? 3 : -32754);
        arr_10 [i_2] = ((223 ? (0 >= 234) : (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_22 = var_5;
        var_23 = 21;
    }
    #pragma endscop
}
