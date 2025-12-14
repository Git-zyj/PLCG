/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((1073741568 & var_15), var_9))) ? (16872644584885726108 != var_7) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((!(((9860439175947442335 ? 9860439175947442335 : (arr_2 [i_0 + 1])))))))));
                    var_21 = (max(var_21, ((-(((arr_2 [i_1 - 1]) ? 21508 : (arr_2 [i_0 - 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
