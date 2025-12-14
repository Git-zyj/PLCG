/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = 113;
                    var_18 = 7168;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 *= 60782;
                                arr_15 [i_1] [i_2] [i_1] [i_1] = 43059;
                                arr_16 [i_1] [i_1] [i_0] [i_1] [i_0] = 8995042075804237532;
                                var_20 = 1161405160376933482;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 ^= var_0;
    #pragma endscop
}
