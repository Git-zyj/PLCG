/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((126 != (arr_0 [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0]) ? -30075 : -873978029));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (!var_2) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_6 [i_1]) - (arr_6 [i_1])));
        arr_8 [i_1] [i_1] = (arr_5 [i_1]);
        arr_9 [i_1] [i_1] = -30075;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                {
                    arr_15 [12] [i_3 - 3] = (((arr_11 [i_3 - 1] [i_3 - 4] [i_3 - 3]) ? -95 : -20));
                    arr_16 [i_2] = (((((var_15 ? -23 : 166)) + 2147483647)) << (var_9 - 845482046));
                }
            }
        }
        arr_17 [13] [i_1] = (arr_13 [i_1] [8] [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_20 [i_4] = ((-(((min(4939622201260208484, 8286404546519089404)) | var_11))));
        arr_21 [i_4] = (min(((((arr_1 [i_4]) ? (arr_18 [i_4] [i_4]) : (arr_1 [i_4])))), (min(-1, var_14))));
        arr_22 [i_4] [i_4] = ((((17449922815966958211 > (arr_5 [i_4]))) ? (-101 && 262143) : (arr_5 [i_4])));
    }
    var_17 = 248;
    #pragma endscop
}
