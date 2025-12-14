/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= -var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (((-(((((var_12 - (arr_0 [i_0]))) >= 4294967295))))))));
        var_16 = (((arr_0 [i_0]) - 2638362839));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 += var_2;
        var_18 = ((((arr_3 [i_1]) ? (arr_3 [i_1]) : 1656604457)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_19 = ((arr_5 [i_2]) / (((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_6 [i_2]))));
        var_20 = ((max((arr_6 [i_2]), ((var_11 ? (arr_5 [i_2]) : 1656604454)))));
        var_21 += (-5909354219413153459 / 2638362831);
        var_22 = (max(var_22, 11145));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] [i_3] = (((((var_9 << (((arr_8 [i_3]) - 4261122354)))) << (-1656604440 - 2638362828))));
        var_23 = (max(((((-17161 ? (arr_8 [i_3]) : var_8)) % (arr_5 [i_3]))), ((((arr_8 [i_3]) ? ((var_6 ? 26145 : var_7)) : (((-(arr_5 [i_3])))))))));
        arr_10 [i_3] [i_3] = (min((((arr_5 [i_3]) ? 2939935756166602171 : (arr_7 [i_3]))), var_12));
        var_24 = (min(var_24, 2638362825));
    }
    var_25 = (min(var_25, ((min(((-((-1318235197 ? 1656604457 : 576460202547609600)))), (var_12 != var_12))))));
    #pragma endscop
}
