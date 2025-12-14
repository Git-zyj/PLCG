/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 6183221220704619367;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((1208094320 ? (-9223372036854775807 - 1) : 0));
        arr_4 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), ((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1)))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1 - 1] = (min((-19251 == 19250), (min(0, 2556006867))));
        arr_9 [i_1] = (arr_7 [i_1]);
        arr_10 [i_1] = (1442508710 <= 233865576);
    }
    var_20 = (min(2, var_18));
    #pragma endscop
}
