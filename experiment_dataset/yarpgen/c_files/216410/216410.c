/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 ^= (min(((var_10 ? (arr_5 [i_2] [i_2 - 2] [i_2 + 1] [i_2]) : ((-(arr_4 [i_2]))))), 239));
                    var_18 = (min(var_18, ((max((!var_15), ((min((arr_5 [i_2] [i_2] [i_1] [i_2]), 1611757692348442125))))))));
                    arr_6 [i_0 - 3] [i_1] [i_2] [i_1] = ((~((-(arr_1 [i_1 + 1] [i_1 - 1])))));
                    var_19 = ((((max(var_11, (arr_5 [i_1] [i_0] [2] [i_2 + 1]))))) ? (arr_3 [i_0 + 2]) : ((~(arr_1 [i_0 + 4] [i_1]))));
                }
            }
        }
    }
    var_20 = var_9;
    var_21 = (~var_13);
    var_22 = var_1;
    #pragma endscop
}
