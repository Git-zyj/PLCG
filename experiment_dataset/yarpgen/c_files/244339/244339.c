/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 -= 37517;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = ((((min((var_5 & var_6), (~var_0)))) ? (~var_8) : 2847));
                                var_13 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
