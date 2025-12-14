/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_13, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = (((var_1 << (((arr_1 [i_1]) - 186)))) != var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [3] [i_2] [i_1] [i_0] = var_1;
                                arr_14 [i_0] [12] [i_2] [i_1] [i_4] = (((~var_10) ? (((((arr_5 [i_1] [i_1] [i_3]) < (var_7 >= var_7))))) : (min((arr_10 [i_4] [i_3] [i_2] [12] [i_0]), ((var_5 ? 95 : (arr_3 [i_4] [i_1] [i_2])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((min((arr_2 [i_0] [i_1] [11]), 16552664400250659066))) ? ((min((arr_5 [i_1] [i_3] [8]), (arr_5 [i_1] [i_2] [i_3])))) : var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((2047 <= ((min((min(57054, -1009084542)), 32761)))));
    #pragma endscop
}
