/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((arr_2 [i_0]) * (arr_2 [i_0]))) % (((arr_2 [i_0]) + -12164))));
                arr_5 [i_0] [i_0] = ((((((arr_1 [i_0]) ? -12164 : (arr_1 [i_1])))) ? (((arr_3 [i_0]) ? ((max((arr_0 [i_0] [i_0]), 12163))) : ((var_2 ? 332052288 : var_0)))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : 0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = 9266;
                            var_11 = max((arr_1 [i_2]), (((var_1 == (min((arr_2 [i_0]), var_7))))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = (((((arr_8 [i_1]) | var_5))) || -1002463763);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_12 ^= -5;
        arr_16 [i_4] [i_4] = -9791;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] = ((((arr_17 [i_5] [i_5]) || (arr_17 [i_5] [i_5]))) ? (((!(arr_17 [i_5] [i_5])))) : var_10);
        arr_20 [i_5] [i_5] = (((((var_5 ? -12164 : (arr_17 [i_5] [i_5])))) ? ((var_8 << (17473 - 17472))) : ((max(6, 12164)))));
    }
    #pragma endscop
}
