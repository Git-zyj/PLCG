/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (((min(var_13, var_16))) ? (arr_0 [i_0] [i_0]) : (max((arr_4 [i_1]), (3232910928264221982 || 15385774549089817855))));
                var_19 = (min(-1504739868750275762, var_16));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_20 = arr_9 [i_3];
                var_21 += (max(var_7, (((((max(-9223372036854775795, (arr_6 [i_2])))) ? ((max((arr_7 [i_2]), var_1))) : (4294967267 ^ var_4))))));
            }
        }
    }
    #pragma endscop
}
