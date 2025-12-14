/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((max((arr_1 [i_1] [i_0]), (arr_2 [i_0] [i_1])))) || (arr_4 [i_0] [i_0])))) << ((2070140679 >> (var_7 - 2743623024))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] = (~var_15);
                            arr_15 [i_0] [i_2] [i_0] = ((((min((arr_13 [i_0] [1]), 0))) && (((~(arr_12 [i_2 + 1] [i_0] [i_2] [i_3 - 1]))))));
                            arr_16 [0] = (arr_2 [12] [i_1]);
                        }
                    }
                }
                arr_17 [i_0] = 2070140679;
                arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? ((((arr_5 [i_0]) << (min(0, 964235236))))) : ((((((arr_5 [i_0]) + 2147483647)) << (min(0, 964235236)))));
                arr_19 [i_0] [1] = (arr_13 [i_0] [i_1]);
            }
        }
    }
    var_19 = (min((~var_7), -997474473));
    var_20 = (((min(var_8, var_10)) <= (((-(!-2070140679))))));
    #pragma endscop
}
