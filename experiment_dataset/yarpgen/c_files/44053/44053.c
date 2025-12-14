/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((+((1 ? (~var_3) : -85))));
                var_11 = (~((-(arr_2 [i_0 - 2]))));
                arr_6 [i_0] = (arr_1 [4] [10]);
            }
        }
    }
    var_12 += (((((min(var_6, var_1))) ? (!var_0) : ((var_8 ? var_8 : 20847)))));
    #pragma endscop
}
