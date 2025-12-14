/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((((((max(var_4, -5326478843500869400)) + 9223372036854775807)) << (((var_3 + 144) - 45))))) / (((((var_18 ? var_2 : 0))) ? var_7 : 88)))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 *= (max(((min(((2826664290 ? (arr_0 [i_0]) : (arr_1 [i_0 + 1]))), (arr_0 [i_0 - 1])))), (((78 ? 4938569360667084103 : 3335145958)))));
        var_21 -= (((!-231) == (((arr_1 [14]) ? ((0 ? 2046 : 789)) : (arr_0 [7])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0 + 2] [i_0 + 2] [i_1 - 3] [i_2 + 2] [i_1] = ((~(((((-335709127 + 2147483647) << (959821333 - 959821333))) << (((((~26544) + 26557)) - 12))))));
                        arr_10 [i_3 - 2] [i_2] [i_2] [i_0 - 1] &= (max(224, ((8755 >> (((~-354520461) - 354520432))))));
                    }
                }
            }
        }
        var_22 ^= (((arr_1 [i_0 + 2]) / (-32767 - 1)));
    }
    #pragma endscop
}
