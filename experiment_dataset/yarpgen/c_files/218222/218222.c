/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_12 = ((var_10 ? (((((arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) < var_10)))) : (((arr_5 [4] [i_2 + 1] [4] [i_2 + 1]) ? (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 - 1]) : (arr_5 [i_2] [i_2] [i_2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((((((arr_7 [i_0] [i_1] [i_4] [i_4]) ? var_9 : (arr_8 [i_1] [i_0 + 3] [i_2] [i_2])))) ? ((((arr_5 [i_1] [i_1] [i_3] [i_4 - 1]) ? (arr_10 [i_0] [i_1 - 1] [i_1] [i_1 + 2] [i_4 - 1]) : 2))) : (arr_3 [i_0])));
                                var_14 = 2;
                                arr_12 [i_1] [i_1] [i_3] [i_2 + 2] [4] [i_1] = (((arr_7 [i_1 + 2] [i_1] [i_0 + 2] [i_4 - 1]) ? var_2 : (min((arr_7 [i_1 + 1] [i_1] [i_0 + 2] [i_4 - 1]), 837858716942977250))));
                                var_15 = (min(var_15, (arr_2 [i_1] [12])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_17 [i_0 - 1] [i_1] [i_5 + 1] = var_10;
                    var_16 = (arr_3 [i_0 - 1]);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_23 [i_1] [i_1] = -4446399396315839439;
                            var_17 = ((!(((var_8 ? (arr_14 [i_1] [i_1] [i_1 + 1]) : (arr_14 [i_1] [i_1 + 1] [i_1 + 1]))))));
                        }
                    }
                }
                arr_24 [i_0] [14] [i_0 + 2] &= ((((!((min(var_1, (arr_14 [i_0 + 3] [i_0] [i_1])))))) ? (!9150488057475004261) : var_8));
            }
        }
    }
    var_18 += (((((((var_9 ? 9296256016234547355 : var_6))) ? var_0 : 0)) | ((var_4 ? var_0 : var_6))));
    #pragma endscop
}
