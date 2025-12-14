/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((11292875008060238958 ? 11292875008060238984 : 0))) ? var_11 : ((((arr_1 [i_0 - 1]) == (arr_1 [i_0 - 2]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 = ((~((65535 ? 7153869065649312635 : 96))));
            var_20 = (min(var_20, (((((((~var_4) ^ (((arr_0 [i_0]) ? var_4 : (arr_0 [i_0])))))) ? (arr_3 [i_1] [14]) : 7995)))));
        }
        var_21 *= min(((var_5 | (((arr_1 [i_0]) ? 11292875008060238958 : (arr_0 [i_0]))))), (min(12881562348388057635, ((min((arr_1 [i_0]), 2147483644))))));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2 + 1] = ((-((-(arr_7 [18] [i_2 - 1])))));
        arr_10 [1] [i_2 - 2] = ((~(min((arr_8 [i_2] [i_2]), ((0 ? 57541 : (arr_7 [i_2] [i_2])))))));
    }
    var_22 = ((var_13 ? ((((max(0, 35282))) ? 12556 : ((var_4 ? var_9 : 13543844899593382847)))) : (((min((!var_11), var_7))))));
    #pragma endscop
}
