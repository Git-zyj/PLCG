/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((arr_1 [i_0 - 3]) ? (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 1]))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = ((3989583947 < (arr_6 [i_1] [i_1] [i_1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [i_3] [i_5] [i_4] [i_3] [i_0 + 1] = 3989583947;
                        arr_20 [i_3] [i_3] [i_3] [i_4] [i_4] [i_5] = -var_5;
                        arr_21 [8] |= 305383329;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_13 |= (arr_24 [i_6]);
        arr_25 [i_6] = ((1525839657 << (2755534540 - 2755534540)));
    }
    var_14 = (min(var_5, ((min(((var_0 ? var_6 : var_4)), var_10)))));
    #pragma endscop
}
