/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((-1340290648346239845 ? (((arr_9 [i_0] [i_0] [i_2] [i_2]) ^ (arr_5 [i_0 + 1]))) : (arr_7 [i_0] [i_1] [i_2] [i_2])));
                    var_14 = (min((arr_9 [i_2 - 1] [i_1 + 3] [i_2] [i_1 + 3]), 1046151781));
                }
            }
        }
    }
    var_15 = ((+(max((var_7 * var_7), var_9))));
    var_16 = (min(5, var_4));
    #pragma endscop
}
