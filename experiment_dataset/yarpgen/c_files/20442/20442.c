/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((3648030877101278809 - 18446744073709551611), (max((min(-3648030877101278823, 12290422250420115831)), -6406502377917704077))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((~(1101068596 << 0)));
        arr_4 [i_0 + 1] = 3457153891035428658;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = 1;
        var_22 *= (((((max(2, -84)))) & ((((max(-855769829, 31932))) | (min(16777215, 3790573102899439098))))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2 + 1] &= max((min((max(-3457153891035428683, -3457153891035428658)), (0 || 32))), ((max(19, 65532))));
        var_23 -= (max((((~(min(11, 7469708816396243118))))), ((~(576390311306332902 & -416200290)))));
        var_24 = (min(((min(-23879, (65533 / 3457153891035428668)))), (((max(17870353762403218709, 855769838)) << ((max(1, 1)))))));
        var_25 &= ((~(((-2131686620428642355 + 9223372036854775807) << (42 - 42)))));
    }
    #pragma endscop
}
