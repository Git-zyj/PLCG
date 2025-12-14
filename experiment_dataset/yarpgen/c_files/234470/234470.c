/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_4;
    var_18 += var_0;
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 &= (min(16939142518183901046, (((!((max(16939142518183901037, 2525952095))))))));
                                var_22 = 246;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (var_3 <= 596911307)));
    #pragma endscop
}
