/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (max(((max(var_11, (arr_1 [i_0])))), (max((arr_0 [i_0]), var_2))));
        var_13 = (max((max(-125, 12339)), ((max(57, (arr_0 [i_0]))))));
        arr_3 [i_0] = max((max(var_5, var_10)), ((min((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (max(((min((max((arr_4 [i_1]), var_11)), (max((arr_1 [i_1]), 12326))))), (max((arr_1 [i_1]), (min(var_4, (arr_4 [i_1])))))));
        var_15 = (min((min((max(9151314442816847872, 12346)), var_5)), (max(((min((arr_4 [i_1]), (arr_4 [i_1])))), 18446744073709551615))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (max(-12339, -599197552));
        arr_9 [i_2] [i_2] = (max((max((arr_6 [i_2] [i_2]), 0)), ((max((arr_6 [i_2] [i_2]), var_2)))));
    }
    var_16 ^= var_6;
    #pragma endscop
}
