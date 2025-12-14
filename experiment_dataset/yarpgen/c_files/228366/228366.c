/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = ((((max(((var_12 ? 35 : 1)), ((max((arr_1 [i_0]), 145)))))) ? 333697700 : 126));
        arr_2 [i_0 - 1] = (min((min(4294967272, 13039859364466267063)), ((((((-19298 ? 1 : 191))) ? (arr_0 [i_0] [i_0 - 1]) : (max(41, 1895298005)))))));
        arr_3 [i_0] = (((min((1 - 16775), (min((-9223372036854775807 - 1), 107)))) / (arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (arr_4 [i_1]);
        var_16 = ((max((var_2 <= var_3), 8346296967977846436)));
        arr_6 [i_1] [i_1] = ((((var_0 ^ 333697721) >= var_8)) ? (16398058945235282686 & -69) : 1);
        var_17 = ((-(25 >= 56)));
        var_18 = ((((((max((arr_5 [i_1]), -3200442138460571587))) ? 9223372036854775807 : (((19298 ? var_3 : var_8))))) >= (!7209393811985428014)));
    }
    #pragma endscop
}
