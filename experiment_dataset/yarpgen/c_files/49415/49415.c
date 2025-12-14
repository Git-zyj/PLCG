/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [2] [i_1] = 4893767871453943853;
                    var_13 += ((((min((arr_6 [9] [i_1 - 1]), (((var_0 >> (var_10 - 4236306960))))))) ? ((min(0, var_10))) : var_5));
                    arr_10 [i_0 - 1] [i_1] [i_2] |= (arr_1 [i_0] [i_1]);
                    arr_11 [i_1] [i_2] [i_1 - 1] [i_1] = ((-1915806246 ? 2493462848506044261 : 98));
                    var_14 += -567819228;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_17 [i_4] = (--1915806230);
                arr_18 [i_3] [i_4] = (((((5 ? (arr_14 [i_3]) : -30173))) ? 1 : (min((arr_14 [i_3]), 104))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_3] [i_4] [i_5] [i_6] = ((!(((~(arr_21 [i_3] [i_4]))))));
                            arr_25 [10] [i_4] [i_4] [1] [i_6] = ((-((var_11 ? (arr_23 [i_6 + 1] [16] [i_4] [i_4] [i_3] [16]) : var_8))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
