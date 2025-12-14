/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((189340224 ? (((arr_1 [i_0]) ? 3 : (arr_0 [i_0] [i_1]))) : 8)));
                arr_6 [i_0] [8] &= ((min(4296653913406206938, (arr_2 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] = ((((!((((-9942 + 2147483647) >> (((arr_3 [i_3]) - 3051506380))))))) ? 21617 : (((!(((436910318 ? 14150090160303344692 : (arr_14 [5] [i_3] [i_4])))))))));
                                var_13 = 4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((!(min((!1), (!86)))));
    var_15 = (max(3, (max((max(var_3, 1)), var_9))));
    #pragma endscop
}
