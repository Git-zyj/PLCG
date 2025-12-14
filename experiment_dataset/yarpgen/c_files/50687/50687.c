/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_8;
    var_16 &= (((((!var_3) < ((-16897 ? 16875 : var_10))))) % var_7);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((((((((arr_1 [i_0]) ? (arr_0 [i_0]) : -16897)) % ((12943 ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? ((((!0) && var_9))) : ((min(var_10, (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (((((((arr_5 [i_0] [i_0] [i_3] [i_0]) != var_13))) <= ((((min(-16897, var_4))) ? (min(var_1, var_0)) : -var_8)))))));
                        arr_9 [i_3] [i_1] [i_2] [i_1] [i_2] [i_3] = (arr_7 [i_0] [i_2] [i_2]);

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] &= (((arr_5 [13] [i_1] [i_2] [i_1]) ? ((max((arr_8 [i_0] [i_4 - 2] [i_0] [i_2] [i_0]), (arr_8 [i_3] [i_4 - 2] [i_4 + 2] [i_3] [9])))) : (((arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? ((max(-31176, -32212))) : (var_6 || var_9)))));
                            var_19 = (i_2 % 2 == 0) ? ((((((((max((arr_1 [i_3]), 19))) != ((max((arr_6 [i_1]), 32201)))))) << ((((~(arr_11 [i_2] [i_2] [i_4]))) + 1855520610))))) : ((((((((max((arr_1 [i_3]), 19))) != ((max((arr_6 [i_1]), 32201)))))) << ((((((~(arr_11 [i_2] [i_2] [i_4]))) - 1855520610)) + 1063356611)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] &= 32213;
                            var_20 = ((arr_8 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_1] [i_1]) ? ((((var_0 / (arr_5 [i_0] [i_1] [i_3] [i_0]))) + (arr_8 [i_4 + 2] [i_4 - 2] [i_4] [6] [i_4 - 2]))) : 362497199);
                            var_21 = (((((arr_8 [18] [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4]) ? (((-2147483647 - 1) ? 12942 : var_7)) : (arr_3 [i_3] [i_4 + 1] [i_4 + 1])))) ? ((var_6 ? 0 : -749)) : ((min(-31176, -15253))));
                        }
                    }
                }
            }
        }
        arr_15 [i_0] |= var_13;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [0] = (((arr_11 [i_5] [i_5] [i_5]) << (((arr_11 [i_5] [i_5] [i_5]) - 1855520587))));
        var_22 = var_1;
        arr_20 [i_5] = ((((((arr_6 [i_5]) != (arr_11 [i_5] [i_5] [i_5])))) % (arr_5 [i_5] [i_5] [i_5] [i_5])));
        var_23 = (max(var_23, ((((arr_3 [i_5] [i_5] [i_5]) && (arr_3 [i_5] [i_5] [i_5]))))));
    }
    #pragma endscop
}
