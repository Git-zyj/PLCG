/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-5332763966412229316 ? 64 : -64));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (((((100 ? 127 : (arr_5 [i_0] [i_1] [i_1])))) ? ((13398 ? -2016578206593663534 : 5332763966412229331)) : (((max(13422, var_10))))));
                var_15 &= (((((var_9 ? (arr_1 [i_1]) : (arr_1 [23])))) ? (((!(arr_4 [i_0] [i_1] [i_0])))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                var_16 = (min((((((2016578206593663534 ? -64 : 81))) ? 994610342208728228 : 72)), ((min((arr_2 [i_0]), 182)))));
            }
        }
    }
    #pragma endscop
}
