/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min(((max(69, 110))), 4));
    var_14 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((-(min(-32753, 2)))));
                var_16 = 2599066231;
                var_17 ^= (((((-(max(-878349451, var_9))))) + (max(var_8, 13073874925599970625))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 |= ((!((min((((arr_4 [i_0] [i_0] [i_3]) * 2019)), (arr_6 [i_2] [i_2] [i_2]))))));
                            var_19 = (arr_1 [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_1] [2] [i_1] [2] = (max(-36, (((((8257879398624534088 ? 1 : -29833))) ? 6117024597003243780 : 68729293))));
                                var_20 = ((-((23151 ? 287104476244869120 : 249))));
                                arr_18 [i_0] [i_1] [i_4] [i_1] [i_1] = (max(-4331006445883458202, 2147483640));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= 7853469828529102409;
    #pragma endscop
}
