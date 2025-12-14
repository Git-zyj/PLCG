/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = ((var_11 ? var_15 : -1001119534));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((!(~1001119548)));
                var_22 = (min(var_22, 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_4] = ((~(max(1001119524, (arr_11 [i_2] [i_2 - 1] [i_4 - 3])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] = 47386;
                                var_23 = 6076145430482968230;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_24 = ((~(arr_9 [i_2 + 2])));
                                arr_29 [i_2] [i_2] [i_4] [i_2] [i_2] = 1001119523;
                                arr_30 [i_4] [i_4] = (((arr_27 [i_4] [i_3] [i_4] [i_7] [i_7] [i_8 - 1]) ? ((((arr_27 [i_4] [i_3] [i_4] [i_4] [i_7] [i_8]) ? var_0 : 1))) : (-7194266589965832747 & 17317308137472)));
                                arr_31 [i_4] [i_3] [i_4] [i_7] = max((arr_22 [i_2] [i_3] [i_7] [i_8]), (1 != 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
