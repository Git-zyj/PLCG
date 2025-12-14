/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((11 * (min(-11, 23110))));
                var_19 = (max(-3534365875861348824, -1));
                var_20 = 4294967295;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (min(var_21, (4294967295 / 1)));
        var_22 = (max(var_22, 1));
        arr_8 [i_2] [i_2] = (!60);
    }
    #pragma endscop
}
