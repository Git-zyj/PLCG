/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [1] [i_3 + 2] = var_8;
                            arr_11 [i_1] [1] = (max((((arr_9 [i_3 + 3] [i_3] [1] [i_3 + 1]) | var_3)), (arr_9 [i_3 + 3] [i_3 + 3] [i_3 + 3] [13])));
                            arr_12 [i_0] [i_1] = (arr_6 [i_0] [i_2 + 1] [i_3 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = ((~(arr_14 [i_0] [i_0] [i_0 - 1])));
                            arr_17 [i_0 - 2] [i_1] [i_4] [1] [i_5] = ((((((84 && (!105))))) < 6871559052958114176));
                            var_18 = ((((1 ? (arr_1 [i_0] [i_4]) : (arr_6 [i_0 - 1] [i_4] [i_4]))) - ((var_15 ? var_13 : ((min(24576, (arr_6 [i_0] [i_4] [i_5]))))))));
                        }
                    }
                }
                var_19 = (!1);
            }
        }
    }
    var_20 = var_5;
    var_21 = -1;
    #pragma endscop
}
