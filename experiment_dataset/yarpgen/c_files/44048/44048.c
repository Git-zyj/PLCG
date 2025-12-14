/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((min(1, -7245771202419030165)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (1 * 1)));
                arr_5 [i_1] [8] |= (min((arr_0 [i_1]), (max((arr_3 [i_1] [i_1] [i_0]), (~5367519088117059951)))));
                var_21 += (((arr_4 [1] [i_0] [i_1]) * (((arr_4 [i_1] [i_0] [i_0]) * var_15))));
            }
        }
    }
    var_22 = ((1 ? (~var_3) : ((var_17 - (((var_11 ? 75 : var_9)))))));

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 = var_3;
                    var_24 = (min((arr_8 [4]), (arr_8 [i_3])));
                    arr_14 [i_3] [i_3] [i_3] = var_8;
                }
            }
        }
        arr_15 [i_2] = (((arr_9 [12] [14] [12]) ? (((max(1, 57)))) : (min((arr_11 [0]), 1))));
        arr_16 [5] = ((1 * 1) ? (arr_10 [i_2] [i_2]) : (arr_11 [1]));
    }
    #pragma endscop
}
