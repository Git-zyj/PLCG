/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((max(1, var_2)) ? var_5 : var_10))));
    var_13 = (~(~7532044950827793445));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((~((var_8 ? var_9 : ((var_1 ? 300094237 : (arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = 505612225;
    }
    #pragma endscop
}
