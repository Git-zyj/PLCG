/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1]))) - (((arr_4 [i_1 - 1] [9]) ? 719650202 : (arr_4 [i_1 - 1] [i_1 - 1])))));
                var_11 &= (((((1379067008 | (((arr_2 [i_1 - 1]) ? (arr_4 [9] [i_1]) : (arr_1 [0])))))) ? ((18446744073709551591 - (1 | 0))) : (!var_5)));
            }
        }
    }
    var_12 |= (var_9 | var_4);
    #pragma endscop
}
