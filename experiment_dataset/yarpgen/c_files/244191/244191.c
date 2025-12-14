/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 > (min((((!(-9223372036854775807 - 1)))), ((126 ? 13447556344587159052 : 4294967291))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+((((min((arr_0 [i_0] [i_0]), var_11)) < -772911878)))));
        arr_3 [i_0] = ((min((2994135600 > 4999187729122392564), (max((arr_0 [i_0] [i_0]), 772911879)))));
        var_20 = ((+(((!536346624) ? (max(4294967295, -772911878)) : 4999187729122392564))));
    }
    #pragma endscop
}
