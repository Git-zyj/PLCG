/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [13] = (+(((arr_5 [i_0 - 2] [i_1]) / (arr_5 [i_0 - 1] [i_2 + 3]))));
                    arr_9 [i_0] [i_1] [i_2] = (min(((((arr_1 [i_0 - 2] [i_0]) ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 2] [i_0])))), (arr_1 [i_0 - 2] [i_0])));
                    arr_10 [i_0] [i_0] = (((((arr_1 [i_1] [i_0]) - (var_13 ^ -1652220749))) / ((((((arr_3 [i_2]) >= 651)) ? (arr_3 [i_0]) : (arr_2 [i_0]))))));
                    arr_11 [i_1] [20] [i_2 - 1] [i_2 - 1] &= (max(((1 ? (arr_2 [i_1]) : ((min(5, (arr_1 [i_0] [i_1])))))), (~0)));
                }
            }
        }
    }
    var_15 ^= (~-var_0);
    var_16 = (~((((max(var_6, var_8))) & (~var_2))));
    #pragma endscop
}
