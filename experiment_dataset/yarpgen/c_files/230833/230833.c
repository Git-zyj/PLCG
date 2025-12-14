/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = ((var_2 != ((max(119, 109)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_21 += ((((min((var_11 ^ var_15), 127))) ? ((((arr_0 [i_0]) * (!230)))) : (((arr_3 [6]) >> (((arr_3 [i_1 - 3]) - 106852162409173095))))));
                var_22 = (((var_11 > (arr_1 [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}
