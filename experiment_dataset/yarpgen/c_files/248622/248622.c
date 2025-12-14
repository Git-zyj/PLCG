/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_9, var_3));
    var_21 *= var_5;
    var_22 = ((-(var_10 & var_11)));
    var_23 = (max(5684, ((((var_4 ? var_5 : var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_3 [i_0 - 2] [i_1 - 2]) ? ((((arr_4 [i_0] [i_0 + 2]) == (arr_4 [i_0] [i_0 - 1])))) : ((2198812978 ? 16383 : 16383))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_24 = min((max(((max(17, (arr_11 [i_0] [5] [5] [2] [i_0])))), (((arr_6 [i_4] [i_4] [i_2]) ? 18446744073709551615 : (arr_4 [i_3] [i_3]))))), (((~(arr_11 [i_0] [i_0 + 2] [i_3 - 1] [i_3 - 1] [8])))));
                                var_25 = ((1834584264 ? 84 : 16557129144649614767));
                                arr_13 [i_0] [i_2] [i_2] [i_2] [i_2] = (arr_11 [i_0] [i_0] [i_0] [i_3] [i_3]);
                                var_26 = -29;
                                var_27 ^= (max((((arr_3 [8] [8]) | 18446744073709551608)), (((0 + (arr_3 [i_1 - 1] [i_3 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
