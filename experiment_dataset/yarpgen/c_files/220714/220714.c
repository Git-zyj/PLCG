/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((!((!(9223372036854775794 && -3884061329048073464)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 += 32767;
                            var_14 ^= 0;
                            var_15 -= (!(((max(49920, var_8)))));
                        }
                    }
                }
                var_16 = ((var_9 ? ((((arr_6 [i_1] [2] [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))) : (min(31270, 673212689284302604))));
            }
        }
    }
    var_17 ^= (((((min(((max(-28, 34269))), (-127 - 1))) + 9223372036854775807)) << var_11));
    var_18 += var_2;
    #pragma endscop
}
