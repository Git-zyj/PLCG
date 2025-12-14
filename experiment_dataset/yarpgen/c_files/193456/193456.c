/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = ((min(-1708105330, 1708105321)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_3 + 2] [i_2] [i_0] [i_3] [i_0] = (arr_9 [i_3] [i_3] [i_3 - 3] [i_3]);
                                var_11 = -118;
                                var_12 = ((((min((arr_10 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0]), 1708105329))) ? ((min(1708105329, (arr_1 [i_0])))) : (min(-105, 3657632804))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 = (min(-1, 1708105333));
                                var_14 -= (((-1 / -1708105309) ^ 655437002));
                                arr_19 [i_6] = ((-57 ? ((min(81, (arr_11 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_5 - 1])))) : (min((4278173664414010677 / -4278173664414010665), ((64 ? -1 : -1708105322))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = -7844948237998400113;
    var_16 = var_9;
    #pragma endscop
}
