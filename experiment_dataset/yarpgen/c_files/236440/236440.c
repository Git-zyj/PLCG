/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-1 == 16);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((-(((((((arr_1 [7]) / var_3))) != 11837230563707842745)))));
        arr_4 [i_0] = ((8320411755253457834 ? 101 : 15));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = 11;
                    var_17 &= ((-((max(20353, 0)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_18 = ((120 ? 103 : (max((((-13 ? 2960139473 : -2303248338526068852))), (max((arr_15 [17] [i_4] [8] [i_4]), -24))))));
                                var_19 ^= (min(4294967295, 152));
                                var_20 = ((((arr_9 [i_3 + 1] [i_3 - 1] [i_3]) ? 58720256 : 68)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
