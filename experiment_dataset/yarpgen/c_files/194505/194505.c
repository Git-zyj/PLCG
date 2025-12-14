/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(var_13, ((((18446744073709551615 - 232) ? ((((arr_2 [i_0]) ^ var_4))) : (((var_7 + 9223372036854775807) >> (var_1 - 947204951))))))));
        arr_4 [i_0] [2] = ((!((((arr_1 [i_0] [3]) ? 244 : 23)))));
        var_14 |= (((~11301) ? (arr_3 [i_0]) : (arr_1 [i_0] [9])));
        arr_5 [i_0] [i_0] = (~var_3);
    }
    var_15 = (((32767 & var_9) % var_4));
    var_16 += (min((max((((var_5 ? var_5 : var_9))), (max(var_12, var_1)))), ((var_3 + (max(var_9, var_1))))));
    #pragma endscop
}
