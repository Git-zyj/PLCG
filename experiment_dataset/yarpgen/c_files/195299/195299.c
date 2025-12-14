/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_0] [1] [i_0] [8] = ((1460792576 ? -1117426208 : (-2147483647 - 1)));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((!(((-9115810858203831613 ? -2549095339 : (min((-2147483647 - 1), -2029303558646685384)))))));
                            }
                        }
                    }
                }
                arr_15 [10] [10] = ((~(2147483647 / -728348623981833488)));
            }
        }
    }
    var_11 = ((1162636615 ? (-var_4 + var_3) : -var_0));
    #pragma endscop
}
