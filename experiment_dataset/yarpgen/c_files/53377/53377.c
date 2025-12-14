/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((0 == (max(-3915780831562141257, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (max((min((arr_6 [i_0]), 3915780831562141256)), (((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]) | (max((arr_4 [i_2] [17] [i_0]), 3915780831562141270))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (var_6 != -3915780831562141264);
                        var_13 -= (((~var_5) ? (max(((256 ? (arr_9 [2] [2] [2] [2] [2]) : -1547675275)), (0 ^ 0))) : (arr_0 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 = (arr_0 [8]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -var_8;
                        var_15 |= ((973054823 ? (arr_4 [i_0] [i_0] [1]) : (arr_8 [i_0] [i_1] [i_2 + 2] [i_2])));
                        arr_14 [i_2] [i_0] [i_0] [i_0] = (!-12);
                    }
                    var_16 += (min((min((((-1414003647 + 2147483647) << (var_1 - 7934))), (arr_9 [6] [i_1] [i_2] [i_2 + 2] [i_2 + 1]))), (max(var_3, (max(var_10, 53))))));
                }
            }
        }
    }
    #pragma endscop
}
