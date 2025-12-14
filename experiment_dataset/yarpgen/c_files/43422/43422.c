/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [1] = -38;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_15 = ((((((((arr_15 [i_4] [11] [11] [i_1] [2] [2] [2]) > (arr_3 [i_0])))) > ((((arr_13 [i_0]) > (arr_0 [i_3])))))) ? var_2 : (((((arr_17 [i_0] [9] [i_2] [i_2] [i_3] [i_2] [i_4]) > ((-38 ? 4294967295 : 1))))))));
                            arr_18 [i_0] [i_1] [9] [i_2] [i_1] = ((~(var_8 > 2002045370)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_16 = (((!38) ? (arr_0 [i_0 - 2]) : 5566089901754234300));
                            arr_21 [9] [i_0] = (arr_8 [i_1] [i_2 - 1] [i_5]);
                        }
                        arr_22 [i_2] [i_3] = (((((min(29, (arr_6 [i_0]))) ? (((((arr_9 [i_0] [18] [i_0]) || (arr_16 [i_0] [17] [i_1] [i_0] [i_1] [i_3] [i_0]))))) : ((~(arr_9 [i_1] [i_2] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_6] = (1 > 9223372036854775807);
                        arr_26 [18] [i_2 + 2] [i_2 + 2] [i_1] [15] [i_0] = ((((((arr_9 [i_0 - 1] [i_0] [i_0]) ? 69 : (arr_1 [i_0] [i_0])))) ? (arr_16 [i_0] [i_0] [i_0 + 1] [i_1] [i_2 - 1] [i_6] [i_6]) : (((-3834 ? (arr_2 [i_2]) : (arr_17 [i_6] [i_2] [i_2 + 1] [i_1] [i_0] [i_0] [i_0]))))));
                        var_17 = (min(var_17, (((((267 > (arr_12 [i_2]))) ? (arr_16 [i_0 + 1] [i_0 - 2] [i_0 - 1] [4] [i_0] [i_0 - 2] [i_0]) : -17067)))));
                        arr_27 [i_0] [i_1] [i_2] [i_6] = 4863554058012761022;
                    }
                    var_18 = (min(var_18, (((var_14 > (arr_3 [i_1]))))));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
