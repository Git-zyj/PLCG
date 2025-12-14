/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (min(((((var_8 ? var_5 : var_19)) << (var_0 - 5414607201691788797))), (((!(!var_2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 5992927089074708020;
        arr_4 [i_0] [i_0] = ((((max(((-(arr_0 [7]))), 39444))) ? (((arr_0 [i_0]) ? (((-879732975 == (arr_1 [i_0])))) : (116 && var_19))) : 879732975));
        var_22 = (-18517 / 49);
        var_23 = (min((min((arr_1 [i_0]), (arr_0 [i_0]))), (!89)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (28881 <= -2147483646);
        arr_8 [4] = (((-(arr_5 [22] [22]))));
    }
    #pragma endscop
}
