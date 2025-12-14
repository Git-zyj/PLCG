/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((((var_13 ? 41 : 1)) < 134217727)) ? 6066538153323528638 : (((((var_3 ? var_7 : var_15)) != (134217727 == var_0))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_17 = (i_0 % 2 == zero) ? (((((arr_1 [2] [i_0]) << (((max(var_9, (arr_1 [i_0] [i_0]))) - 11657534121978841262)))))) : (((((((arr_1 [2] [i_0]) + 2147483647)) << (((((max(var_9, (arr_1 [i_0] [i_0]))) - 11657534121978841262)) - 1276888139580193690))))));
        var_18 = 45;
        arr_2 [i_0] [i_0] = ((((((6915944742548741399 <= (arr_1 [i_0] [i_0]))))) == (arr_0 [i_0])));
        var_19 &= (min(((((min(3730, 4153278829))) ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : (arr_0 [1]))), ((((var_7 != -16705) * (((arr_0 [i_0]) ? -19160 : 3242963517)))))));
    }
    #pragma endscop
}
