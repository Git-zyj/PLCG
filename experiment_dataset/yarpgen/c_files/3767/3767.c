/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (~(((min(var_8, -2)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 2] [i_1] = ((((((arr_5 [i_0] [i_0] [i_0] [i_1]) ? 0 : (min((arr_3 [i_0]), 1))))) ? ((((min((arr_3 [i_0]), (arr_3 [i_0])))) ? var_7 : (arr_2 [i_0]))) : (((1 ? (min(22630, -21)) : (arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]))))));
                    var_13 = (min(var_13, ((max((arr_3 [i_0 - 2]), (arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] [i_3] [i_4] = max((((arr_8 [i_3]) + var_6)), var_0);
                                var_14 = (arr_8 [i_3]);
                            }
                        }
                    }
                    var_15 ^= (min((arr_10 [i_0] [i_1] [i_0] [i_2] [i_2]), (max((((var_6 ? (arr_10 [i_0 - 2] [i_0] [i_1] [i_1] [i_2]) : (arr_3 [i_1])))), var_4))));
                }
            }
        }
    }
    var_16 = ((var_8 ? var_0 : var_1));
    #pragma endscop
}
