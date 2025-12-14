/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((((((var_7 ? var_9 : var_6))) ? 8326 : ((var_0 ? var_7 : var_9))))), 2590408234));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (((((((arr_1 [i_2]) ^ (arr_5 [i_0] [16] [16]))))) ? 23765 : 57209));
                    arr_6 [i_0] [i_1] [i_2] = ((((arr_1 [i_2]) || var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((((2097120 ? 11337 : 255))) ? ((min(var_7, 562948879679488))) : (arr_1 [6]))))));
                                var_13 += ((~(arr_0 [i_4] [i_3 - 2])));
                                var_14 = max((min(((355417307 ? var_2 : var_0)), (2263600826 || -1276966663))), ((min(((((arr_5 [21] [i_0] [i_0]) || var_1))), (max((arr_3 [i_1] [i_2] [i_3]), 32767))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
