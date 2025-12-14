/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_7 % (((~13210101950421466229) ? (~var_0) : (0 != var_4)))));
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((+(((arr_0 [i_0]) ? ((2006985389602206858 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : var_9))));
        var_14 = (((((var_5 && 1) ? ((((var_3 > (arr_0 [i_0]))))) : ((7739272098772658801 ? 4051240550 : 0))))) && (((((min(var_8, (arr_1 [i_0])))) ? (max((arr_0 [i_0]), 10707471974936892814)) : 65535))));
        var_15 += (((~761339937669349607) ^ (arr_0 [2])));
    }
    #pragma endscop
}
