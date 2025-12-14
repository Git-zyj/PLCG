/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (((((var_13 ? (var_2 >= var_3) : var_13))) ? (!var_9) : ((min(var_8, 0)))));
    var_18 = (max(var_18, ((min((!var_1), ((((var_13 ? var_11 : var_10)) != var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = var_15;
        var_20 = (max(var_20, (var_11 < var_6)));
        var_21 |= (0 & 65511);
        var_22 = var_8;

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            var_23 |= (arr_4 [i_1 + 1] [i_1] [i_1 + 1]);
            var_24 = ((!(var_12 / var_0)));
            var_25 = (!12208604137947803884);
        }
    }
    var_26 = (((var_0 == (var_8 / var_2))));
    #pragma endscop
}
