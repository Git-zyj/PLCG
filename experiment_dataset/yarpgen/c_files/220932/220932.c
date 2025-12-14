/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((max(var_0, 1735918493777120431)))));
                    arr_8 [i_1] [i_1] [i_2] [i_0] = ((((arr_4 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : var_6)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 -= (max(((!(!-21920))), ((var_4 || (arr_12 [2] [i_3] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                                var_13 = 16710825579932431177;
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = (((((max((arr_4 [i_1] [i_3]), (arr_0 [i_3] [i_2]))))) - var_4));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_3];
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] [i_1] = (arr_6 [i_0]);
                }
            }
        }
    }
    var_14 ^= var_9;
    var_15 = (min(var_5, var_3));
    #pragma endscop
}
