/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_3 + 1] [i_2] [i_1] [i_0] = ((((max(-1, (~4294967295)))) ? 41103 : 1));
                                var_13 = (arr_10 [i_0] [1] [i_0] [17] [i_0] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 -= (~var_6);
    #pragma endscop
}
