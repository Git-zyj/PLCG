/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(((1902329819 ? var_3 : 1)), (1122413283101800141 <= 64414)));
    var_12 &= (277695205485002086 ? 18014398509481983 : 1);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_13 = ((-14624 | ((-1685827840 ? 1093504582 : -981066922))));
        var_14 &= ((((17249877108648908609 ? (arr_0 [i_0]) : (arr_1 [i_0] [22]))) - var_10));
    }
    var_15 = (max((var_7 - var_3), (min(((var_8 ? var_4 : -1469906652032574307)), var_5))));
    #pragma endscop
}
