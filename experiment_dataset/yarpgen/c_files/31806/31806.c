/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((max(-123, var_9))) * 120)), -1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (arr_3 [i_0] [22])));
                    arr_10 [i_0] [i_0] [i_0] = ((var_7 << (43579 - 43572)));
                }
            }
        }
    }
    #pragma endscop
}
