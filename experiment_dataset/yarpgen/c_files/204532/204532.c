/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [10] [10] [i_2] [i_2] = -6729754691235463580;
                    arr_9 [i_0] [i_2] [i_2] [i_2] = 49919;
                    arr_10 [i_2] = ((((min((max(var_5, (arr_2 [3] [i_0]))), (((-459052560 ? 3 : 15624)))))) + ((-15616 ? ((var_11 ^ (arr_6 [i_2] [i_2] [i_2]))) : (((7 ? var_8 : (arr_7 [i_0 - 1] [i_1] [i_2] [i_2]))))))));
                }
            }
        }
    }
    var_16 = (max(var_4, 4294967295));
    #pragma endscop
}
