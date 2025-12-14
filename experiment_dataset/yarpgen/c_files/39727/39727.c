/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((-1707614347 ? 287741177 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 = ((((((-5 + 9223372036854775807) << (((arr_1 [i_3 + 3]) - 1187351872))))) ? (((arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1]) ? (arr_6 [i_3 - 2] [i_1] [i_3 + 2]) : (arr_11 [i_1]))) : (((((arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_2] [1]) > (((~(arr_2 [i_0]))))))))));
                            arr_13 [i_1] [i_2] [i_1] [i_1] = ((((947089456 ? ((min((arr_5 [i_2]), 12))) : ((-(arr_7 [i_3] [i_0] [i_0]))))) > (max((arr_9 [i_3 - 2] [i_3 + 3] [i_1]), -1416604723))));
                            var_22 = (((((arr_12 [i_0] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 3]) ? (arr_12 [i_0] [0] [i_2] [i_2] [i_3 + 1] [i_3 - 2]) : (arr_12 [i_1] [i_2] [i_2] [i_2] [i_3 - 3] [i_3 - 1]))) != (((((arr_12 [i_3] [i_3] [1] [i_3 + 1] [i_3 - 1] [i_3 + 3]) == (arr_12 [1] [i_0] [i_1] [i_2] [i_3 - 3] [i_3 + 1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = (i_1 % 2 == 0) ? (((((arr_6 [i_0] [i_1] [i_0]) + 2147483647)) << (((-1416604718 + 1416604741) - 23)))) : (((((((arr_6 [i_0] [i_1] [i_0]) - 2147483647)) + 2147483647)) << (((-1416604718 + 1416604741) - 23))));
                                var_24 = (max(var_24, ((min(((((arr_9 [i_4] [i_4] [i_0]) / (arr_9 [i_4] [i_4] [i_5])))), (((((arr_14 [2] [i_6] [i_6] [i_6]) && (arr_20 [i_1] [i_6]))) ? (((-1533316342 - (arr_3 [i_0])))) : (4534996753305002299 / var_6))))))));
                                var_25 = ((-(9033 / -2270114858427369539)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((((var_5 ? 32873 : var_0))) ? (32256 << 0) : ((max(32256, 127)))))) ? (((var_0 > ((var_16 ? var_2 : var_0))))) : var_13);
    var_27 = (max(((min(var_12, var_2))), var_0));
    #pragma endscop
}
