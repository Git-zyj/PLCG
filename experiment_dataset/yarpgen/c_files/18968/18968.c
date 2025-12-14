/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 &= ((!((min((min(-162101583, 0)), var_10)))));
            var_15 = (((((105 ? -3868357 : ((3868357 ? -954718418 : 4249721260208784617))))) ? (arr_2 [i_0] [i_1]) : (~var_9)));
            var_16 = (min(((-(arr_5 [i_0] [12] [i_1]))), (((0 + 0) ? ((-1863470129 ? (arr_1 [i_0]) : (arr_3 [18] [i_1] [18]))) : (arr_3 [i_0] [i_1] [i_0])))));
            arr_6 [8] = (min((min((max((arr_3 [i_1] [4] [i_0]), (arr_4 [i_0]))), (arr_2 [i_0] [i_1]))), ((((1945684497 - -125) << (((((arr_5 [i_0] [i_0] [i_0]) + 1776851720)) - 6)))))));
        }
        var_17 = ((max((min((arr_0 [0]), -1243240296)), -1243240296)));
        arr_7 [i_0] = ((-((~((var_6 >> (((arr_3 [i_0] [i_0] [4]) - 14786))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 = ((var_4 ? 2483653705 : var_10));
        var_19 = 8244963926070793743;
        var_20 = (((((var_8 ? -1945684498 : (arr_9 [i_2])))) ? (arr_3 [i_2] [i_2] [i_2]) : (((arr_9 [i_2]) ? 65535 : (arr_0 [1])))));
        var_21 = (arr_0 [i_2]);
    }
    var_22 = ((((((-364640920 + 2147483647) << ((((((-1243240296 ? var_3 : 4391265028103304411)) + 1748855349)) - 16))))) ? ((((!(((1 ? 0 : 47952))))))) : ((3627811187 ? var_9 : ((var_2 << (var_7 - 2792952903)))))));
    #pragma endscop
}
