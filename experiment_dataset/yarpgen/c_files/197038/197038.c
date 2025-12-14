/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        arr_2 [i_0] = var_7;
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_15 = var_1;
                                var_16 = ((1 ? (arr_3 [i_5]) : (((arr_4 [i_1]) ? var_3 : (arr_4 [i_2])))));
                            }
                            arr_18 [i_3] [i_2] [15] [13] [i_3] = var_2;
                        }
                    }
                }
                var_17 = (min(var_17, (((var_1 ? (max(18014398509481983, 64)) : ((((arr_4 [i_1]) ? (arr_5 [i_1 + 1]) : (arr_17 [i_2 - 2])))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_24 [i_6] [i_6] = ((var_7 ? ((var_9 - ((var_8 ? (arr_21 [15] [i_7] [15] [i_7]) : var_2)))) : ((((arr_19 [i_2] [i_2] [i_2 + 2]) & var_7)))));
                            arr_25 [i_7] = var_6;
                            var_18 = (arr_16 [i_1] [i_2] [i_2] [i_6] [i_7 - 1] [18]);
                            var_19 = (min(var_19, ((max((((arr_16 [4] [i_7 + 1] [i_1] [i_7] [8] [i_1]) ? (arr_11 [i_1 - 4] [i_7 + 1] [8] [i_1]) : var_3)), (((arr_13 [i_1] [i_7 + 1] [i_7] [i_7] [1]) ? var_4 : (arr_16 [i_1] [i_7 - 1] [i_6] [i_7] [i_6] [i_6]))))))));
                        }
                    }
                }
                arr_26 [i_1] [i_2] = (max(((max(var_3, ((max((arr_7 [4]), var_5)))))), (arr_21 [i_1] [i_2] [i_2] [i_2 + 3])));
            }
        }
    }
    #pragma endscop
}
