/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (arr_9 [i_2 + 1] [i_2] [i_2] [i_0 + 2]);
                    var_15 = (min(var_15, var_8));
                }
            }
        }
    }
    var_16 = (min(var_16, var_3));
    var_17 = ((((max(var_2, var_6)) <= 106)));
    #pragma endscop
}
