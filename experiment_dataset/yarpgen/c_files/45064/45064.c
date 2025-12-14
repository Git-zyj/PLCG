/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? var_7 : var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 &= (arr_1 [6] [i_0]);
        arr_2 [i_0] [4] = 1407062168659763686;
        var_16 = (max(var_16, ((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = ((!(((((max((arr_1 [10] [i_1]), (arr_4 [i_1])))) ? (~-1407062168659763686) : 2821719799)))));
        var_18 ^= (min(-938584374, (arr_4 [8])));
        var_19 = (min(var_19, (((((!(arr_1 [i_1] [i_1]))) ? ((~(-1407062168659763687 % 1))) : (var_4 != var_9))))));
    }
    var_20 = 71;
    var_21 = ((((536870912 ? 11915 : var_10)) % ((max(-1407062168659763708, (((3647723325709842480 ? var_6 : var_3))))))));
    #pragma endscop
}
