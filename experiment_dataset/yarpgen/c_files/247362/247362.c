/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    var_19 = (max((0 == 15), ((344082179493375208 ? 1636526569 : 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [6] [i_0])))) ? (((17718978942791645745 > var_1) % (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))) : (arr_2 [i_0])));
        arr_3 [i_0] = (-(arr_0 [i_0] [i_0]));
        arr_4 [i_0] = ((((((arr_0 [i_0] [i_0]) < (arr_1 [i_0])))) & 24));
        arr_5 [i_0] = var_14;
        arr_6 [2] [i_0] = ((((!(arr_1 [i_0]))) ? ((min((arr_1 [i_0]), var_7))) : -344082179493375236));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_10 [i_1] = ((-1767505907 && (((-(arr_0 [i_1] [i_1]))))));
        var_21 = (max(var_21, ((((((min(1, -23)) + 2147483647)) >> (((((arr_1 [8]) ? (arr_1 [i_1]) : (arr_7 [i_1]))) - 97599564)))))));
    }
    var_22 = var_5;
    #pragma endscop
}
