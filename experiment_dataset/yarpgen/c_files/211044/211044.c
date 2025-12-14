/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = var_9;
                                arr_15 [i_0] [7] [i_2 - 1] [i_3] [i_4] [i_4] [i_0] = -2133609307;
                            }
                        }
                    }
                }
                var_16 = ((0 || ((((((31 ? -3226388823533876337 : 131071))) ? ((((-2147483647 - 1) < (-2147483647 - 1)))) : (!210))))));
                arr_16 [i_0] [i_1] [8] = (((((arr_5 [i_1] [i_0]) ? (var_5 + var_11) : (arr_4 [i_1])))) ? (~2073473668) : 1);
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
