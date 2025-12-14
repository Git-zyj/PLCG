/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [15] [15] [15] = (max((min((~var_4), ((max((arr_1 [i_0]), var_4))))), (arr_4 [i_0])));
                var_14 = (min(var_14, (arr_4 [i_0 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] = ((((arr_4 [i_2 - 1]) < (arr_4 [i_2 - 1]))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((((((arr_0 [i_5] [i_3]) ? (arr_6 [10]) : var_12))) ? (((~(arr_16 [10] [i_4] [i_3] [i_4] [i_4] [i_2])))) : ((((((arr_7 [i_5]) ? var_2 : (arr_1 [i_5])))) ? var_4 : var_8)))))));
                            var_16 = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] [i_3] = (arr_16 [i_2 - 1] [i_3] [11] [i_2] [i_2 + 1] [i_2 + 1]);
                            var_17 = (max(var_17, (((46943 >= (min(var_9, 808031073)))))));
                        }
                    }
                }
                var_18 = (min(var_18, ((((((!(arr_13 [4] [4] [4] [i_3 + 1])))) != (~147))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_29 [12] [i_3 + 1] [i_3] [i_9 + 1] = (~3845111501311937028);
                            arr_30 [i_2 + 1] [i_3] = (((((((((arr_15 [i_2] [i_2] [4] [i_2]) / var_8))) ? (var_9 / var_3) : ((var_10 ? var_7 : var_8))))) ? (min((arr_8 [i_2 - 1] [i_3]), (((8 ? -1134890861385261479 : 11908))))) : (var_7 / var_0)));
                            arr_31 [i_3] [11] [i_3] [7] [i_3] = (arr_2 [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_19 &= (!-var_4);
    #pragma endscop
}
