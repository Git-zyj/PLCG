/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_4 - 1] |= ((!(arr_3 [i_1] [i_2])));
                                arr_14 [i_4] = (arr_4 [i_1] [i_2] [i_4]);
                                arr_15 [i_0 + 2] [i_4] [i_0] [i_0] [i_0] [i_0 - 2] = ((-var_0 ? (~var_8) : (arr_2 [i_0 + 2] [i_0] [i_0 + 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 3] [i_0] [i_5] [4] [i_0] = (arr_11 [i_0]);
                                arr_22 [i_5] = (((-(arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2]))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_5] = (((arr_17 [i_0 + 3] [i_1] [12] [i_5]) ? -var_5 : ((((arr_3 [i_0] [i_0 - 2]) ? ((((arr_1 [i_0]) ? var_12 : (arr_6 [i_0] [i_0] [i_0] [i_0])))) : ((170 ? 0 : 9200519824460027897)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                arr_29 [i_7] [8] = (((-(arr_9 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                arr_30 [i_8 - 1] [i_7] = (((~(arr_8 [i_7] [i_7] [i_8 - 1] [i_7]))));
            }
        }
    }
    var_19 = (!var_2);
    var_20 = var_4;
    var_21 = var_13;
    #pragma endscop
}
