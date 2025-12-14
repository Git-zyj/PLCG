/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = var_13;
                                var_16 = -var_5;
                            }
                        }
                    }
                    var_17 = (max(var_17, (max((min((1129765452731948373 - 1129765452731948362), 0)), ((1129765452731948373 ? 3983241077266624552 : 1129765452731948383))))));
                    var_18 = ((min(var_5, 1)));
                }
            }
        }
    }
    #pragma endscop
}
