/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_0] = ((((max((arr_8 [i_0 + 1]), -677080036))) ? (((((3912485981 ? 148 : -3189248750507281022))) ? (~33323) : var_9)) : (min(55233, -677080036))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_1] = (arr_3 [i_0]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0 - 2] = (0 < 2639884198);
                }
            }
        }
    }
    var_11 = (min(0, 7407267837906751212));
    var_12 = (7 < var_3);
    #pragma endscop
}
