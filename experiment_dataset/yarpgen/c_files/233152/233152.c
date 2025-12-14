/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(((var_2 ? var_8 : var_3)), ((min(var_8, var_7))))) >= (((var_9 >= var_13) ? (min(var_6, var_4)) : var_9))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((((0 ? 0 : (arr_1 [7]))) + 4457530110970271149))) ? (~var_7) : (arr_2 [i_0])));
        var_19 = ((((var_14 ? (arr_0 [i_0]) : (max(var_11, 60124)))) << (((((max(var_1, var_15)) ^ (((arr_0 [i_0]) ? (arr_0 [i_0]) : 5412)))) - 7314092675995246453))));
        arr_4 [i_0] &= (((((arr_0 [i_0]) ? ((58 % (arr_1 [i_0]))) : 180)) % (min(((((arr_2 [i_0]) % -75))), (var_2 + var_13)))));
        arr_5 [i_0] = (((((-(arr_2 [i_0])))) ? (arr_1 [i_0]) : (max((arr_2 [i_0]), (arr_1 [i_0])))));
        var_20 = (min(var_20, (1589388441 >= var_6)));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_21 = (max(var_21, (arr_7 [i_1] [i_1])));
        var_22 = ((!((!(arr_6 [i_1])))));
        var_23 = ((((((!var_12) ^ (max(var_14, 4457530110970271149))))) * (arr_7 [i_1 + 2] [i_1 - 2])));
    }
    var_24 |= min(5411, 4457530110970271149);
    var_25 *= (255 * 0);
    #pragma endscop
}
