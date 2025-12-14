/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 32765;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((((127 ? ((((arr_5 [i_1]) + (arr_4 [i_0] [i_0] [i_0])))) : var_8)) * ((((((-129 ? (arr_1 [i_0]) : var_10))) ? (~var_5) : ((8000560161148186826 ? -1 : var_7)))))));
                    var_13 = (max(var_13, (((((((arr_4 [i_2] [i_1] [i_0]) * (arr_4 [i_0] [i_0] [i_2])))) ? 105 : (((((arr_6 [i_0] [i_0] [i_1] [i_2]) ? var_2 : 9223372036854775807)) + ((((arr_7 [i_0] [i_2] [i_0]) ? (arr_4 [i_2] [i_1] [i_2]) : (arr_1 [i_0])))))))))));
                    var_14 = ((-26206 || ((min((arr_5 [i_1]), -121)))));
                }
            }
        }
    }
    #pragma endscop
}
