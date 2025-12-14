/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min(((1 >= (arr_5 [i_0]))), var_9));
                var_14 = (max((((arr_5 [i_0]) ? var_3 : (arr_2 [i_0] [i_0] [i_0]))), ((max((((arr_4 [i_1]) ? (arr_1 [i_1]) : var_0)), ((min((arr_0 [i_0] [i_1]), var_0))))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_2 - 1] = ((min(1, 1)));
                    var_15 = (max((((arr_14 [i_2 + 3] [i_4]) - var_6)), (arr_7 [i_3])));
                }
            }
        }
        var_16 = (arr_15 [i_2] [i_2 - 3]);
        var_17 = 1;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = max(1, 57);
        var_18 = (((arr_17 [i_5] [i_5]) ? ((min(1, (arr_18 [i_5] [i_5])))) : ((min((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_22 [i_6] = (max((((arr_21 [i_6]) ? 46484 : var_9)), 20));
        arr_23 [i_6] = 0;
    }
    var_19 += (1 + var_10);
    #pragma endscop
}
