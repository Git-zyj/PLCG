/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? var_16 : (!38921)));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_20 = var_11;
        var_21 = (max(314617345, 40753));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_22 = ((-((~((var_7 ? (arr_3 [i_0] [i_1]) : var_17))))));
            var_23 = ((var_5 ? var_13 : 120));
            var_24 = (arr_0 [i_0]);
            var_25 = ((((max((max(var_11, var_14)), var_17))) ? var_8 : ((((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [i_0 + 1]) : (arr_0 [i_0 - 2]))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_26 = (40753 != 12501);
            var_27 = var_8;
            var_28 = max((((arr_3 [i_0 - 1] [i_0 - 4]) ? var_0 : (arr_4 [i_0 + 1]))), ((min(((min(64736, 24783))), -var_11))));
        }
        var_29 = (!var_3);
    }
    var_30 = var_17;
    var_31 = var_16;
    #pragma endscop
}
