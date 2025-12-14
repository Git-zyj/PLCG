/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((-65516 | -4294967295) ? ((min(var_9, var_6))) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] = (-((var_6 + (((arr_1 [i_3]) ? var_1 : var_2)))));
                                var_15 = (((((((4294967295 ? var_9 : 165447732))) ? 1513110505 : (arr_7 [i_0 - 2])))) ? 1513110505 : (--65499));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] = ((var_2 ? ((((((arr_12 [i_0] [i_1] [5] [i_2] [i_1] [i_0]) ? 1968633830 : var_10))) ? (min(-1047587458, (arr_13 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [4]))) : ((108 ? var_5 : var_9)))) : var_12));
                }
            }
        }
    }
    #pragma endscop
}
