/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 += ((((!(arr_0 [i_0 - 1] [i_0 - 1]))) ? (((max(var_6, 0)))) : ((124 ? ((~(arr_0 [i_0] [i_0]))) : (3601 == var_6)))));
        var_12 -= (max(((((arr_0 [i_0] [i_0 + 1]) ? (arr_0 [4] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 1])))), (arr_1 [i_0] [i_0 + 1])));
    }
    var_13 = ((((max((!var_8), var_3))) ? ((5964299544083654730 ? (((max((-32767 - 1), var_4)))) : ((var_2 ? var_7 : var_8)))) : ((((2104712296752719954 <= 20476) >> (var_7 - 7513344282431178881))))));
    #pragma endscop
}
