/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(2882757939, 142056590));
    var_21 = ((!((min(var_19, (2882757946 || var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = ((var_13 >> (((((((arr_0 [7]) + 9223372036854775807)) >> ((((1412209364 ? (arr_4 [i_0] [i_1]) : (-127 - 1))) + 61)))) - 38357))));
                arr_5 [0] |= ((-(~var_10)));
            }
        }
    }
    #pragma endscop
}
