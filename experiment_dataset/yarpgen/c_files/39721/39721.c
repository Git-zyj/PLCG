/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (max((arr_5 [i_0]), (((1832970656 != 8065) ? (min(var_11, 15)) : ((min((arr_6 [i_2] [i_1] [i_0] [i_0]), var_15)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 *= (((max((arr_0 [i_2]), (arr_0 [i_4 - 2]))) < ((((arr_6 [i_0] [i_1 - 1] [i_2] [i_4 - 2]) ? (arr_6 [i_0] [i_1] [i_3] [i_4]) : (arr_8 [i_4 - 2] [i_4 - 2]))))));
                                var_20 = (((((!(arr_6 [i_4] [i_4 - 2] [i_1 + 1] [i_1 + 1])))) << (var_0 + 31334)));
                                arr_14 [i_0] [i_0] [i_3] = (max((arr_3 [i_2]), (((~(arr_13 [i_1] [i_2] [i_2] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
