/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!var_11) ? ((max((77 < 174), (~1280694862)))) : (((~77) | (max(945525325, var_10))))));
        arr_3 [i_0] [10] = (min((((-1978760607635290722 ^ 2147483630) & (511 <= var_11))), (((!(((var_8 << (16241916901264151816 - 16241916901264151805)))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = ((((((max(18446744073709551615, var_0))) ? -1978760607635290727 : (2204827172445399793 & 2147483630))) < ((max(0, (max(var_2, var_1)))))));
        var_12 = ((~(((var_4 ? 18446744073709551596 : 2204827172445399793)))));
        arr_7 [i_1] = (((0 <= 95) ? (min(var_11, (min(var_9, -6919830768719216518)))) : ((((var_3 <= 65535) + (!2204827172445399794))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 ^= ((var_10 ? var_4 : 11842));
        arr_10 [i_2] [i_2] = ((var_9 ? (var_2 / -1458664940700126381) : 15));
        var_14 = (max(var_14, ((((!var_9) == var_2)))));
    }
    var_15 = (max(((min(((max(253, 15))), (~var_5)))), ((((max(177, var_1))) ? ((min(var_1, -11028))) : (max(var_4, 3363240716))))));
    #pragma endscop
}
