/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (((min(((min(var_1, (arr_5 [1])))), (arr_1 [i_0] [i_2]))) / ((max(-2062644077, -400620247)))));
                    arr_8 [i_0] [i_1] [5] [i_0] = (((max(var_14, var_4)) | (((((var_3 ? var_13 : (arr_5 [i_0])))) ? (min((arr_2 [i_1] [i_2]), (arr_1 [i_1] [i_1]))) : ((min((arr_0 [i_2]), (arr_0 [18]))))))));
                    var_16 &= var_5;
                    arr_9 [i_0] [i_1] [i_2] = ((((((arr_1 [i_0] [i_2]) | (arr_1 [i_2] [i_0])))) ? (min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0]))) : (((arr_1 [4] [i_2]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))));
                }
            }
        }
    }
    var_17 *= ((((max(-var_11, ((var_9 ? var_14 : var_11))))) ? (var_12 / -var_8) : (min(-400620247, 6852292669681213903))));
    #pragma endscop
}
