/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~-52);
        arr_4 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_11 = (!-255);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_3 + 1] [i_2] [i_1] = ((55839 != (min((((arr_10 [i_3]) - (arr_11 [i_3]))), (((arr_11 [i_3]) - 1492400383))))));
                    arr_14 [11] [i_2] [8] [i_2] = 10022127563256145234;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_4] [i_5] = (-((((((arr_9 [i_1] [i_4]) - (arr_5 [i_5 - 2] [i_4])))) ? ((((arr_17 [i_5]) ? 1 : (arr_17 [i_5])))) : (arr_7 [i_1] [6]))));
                    arr_21 [i_1] [i_1] [i_5] = ((~(max((arr_5 [i_5 - 2] [i_4]), (arr_5 [i_5 - 1] [i_4])))));
                }
            }
        }
        arr_22 [i_1] = (arr_10 [i_1]);
        var_12 = (min(((((1 ? 55829 : 1)) + (arr_10 [i_1]))), ((~(arr_18 [i_1] [i_1] [14] [i_1])))));
    }
    var_13 = (((!var_6) << (((-29438 + 1187289436) - 1187259993))));
    var_14 = var_9;
    #pragma endscop
}
