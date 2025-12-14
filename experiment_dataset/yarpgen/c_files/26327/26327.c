/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));
    var_14 &= var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (((~18239837029759087942) ? ((((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((((var_5 || (!var_11))) || (((206907043950463674 ? 21 : var_12)))));
            arr_5 [i_0] = (max((((arr_3 [i_0] [i_0] [i_1]) * ((((!(arr_4 [i_0] [i_0] [i_0]))))))), (max((arr_0 [12]), (arr_0 [i_0])))));
            arr_6 [i_0] = (arr_3 [i_1] [i_1] [i_0]);
        }
    }
    var_17 ^= (~var_5);
    #pragma endscop
}
