/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 - 3] = (arr_2 [5]);
        arr_4 [18] [i_0] = 54;
    }
    var_10 = -var_8;
    var_11 -= 202;

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [i_1]);
        arr_8 [i_1] = ((!((!((max(1, 13)))))));
        arr_9 [i_1] &= 2062239227;
        arr_10 [1] = 1;
        var_12 = (max((max(19293, 22752)), ((min((arr_5 [i_1]), ((((-127 - 1) && 1))))))));
    }
    #pragma endscop
}
