/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((max(var_10, var_1)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((((0 ? ((min(1, 1))) : -2))) ? ((max(0, (arr_1 [i_0 + 1] [i_0 + 1])))) : -2));
        var_12 = ((((((arr_1 [i_0 - 1] [i_0 + 1]) ? 5588 : (arr_3 [i_0 - 1] [1])))) ? ((max((arr_3 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 1])))) : -4026));
        var_13 ^= -15;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1 - 2] = (max((~1), ((min((arr_5 [5]), -35)))));
        var_14 = (((arr_5 [i_1]) ? (((arr_6 [i_1 - 2]) ? ((var_7 ? (arr_6 [i_1]) : (arr_6 [i_1 - 1]))) : (arr_5 [i_1 - 2]))) : ((~((max(0, (arr_6 [i_1 + 1]))))))));
    }
    var_15 = (max(var_15, (((((max(var_5, -35))) ? ((-((max(var_5, var_5))))) : (((var_5 & 1) ? ((min(var_8, 1))) : 9)))))));
    var_16 = ((var_10 * var_3) <= var_1);
    #pragma endscop
}
