/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (max((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 1]) : (arr_5 [i_0 + 1] [i_1 - 1]))), (arr_4 [i_0 - 1])));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_0] = (max((((arr_2 [i_0 + 1]) ? ((11 + (arr_3 [i_0] [i_1] [i_2]))) : 68)), (arr_7 [i_1] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_18 [i_3 - 3] [i_3 - 3] [i_5] [i_3] [i_3] = var_3;
                            var_13 = (((min(var_10, 406273244)) < (((((-1471125337 ? 406273235 : var_3)) >= (((max((arr_15 [i_3] [i_4] [i_5] [i_6]), var_3)))))))));
                        }
                    }
                }
                arr_19 [i_3] = (((((~(arr_11 [i_3 - 1] [i_3 - 1])))) ? (max((var_11 >= var_5), ((56478 ? 3888694077 : 105)))) : -var_8));
                var_14 *= ((((!(arr_3 [i_3 - 2] [i_3] [i_3 + 1]))) ? 16686 : (arr_11 [i_3] [i_3])));
            }
        }
    }
    #pragma endscop
}
