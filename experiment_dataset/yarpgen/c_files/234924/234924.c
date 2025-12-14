/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (4007433104 ^ 287534194);
                arr_4 [14] [17] [i_0 - 2] = (-127 - 1);
                var_17 -= (((((-(arr_1 [i_0] [i_0])))) ? 183 : ((((arr_2 [18]) && 0)))));
                var_18 = (max((((arr_1 [i_0] [i_1 + 3]) & (arr_3 [i_1 + 3] [i_0 - 2] [i_0 - 1]))), (arr_3 [i_1] [i_1 + 3] [i_1 + 2])));
            }
        }
    }
    var_19 = 19391;
    var_20 = var_9;
    var_21 = (~4294967295);
    var_22 = min((var_12 == var_4), var_5);
    #pragma endscop
}
