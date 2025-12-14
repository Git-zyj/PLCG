/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (1 - -var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (~19);
        var_19 = ((!(arr_2 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0]) ? var_10 : 2563305030278628561));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_7 [16] [16] = var_4;
        var_20 = var_1;
        var_21 = max((arr_5 [17]), (arr_4 [i_1] [17]));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_22 = (max((~0), var_8));
                    var_23 = (((max(var_7, ((var_3 ? var_14 : 1)))) * 2309943016954392972));
                    var_24 = (max(((var_15 ? (arr_9 [i_1 - 1] [i_2 + 1]) : (arr_9 [i_1 - 1] [i_2 - 1]))), (((arr_9 [i_1 + 2] [i_2 + 1]) - var_0))));
                    arr_15 [i_1] [i_2] [i_3 - 1] = ((-(!var_13)));
                }
            }
        }
        arr_16 [i_1] = (((((-(arr_8 [i_1 + 2])))) && var_6));
    }
    #pragma endscop
}
