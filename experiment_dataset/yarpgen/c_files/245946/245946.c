/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_15 -= (max((arr_1 [i_0]), var_5));
        var_16 = (max(var_16, ((((((((-3795435468649837267 ? var_11 : var_1))) ? (!var_2) : (-3795435468649837268 / var_5)))) ? -6 : (((var_14 << (((arr_1 [i_0]) - 694484980)))))))));
        arr_2 [i_0] [16] = arr_1 [18];
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_17 = (max(var_17, (((((((arr_4 [i_1 + 1]) ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 + 1])))) ? ((((arr_4 [i_1 + 1]) + (arr_4 [i_1 + 2])))) : var_12)))));
        arr_5 [i_1 + 2] [i_1] = (max(2, 181));
        var_18 += ((((min(16, ((var_6 ? 3739817322 : 25775))))) <= (max((((1006690733 ? 3221532286 : var_10))), (((arr_4 [i_1]) ? -3696749104463692662 : (arr_3 [i_1])))))));
        arr_6 [i_1] = (max((((((min(688696093, 1487829080))) ? -12 : ((1062872636 << (3288276572 - 3288276561)))))), 12863030189367089818));
    }
    var_19 = var_9;
    var_20 = ((max(var_4, var_4)));
    var_21 = (((((~(var_11 | var_13)))) ? ((1 % ((3072 ? 649654794381004514 : -21)))) : (((var_9 ? var_3 : (((min(var_5, 104)))))))));
    #pragma endscop
}
