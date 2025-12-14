/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = var_13;
        arr_3 [9] = -957895674;
        arr_4 [i_0] = ((+((2147483647 & (((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))))));
        var_17 = ((-(arr_1 [i_0] [i_0])));
    }
    var_18 = (~2147483622);
    #pragma endscop
}
