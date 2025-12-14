/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 &= 0;
                var_14 = (min((((-((21 ? -1 : var_8))))), ((((((arr_0 [i_0]) ? -30114 : 16835))) ? (3826744938990013557 != 3955644979) : (((arr_2 [i_1]) ? (arr_0 [i_0]) : 9149))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [10] [i_2] [i_3] [i_3 - 3] [i_2] [i_2] [i_0] = ((((((arr_1 [i_3 - 1]) ? (arr_1 [i_3 - 4]) : (arr_1 [i_3 - 3])))) ? ((((arr_1 [i_3 - 3]) && 38))) : (arr_1 [i_3 - 3])));
                                arr_12 [i_4] [8] [i_2] [i_4] &= (((arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]) & ((75 ? (var_7 + 6858) : (23658 != 4294967295)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 *= 4294967295;
    #pragma endscop
}
