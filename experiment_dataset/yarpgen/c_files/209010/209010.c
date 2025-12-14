/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(~1966370251)));
    var_18 = var_14;
    var_19 = (max(var_19, var_6));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [7] [i_1] = ((~(((!((max((arr_1 [i_1]), 21184))))))));
                    arr_8 [i_0] [i_2] = (((arr_0 [i_0]) ? (((arr_2 [6] [i_0 - 1]) ? var_11 : -8498207484909716042)) : ((max((arr_0 [i_0 + 1]), (arr_3 [i_2] [i_0 - 1] [i_2 + 1]))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_12 [i_3]);
        arr_14 [i_3] = var_3;
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_20 = (max(var_20, var_8));
        arr_17 [i_4] = ((((max(((var_11 ? var_8 : var_7)), (arr_9 [i_4 - 1] [i_4])))) ? ((((arr_0 [i_4 - 1]) ? var_0 : (arr_6 [i_4] [i_4 - 1] [i_4])))) : ((((var_6 ? var_10 : var_14)) | (arr_1 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        var_21 = (arr_25 [i_7 + 2]);
                        var_22 = (max(var_22, (((1 ? 8498207484909716046 : 75910881292750240)))));
                    }
                }
            }
        }
        var_23 = (arr_21 [i_5] [i_5] [i_5]);
        var_24 = 25854;
    }
    #pragma endscop
}
