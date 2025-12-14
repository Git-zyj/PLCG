/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_14 <= 0);
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = max((((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_0]))), ((max((arr_0 [i_1] [4]), 0))));
                arr_5 [i_0] [i_0] = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_0] = ((~(((((max(42570, 8365))) || (((~(arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_12 [i_3] [i_2 - 1] [i_2 - 1] [i_2] [i_2] &= max((13046 + 7), (max((arr_0 [i_2] [i_2 - 1]), (arr_0 [i_0] [i_2 - 1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
