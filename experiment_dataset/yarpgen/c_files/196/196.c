/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_4;
    var_12 *= var_3;
    var_13 = (min((!var_5), var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] = ((!(((~(arr_0 [i_0 - 1]))))));
                var_14 += ((((((min((arr_3 [9] [i_0]), (arr_3 [i_1] [i_0])))) ? (arr_3 [i_0] [i_1]) : (min((arr_3 [i_1] [i_0 + 1]), 4294967295))))) ? ((((max(61093, 84))) ? (arr_1 [i_0 + 2]) : 50692)) : (arr_0 [i_0 + 2]));
            }
        }
    }
    #pragma endscop
}
