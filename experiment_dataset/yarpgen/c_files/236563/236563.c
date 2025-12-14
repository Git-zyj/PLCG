/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((((((var_9 ? (arr_1 [i_0]) : -695430043))) ? ((-(arr_0 [i_0] [i_0]))) : ((((arr_1 [i_0]) > 1)))))) | 2224501489)))));
                                var_18 = ((((((arr_13 [i_0 + 2] [i_0 + 2] [i_1 - 4]) < (arr_13 [i_0] [i_0 + 2] [i_1 - 3])))) / (min(var_1, ((1 ? 1 : 69))))));
                                arr_14 [i_0] [i_1] = ((-122 ? -5692075569260244154 : 124));
                                arr_15 [i_1] [i_3] [i_1] [i_2] [i_1] [i_1] = ((((~(arr_9 [i_4 + 1] [i_1] [i_2] [i_1] [i_0]))) < ((((((((arr_13 [i_0] [i_0] [i_3]) ? (arr_4 [i_0] [i_1]) : (arr_12 [i_0] [i_0] [10])))) && ((max(-9223372036854775787, (arr_5 [i_1] [i_3] [i_4]))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, var_15));
                            var_20 = (~4294967286);
                        }
                    }
                }
                arr_21 [i_1] [12] [i_1 - 4] = var_10;
            }
        }
    }
    var_21 = ((-(((var_12 && var_13) | ((1 ? 101 : 0))))));
    var_22 = ((((((var_5 != -1282853222) >> var_6))) / (min(((var_11 ? var_8 : 1)), (~23)))));
    #pragma endscop
}
