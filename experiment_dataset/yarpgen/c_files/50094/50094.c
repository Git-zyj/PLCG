/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_17 > 0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [18] [0] [i_1] [i_0] = (min((arr_2 [i_1 + 3] [0]), (arr_5 [9])));
                    arr_11 [i_1] = ((((-(max(var_8, var_16)))) & var_9));
                    arr_12 [i_1] [i_1] = (arr_6 [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
