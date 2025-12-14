/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((1484901731 ? 1 : -3123192410719043408))))));
    var_20 = (((!-0) ? var_15 : (!1102006888922034066)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = min(32834, 0);
                var_21 += (255 < 85);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_22 = (min(var_22, var_5));
                    var_23 = (min(var_23, ((((min((min(14119889858750972607, 22)), var_16)) - (!27567))))));
                }
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    var_24 ^= (((arr_6 [i_0] [10]) & var_2));
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((!((((arr_7 [i_0 - 2] [i_0 + 2]) % 7255517335416832109)))));
                }
                arr_11 [i_0 + 2] [i_1] [i_1] = 1;
            }
        }
    }
    var_25 *= ((-(((var_14 > var_16) ? 68719476704 : (var_7 > var_16)))));
    #pragma endscop
}
