/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min((!var_9), var_1)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = ((-(arr_1 [i_0] [i_0])));
        var_13 = ((4571601651192895622 ? 5772082877550630983 : 1006632960));
        var_14 = ((12674661196158920632 && (arr_0 [i_0] [i_0])));
        var_15 -= var_7;
        var_16 = (((max(((((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0])))), var_9)) * ((((!(arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (+(((11671903571907854342 != 8191) ? ((99 ? (arr_2 [i_1]) : 5772082877550630976)) : (arr_3 [i_1] [i_1]))));
        arr_7 [i_1] = ((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : var_5)));
    }
    var_17 = (max(var_17, var_4));
    var_18 = (min(var_18, ((((var_6 > (-121 - var_5)))))));
    #pragma endscop
}
