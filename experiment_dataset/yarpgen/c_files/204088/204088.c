/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] = ((-(((-1 <= (~6161739150738648993))))));
                    var_18 = -220;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [16] [i_4] [i_3] [16] [i_1] [i_0] = (max(60, 13));
                                var_19 = (max(var_19, 15211326497056389794));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_6;
    #pragma endscop
}
