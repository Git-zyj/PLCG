/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((-(((arr_3 [4] [i_0 + 3] [i_1]) ? (arr_3 [i_0 - 1] [i_0] [i_0 + 3]) : 109))));
                var_16 -= ((-((((!(arr_1 [i_0]))) ? ((min(var_3, var_7))) : (var_3 & 65535)))));
            }
        }
    }
    var_17 = (((var_0 & var_0) ? var_11 : ((((max(0, var_4))) ? var_1 : 65510))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_2] = ((((max(((((arr_9 [i_4] [i_3] [i_2] [i_2]) ? 19 : (arr_10 [1] [i_3] [i_3] [i_2])))), (arr_7 [i_2] [i_3])))) ? ((-(arr_6 [i_2]))) : (((arr_9 [i_4] [i_4] [i_4] [i_4]) ? 14 : 1722189016))));
                    var_18 = (arr_8 [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_19 [i_5] [i_7] [i_7] = (max((arr_6 [i_5]), (arr_12 [i_5])));
                    arr_20 [i_7] = 1;
                }
            }
        }
    }
    var_19 = (min(var_19, ((max(var_0, (min(((var_4 ? var_1 : var_12)), ((max(var_3, var_4))))))))));
    #pragma endscop
}
