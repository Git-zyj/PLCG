/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_1 > (55547 - var_1))) ? var_2 : ((min(var_3, var_2)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (((14495 || var_4) ? ((max(40856, 51015))) : -311737264));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_12 = var_5;
            arr_6 [i_0] [i_1] [i_1] = 14495;
            var_13 = ((min((min(var_5, (arr_5 [i_0] [i_0] [i_1])), ((min((arr_2 [i_0] [9]), (arr_1 [i_0] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_2] = (14495 - 2810431787);
            var_14 -= var_8;
            var_15 = ((((min((arr_2 [i_2] [i_0]), (arr_0 [i_2])))) ? ((var_2 ? (arr_0 [i_0]) : (!var_8))) : var_6));
            var_16 = (max(var_16, 51024));
            var_17 = max((((!(arr_8 [i_0])))), 54578);
        }
        arr_10 [i_0] = (14495 / var_5);
    }
    var_18 = ((+((51018 ? (51015 + 51030) : -8941))));
    #pragma endscop
}
