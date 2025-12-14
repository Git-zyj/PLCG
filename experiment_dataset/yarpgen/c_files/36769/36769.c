/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = ((!(((var_4 ? var_16 : var_4)))));
        var_20 = ((-1141472620 > ((3960 ? var_9 : 3480912003311456224))));
        arr_2 [i_0] = (((arr_1 [i_0]) <= var_16));
        var_21 = (((((arr_1 [i_0]) << (34447 - 34433))) - (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (774787286 <= -6520154219716519594);
        var_22 = ((((max((arr_4 [i_1]), var_6))) ? (((arr_4 [i_1]) ? 1411497730681227293 : 3933233774)) : (arr_3 [i_1])));
        arr_7 [i_1] = ((!(!17035246343028324299)));
        var_23 = ((((((arr_4 [i_1]) | (arr_4 [i_1])))) ? (max(var_12, (arr_4 [i_1]))) : (arr_4 [i_1])));
        arr_8 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((var_9 ? (1411497730681227280 - var_13) : ((-var_3 ? -6633059014749594952 : (((((arr_1 [i_2]) <= 237))))))));
        var_24 = (!var_3);
        var_25 = ((var_17 ? ((((((min(var_15, (arr_3 [i_2])))) || (((1411497730681227296 ? 127 : var_12))))))) : (arr_10 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_26 = ((var_15 / (var_6 + -var_4)));
        var_27 = ((((min(var_11, 7353356988151046710))) || (((13256132487852575459 ? 1411497730681227337 : 17035246343028324317)))));
    }
    var_28 = (max(-14419, (((var_11 ? var_17 : var_5)))));
    var_29 = ((!((min(((((-533738647 + 2147483647) << (var_3 - 5449980120538992296)))), 233)))));
    #pragma endscop
}
