/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(((!((min(var_11, var_17))))), ((max(-1024, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_2] = (arr_2 [i_0]);
                    arr_9 [i_0] [i_1] [i_1] [i_0] = var_15;
                }
            }
        }
    }
    var_19 = var_13;
    var_20 = (var_10 <= var_8);
    #pragma endscop
}
