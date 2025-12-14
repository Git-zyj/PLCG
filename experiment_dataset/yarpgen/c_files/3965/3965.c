/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((min(((min(var_2, var_9))), (arr_0 [i_0]))))) / (((var_8 ^ var_3) ? var_8 : (((max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_13 -= 0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max((((arr_4 [i_1] [i_1]) ? -15103 : (arr_4 [i_1] [i_1]))), (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 10381))));
        var_15 += ((((((((((arr_5 [i_1]) != var_9)))) <= (((arr_3 [i_1] [i_1]) / var_5))))) >> ((((((-(arr_3 [i_1] [i_1])))) || (arr_5 [i_1]))))));
        var_16 += (((((3895746995 - (arr_4 [i_1] [i_1])))) < (((max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) - var_2))));
    }
    var_17 = (min(37721, (((~var_8) ? (min(477021446, 1)) : (((var_10 ? var_7 : var_6)))))));
    var_18 = ((!((((var_12 - -1372766261) ? ((0 ? 2211447378790895304 : 1)) : var_1)))));
    var_19 = ((var_7 ? (((var_0 ? (((477021447 ? -669400150 : -2062274011))) : (7610091079781265731 + 11)))) : (var_6 ^ var_2)));
    #pragma endscop
}
