/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 ^= (max((((arr_1 [i_0 - 1]) - (((arr_1 [i_0 + 2]) ? (arr_3 [i_0] [i_0] [i_0 + 1]) : 9151314442816847872)))), ((max((arr_3 [1] [i_0] [7]), (arr_3 [i_0 + 2] [i_1] [i_1]))))));
                arr_5 [i_0 - 1] [i_0 - 1] = ((((55017 || (arr_0 [i_1]))) ? ((-(max(-1522465670, 1801759525)))) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] = (min(-81, 807925314));
                            arr_14 [i_0 + 1] [i_1] [i_3] = ((((((arr_8 [i_0 + 2]) ^ var_3))) ? ((((~(arr_9 [i_0] [13] [13] [i_2] [13]))) & (81 ^ var_10))) : var_1));
                            var_22 = (min(var_22, (arr_2 [i_0 - 1] [1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
