/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [5] [7] = var_5;
                    var_15 = (((!(((var_4 ? (arr_7 [i_0] [i_2]) : (arr_1 [0])))))) ? (((((1 ? 1 : 126))) % (min(var_5, var_11)))) : ((var_1 ? (max(var_11, (arr_4 [i_0] [1] [1]))) : ((var_9 ? var_9 : (arr_4 [i_0] [5] [i_2]))))));
                    arr_9 [i_0] [i_1] = 28;
                    arr_10 [3] [i_1] [9] [i_2] = (((!-126) ^ ((1 ? 58 : 126))));
                }
            }
        }
    }
    var_16 = var_6;
    #pragma endscop
}
