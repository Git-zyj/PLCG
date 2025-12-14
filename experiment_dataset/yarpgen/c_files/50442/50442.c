/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += (max(var_12, ((4321854473134768168 ? (arr_3 [10] [i_0] [i_0]) : var_1))));
                var_15 = (max(var_15, ((max(((max((arr_2 [i_0]), (max((arr_1 [i_0]), (arr_1 [4])))))), ((max(var_3, 4321854473134768174))))))));
            }
        }
    }
    var_16 = ((~(~var_4)));
    var_17 = ((var_7 - (((max(-8938600199701492652, 31607)) + var_13))));
    #pragma endscop
}
