/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 += ((var_4 > ((((-9223372036854775807 - 1) * (((min((arr_2 [i_0]), var_3)))))))));
                            var_15 += (-9223372036854775807 - 1);
                        }
                    }
                }
                var_16 = (max(var_16, 255));
            }
        }
    }
    var_17 = (min((((min(-3, 9223372036854775807)))), (-9223372036854775807 - 1)));
    var_18 = (max(var_18, 9223372036854775797));
    #pragma endscop
}
