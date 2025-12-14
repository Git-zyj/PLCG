/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 *= (arr_1 [0]);
                            var_15 = 3050035590341502018;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = -2045822368;
                                var_17 = ((max(((max(17, 129)), (min(-1581167996, 65527))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_8;
    #pragma endscop
}
