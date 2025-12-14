/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((0 != -1312943241), (~1312943241))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (max(1, ((-1 ? ((29691 ? -1 : -1)) : 1))));
        var_19 = (((0 ? -449930491 : 41)));
        var_20 = 1;
        var_21 ^= max(((-67 ? 221 : 0)), ((max((!-905486791945860208), -1))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1 + 1] [i_1] = (arr_3 [i_1 + 2]);
        var_22 += ((-(~var_12)));
        arr_6 [i_1] = (~-40);
    }
    #pragma endscop
}
