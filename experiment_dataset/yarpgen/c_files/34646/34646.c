/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_11, 16853106445059496173)))) ? var_11 : (min(16853106445059496173, var_6))));
    var_15 = (max(var_15, var_11));
    var_16 = (min(var_11, 1593637628650055468));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((!1593637628650055442) >> (((arr_0 [i_0]) - 32358))))) | (((((var_1 + (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((var_9 ? (arr_1 [i_0]) : var_12)))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((((~(arr_0 [i_0]))))) <= (((arr_0 [i_0]) - 28479))));
            var_18 = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = ((min(16853106445059496173, 1355875041)));
            var_20 -= ((var_6 ? ((-(min((arr_2 [i_2]), var_13)))) : (min((min(var_9, 7121475988886134131)), (arr_2 [i_0])))));
            var_21 = (!1593637628650055448);
            var_22 = (min(var_22, (arr_1 [i_0])));
            arr_8 [i_0] [i_0] = var_4;
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] = (((arr_1 [i_3]) ? (arr_9 [i_3]) : var_10));
        arr_12 [i_3] = ((~(((15934 || (!var_6))))));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_23 = ((((max((arr_1 [i_4 + 1]), ((((arr_15 [i_4 + 1]) != (arr_2 [12]))))))) || ((((((var_13 ? (arr_9 [i_4 + 1]) : (arr_2 [i_4])))) ? ((916606551446290010 ? (arr_15 [13]) : var_9)) : var_10)))));
        var_24 = (max(var_24, 0));
        var_25 = (max(var_25, ((min((arr_15 [i_4 + 1]), (~var_11))))));
        arr_16 [i_4] |= ((((!0) % var_3)));
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = 1;
        var_26 -= ((((((var_4 >> 1) ? 0 : (2084407686892230417 || var_7)))) ? ((~(arr_2 [11]))) : ((((arr_17 [i_5]) ? -1 : 22)))));
    }
    #pragma endscop
}
