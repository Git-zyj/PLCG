/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (((((-127 - 1) + 2147483647)) << (((-79 || var_7) - 1))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((((-70 / (-127 - 1))) <= (91 >= 127))))));
                                var_15 = (((-1 > 69) / 127));
                                var_16 -= (((((((arr_6 [5]) + 9223372036854775807)) << (79 - 79))) | 127));
                                var_17 = 127;
                            }
                        }
                    }
                }
                var_18 = (((-9223372036854775807 - 1) / (-127 - 1)));
            }
        }
    }
    var_19 = 98;
    #pragma endscop
}
