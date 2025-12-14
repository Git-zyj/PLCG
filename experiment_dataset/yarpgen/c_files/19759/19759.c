/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 |= (((((624531132 ? ((102 << (-624531132 + 624531132))) : (-9158 | 94)))) ? (((arr_6 [i_3 - 1] [i_3] [i_3 + 2] [i_3]) | (arr_6 [i_3 + 2] [i_3] [i_3 - 1] [i_3]))) : ((((((((arr_4 [i_3] [8]) || var_4))) <= 1))))));
                            arr_9 [13] [13] [i_1] [13] [i_3 + 2] = (((((arr_5 [i_3 + 2]) ? (arr_5 [i_3 - 2]) : (arr_7 [i_3 - 2] [i_2]))) * (arr_8 [i_3 + 2] [i_3 + 2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [10] |= 2626630335;
                            var_11 = ((var_4 != var_2) ? var_2 : (((((arr_8 [i_0] [i_5]) ? (arr_8 [15] [15]) : (arr_7 [i_0] [i_1]))) * 1668336976)));
                            var_12 = (max(var_12, (-9142 || 861)));
                        }
                    }
                }
                var_13 = (min(-2039704857, (max(var_5, 2761384756))));
                var_14 = (min(((((arr_4 [i_1] [i_1]) ? (!-2147483636) : (!1)))), (min((min(4294967288, (arr_13 [i_1]))), (arr_17 [i_0] [i_1] [i_1] [i_0])))));
                arr_19 [i_1] = (arr_14 [i_0] [i_0]);
            }
        }
    }
    var_15 = var_7;
    var_16 = (min(var_0, var_8));
    var_17 = ((var_5 != ((-((var_6 ? var_0 : var_1))))));
    #pragma endscop
}
