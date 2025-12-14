/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_16 = var_9;
        arr_2 [i_0] [i_0] = (((min((arr_1 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = -1148018839;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_17 = 1148018823;
        arr_6 [i_1] [i_1 + 1] = (max(3588928365721101325, -8192));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = ((26099186 ? 1 : (arr_4 [i_2] [i_2])));
        arr_10 [i_2] = (((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : -131072));
    }
    var_18 = (min(var_18, (var_0 >= var_13)));
    var_19 = -8193;
    var_20 = ((((~(max(1, 2229711205061999742)))) >= 1148018839));
    #pragma endscop
}
