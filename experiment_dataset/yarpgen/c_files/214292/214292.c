/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 45522;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 + 1] [i_1] [i_3] [i_3] [i_4] = var_2;
                                var_20 = ((((((max((arr_0 [i_0]), 13844083160488799616))) ? var_4 : (var_9 / 65535))) * (arr_15 [i_2] [i_4])));
                                arr_17 [i_4] [i_4] [i_3] [i_4] [10] = (((((((~(arr_1 [i_2] [7])))) / ((var_4 ? var_11 : (arr_14 [7] [i_3]))))) < (min(8191, (max(4593671619917905920, -34450201))))));
                            }
                        }
                    }
                    var_21 = (max((((arr_9 [i_0 - 1] [i_0] [i_2] [i_0]) ? 2147483647 : (arr_9 [i_0 + 1] [i_0] [i_2] [i_2]))), var_15));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 = (arr_11 [i_1] [i_2] [i_5]);
                                arr_26 [i_6] [i_5 + 1] [i_5] [5] [i_5] [i_0] [i_0] = var_4;
                                var_23 = ((-((-(arr_14 [i_0 - 1] [i_6])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_24 += ((((((arr_11 [i_8 + 2] [i_8] [i_1 - 3]) ? 65535 : (arr_25 [i_0 - 2] [i_1] [i_1] [4] [12] [i_8 + 3] [i_0])))) ? var_15 : ((((0 ? 9223372036854775807 : 128))))));
                                arr_31 [1] [i_7] [i_2] [i_1] [i_0] = (((((13844083160488799614 != -141533892) ? -8903768271215873136 : ((((-1 != (arr_3 [i_0])))))))) ? (((-var_15 ? (arr_1 [i_1 - 2] [i_8 + 4]) : 87))) : (((arr_6 [i_0 - 2]) ? -1532483170 : (arr_6 [i_0 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
