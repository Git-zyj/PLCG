/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = 51;
        arr_3 [i_0] [i_0] = ((min((arr_2 [i_0]), 17311591299994166149)));
        var_21 = (min((((((var_0 / (arr_0 [0]))) < (arr_2 [i_0])))), ((((min((arr_2 [i_0]), (arr_1 [i_0])))) ? (((((-127 - 1) > (-32767 - 1))))) : ((2927675747246241670 ? (arr_2 [i_0]) : (arr_0 [i_0])))))));
    }
    var_22 = var_14;
    #pragma endscop
}
