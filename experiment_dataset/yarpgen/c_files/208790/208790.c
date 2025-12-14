/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 < 236);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [4] = 8734724126615278862;
                var_15 = (~1924252323);
                arr_8 [i_0] [i_1] [4] = ((((((-5125442770521453207 ? (arr_4 [i_0]) : (arr_5 [i_1] [i_0] [i_0]))))) < (arr_1 [i_0])));
                var_16 = (max(var_16, var_3));
                var_17 -= 0;
            }
        }
    }
    var_18 = (max((var_1 + var_2), (((var_10 - var_6) * (var_4 + var_1)))));
    var_19 = 0;
    #pragma endscop
}
