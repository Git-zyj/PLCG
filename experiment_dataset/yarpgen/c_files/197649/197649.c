/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 + (max(32765, -8))));
    var_21 = (var_14 < 12);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_22 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 3]) : var_0));
        var_23 = ((var_14 || (~-1793)));
        var_24 = var_7;
        var_25 = var_15;
        var_26 = (min(var_26, ((!(((-7255948827801561290 ? 7255948827801561292 : 7255948827801561290)))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_27 -= ((((((-84 ? 9177302621440982920 : -22412)))) ? ((((arr_3 [6]) <= (arr_3 [2])))) : ((((var_0 != var_0) || ((min((arr_3 [2]), var_12))))))));
        var_28 = (min(var_28, (((10380711067256969624 << (((!(((7995121611341846086 ? 1793 : (arr_4 [0] [0]))))))))))));
        var_29 ^= 0;
    }
    #pragma endscop
}
