/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 262143;
    var_19 = (((var_9 ? (var_5 || var_11) : (!-5247))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max((!-2147483635), ((var_14 * (888793223 / -23)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = ((!(!-var_14)));
                                var_22 = (var_1 > 77);
                                var_23 -= var_0;
                                var_24 = (min((((~13861753843972026248) ? var_3 : 114)), var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 &= var_16;
    #pragma endscop
}
