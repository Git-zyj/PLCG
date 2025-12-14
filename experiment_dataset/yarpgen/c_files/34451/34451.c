/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = (((((((min(var_0, 1485059224))) ? ((1485059224 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))) ? ((+((min((arr_1 [i_0]), (arr_1 [i_0])))))) : ((~((((arr_0 [i_0] [6]) <= -45)))))));
        var_12 += ((-((+(((arr_0 [i_0] [i_0]) - var_5))))));
        arr_2 [i_0] = (((max((!-1373646378), (min(33554431, -1373646386)))) == ((min((((arr_0 [i_0] [0]) ? 7132 : (arr_1 [i_0]))), (!0))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((min((-127 - 1), (max(5797, var_3)))));
        var_13 = (((((arr_1 [i_1]) ? (arr_5 [2]) : 424233206))) | (((((arr_1 [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1] [6]))) % 4521775091546092151)));
        var_14 += ((((((((arr_4 [i_1]) * 0))) ? (arr_5 [4]) : ((max((arr_4 [i_1]), -1018446367))))) << ((((var_5 | ((((arr_4 [i_1]) ? (arr_1 [i_1]) : (arr_3 [0] [2])))))) + 1064030134))));
    }
    var_15 = (max(var_15, ((min(((((var_1 == var_8) || (5292126376340660593 | var_6)))), ((var_3 - (((21199 ? var_6 : var_7))))))))));
    var_16 |= ((((((var_10 ^ var_6) | var_8))) | (((((var_2 ? 21206 : var_8))) & (75 | var_3)))));

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((803911384 | var_4) * (min(0, 13924968982163459444)));
        var_17 = (max((((((max(var_8, 15201))) && (((1 ? var_0 : 1373646374)))))), -var_0));
        var_18 = (~(!-424233206));
    }
    #pragma endscop
}
