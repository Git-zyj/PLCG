/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-16, (((15 < 7118029869454866823) ? (~var_7) : ((-7118029869454866806 ? -26 : 3553350660))))));
    var_21 |= max((var_11 ^ -15), var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 += (((((!1) < 3553350660)) ? (max((!1), (arr_8 [i_2] [i_3] [10] [i_4 - 3]))) : (((((arr_1 [i_4 - 2]) && (!52910)))))));
                                arr_13 [i_0] [i_2] [i_4] = (!15);
                                var_23 = ((-15 ? 741616633 : (((((-7118029869454866811 ? -7118029869454866813 : 220)) > 7118029869454866823)))));
                            }
                        }
                    }
                }
                var_24 = (((((((3553350645 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_1])))))) >= (((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 + 4]) ? 59 : -7118029869454866813))));
            }
        }
    }
    #pragma endscop
}
