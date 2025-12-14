/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max((max(var_2, (min(var_8, var_8)))), (((-9223372036854775807 - 1) ? 49 : 126))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2 + 3] = (min(((~(arr_5 [i_0] [i_1] [i_2] [i_0]))), (arr_5 [i_0] [i_0] [i_1] [i_0])));
                    arr_8 [i_0] = ((-(((!(((9223372036854775779 ? (arr_1 [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_2 - 3] [i_0])))))))));
                    var_13 -= ((((((arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 3]) + var_6))) ? (arr_2 [i_0] [i_2 + 4] [i_2 - 1]) : ((max((arr_2 [i_0] [21] [i_2 - 1]), -67)))));
                }
            }
        }
    }
    #pragma endscop
}
