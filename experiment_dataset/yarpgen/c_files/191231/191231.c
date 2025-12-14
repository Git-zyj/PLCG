/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_8 ? var_8 : ((min(24155, var_0))))));
    var_13 = ((var_0 + ((max((var_8 > var_0), var_4)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (arr_7 [i_0 - 1] [i_1]);
                    arr_9 [14] = (((arr_4 [i_0 + 1] [i_0 + 1]) == (arr_4 [i_0] [i_0 + 1])));
                    arr_10 [i_0] [i_0] [i_2] = 1865858974;
                    arr_11 [i_0] [i_1] [i_2] = 0;
                }
            }
        }
        arr_12 [i_0] [i_0] = (((arr_1 [i_0 - 1]) ? 41383 : (arr_7 [i_0 - 1] [i_0 + 1])));
        arr_13 [i_0 + 1] = (((arr_0 [i_0] [i_0]) ^ 117));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_17 [4] [18] = (--1);
        arr_18 [i_3] = ((-(((arr_14 [i_3 + 1]) + 2429108321))));
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        arr_21 [i_4] = (min(var_6, ((min(var_0, var_1)))));
        arr_22 [i_4 - 2] [i_4] &= var_9;
        arr_23 [12] = ((!((min((((-(arr_16 [i_4] [i_4 - 4])))), (arr_15 [i_4] [i_4]))))));
    }
    var_14 = ((((-((var_5 ? var_8 : var_0)))) >= var_10));
    var_15 = var_1;
    #pragma endscop
}
