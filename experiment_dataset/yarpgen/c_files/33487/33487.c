/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 9223372036854775807));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((((var_15 * 0) ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1 + 1] [9]))), (((126 ? -740845969 : 105)))));
                var_18 = (((arr_4 [i_0] [i_1]) ? (((arr_1 [i_0] [i_0]) ? (((arr_6 [i_0] [5] [i_0]) ? (arr_0 [1] [i_1 + 1]) : -9223372036854775807)) : (((6 ? (arr_5 [i_0] [i_0] [i_0]) : 50))))) : (((var_13 % (-124 != var_8))))));
            }
        }
    }
    #pragma endscop
}
