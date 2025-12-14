/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((var_0 ? 580142083 : (-2147483647 - 1))), 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (((~32763402) ? (min(1098, 1780650040)) : var_11));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_22 = (max(var_22, ((((!(~-18714))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : 809679718))));
            var_23 = ((-(max((max(32767, 4048664635)), var_8))));
        }
    }
    #pragma endscop
}
