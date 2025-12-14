/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 32760;
    var_20 -= var_17;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 0));
                                var_22 = 1;
                            }
                        }
                    }
                    arr_15 [i_2] = 354;
                }
            }
        }
        var_23 = 7835515713322834954;
        var_24 *= 9223372036854775779;
    }
    var_25 -= var_11;
    #pragma endscop
}
