/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!(((var_6 ? var_9 : 268304384))))))) * (max((var_7 && var_8), (max(4026662928, var_9))))));
    var_15 = (max(var_10, (!var_2)));
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((((var_6 ? -64 : ((~(arr_5 [i_0 - 1] [i_0] [i_0])))))) == (arr_3 [i_0] [i_0 - 1])));
                    arr_6 [i_2] [3] [i_0] [i_0] = (min((max((min(4026662890, 11)), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]))), ((((arr_2 [i_0] [i_0] [i_2]) && (!65535))))));
                }
            }
        }
    }
    #pragma endscop
}
