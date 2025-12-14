/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_9 < -987957202) % ((72 ? 749696357 : 17883)))) >= (127 && 21991)));
    var_16 = max(var_11, ((max(1, var_5))));
    var_17 = var_6;
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [9] [7]);
        arr_5 [11] = (min(((((2304717109306851328 ? 19925 : var_5)) - ((var_4 ? 71 : (arr_0 [i_0]))))), (arr_2 [i_0])));
    }
    #pragma endscop
}
