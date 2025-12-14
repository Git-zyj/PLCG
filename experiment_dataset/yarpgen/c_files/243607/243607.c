/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = 61824;
        var_18 = (~var_13);
        var_19 -= 30002;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (min((((((58384 ? 3711 : 61821))) ? (arr_0 [i_1]) : ((max(3712, 13165))))), (((((max(3939394830969815514, 61839))) && (127 / 791042335))))));
        var_20 = 61812;
        var_21 = (min(var_21, ((max(-1741566582, (max((~0), (arr_2 [i_1] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_22 = (max(var_22, 2147483647));
        var_23 = ((((!((min((arr_6 [i_2]), 26639)))))) - (min((max(-2089039088, -631569513)), ((min(1, (arr_1 [i_2])))))));
        var_24 = 65535;
    }
    #pragma endscop
}
