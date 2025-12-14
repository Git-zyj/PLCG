/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 | -9032);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = max(8730118816179915407, ((((-3520571653845601615 ? -1113319496 : 11811509200662865316)) | (1 | 65535))));
                    var_21 = ((((((0 <= 192) <= 1))) | -1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 &= (3520571653845601615 <= 65535);
                                var_23 = ((149 <= 5545) <= ((((5542 ? 13219827097651707142 : -6033)) | (1 <= 1))));
                                var_24 &= -6038;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
