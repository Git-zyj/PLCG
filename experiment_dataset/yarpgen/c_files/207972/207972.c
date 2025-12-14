/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (-86 - 131);
                                arr_12 [11] [0] [i_1] [i_3 - 1] = (!(((57592 ? 124 : (63 >= 64)))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_0] [i_1] = ((125 ? (((arr_9 [1] [i_1] [i_1] [i_1] [1]) ? (arr_0 [8]) : (((arr_11 [i_2]) ? var_17 : var_1)))) : 125));
                }
            }
        }
    }
    var_19 = ((((-(max(131, 3794429978483173094)))) - 22258));
    #pragma endscop
}
