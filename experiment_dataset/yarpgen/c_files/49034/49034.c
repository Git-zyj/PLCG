/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] &= ((((((arr_6 [i_0] [i_0 - 2] [14]) ? (arr_6 [1] [i_0 - 2] [i_0]) : (arr_5 [i_0 - 1] [i_0 - 2] [0])))) ? ((((!(arr_6 [1] [i_0 - 2] [1]))))) : (arr_6 [i_0] [i_0 - 2] [i_1])));
                    var_20 += 68;
                    var_21 = (min(var_21, ((((arr_9 [i_2] [i_1] [i_0]) << (((arr_9 [13] [i_1] [i_2]) ? (arr_4 [i_2] [i_1] [i_0]) : (((arr_3 [i_0] [i_0]) ? (arr_5 [i_2] [3] [i_0]) : var_4)))))))));
                    arr_11 [i_0] [i_1] [i_2] &= (arr_8 [i_2] [i_1] [i_2] [i_1]);
                }
                var_22 = 43203;
            }
        }
    }
    var_23 = 68;
    var_24 = var_5;
    #pragma endscop
}
