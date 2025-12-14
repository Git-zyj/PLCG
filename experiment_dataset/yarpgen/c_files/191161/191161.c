/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((((max((((-870425489 ? 46795 : 18726))), ((-1 ? 1013 : 176684772))))) ? 11838 : -11839)))));
                                arr_14 [i_0] [i_0] = (((((((2085856362 ? 2104741543 : 23145))) ? (arr_0 [i_0] [i_0]) : var_0)) < (((-465850927 ? 22 : (((arr_6 [i_4]) ? (arr_10 [i_0] [i_0]) : (arr_2 [i_0] [i_2] [i_0]))))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_2] &= ((max((arr_6 [i_1]), (((arr_7 [i_1] [i_2] [i_0] [i_1]) + 126)))));
                }
            }
        }
    }
    #pragma endscop
}
