/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;

    for (int i_0 = 4; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (arr_1 [1]);
        var_15 = ((((((((arr_1 [13]) ? var_12 : (arr_0 [14] [i_0]))) / (!0)))) ? (((((-8465082050583927601 != 65535) != (arr_1 [i_0]))))) : (((arr_1 [i_0]) ? ((var_12 ? (arr_0 [i_0] [i_0 + 1]) : (arr_2 [i_0]))) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0 - 2] = ((~(((((var_4 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))) != var_4)))));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = 65535;
        var_17 &= ((((((((var_9 >> (var_10 - 10103946314472415266)))) ? var_10 : -8465082050583927601))) ? (min((max((arr_4 [i_1]), (arr_2 [i_1]))), ((max((arr_5 [i_1]), var_9))))) : (19 >> 19)));
    }
    #pragma endscop
}
