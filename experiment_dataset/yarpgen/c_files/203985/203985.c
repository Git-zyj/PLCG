/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((var_0 ? (arr_2 [i_0] [i_0]) : (4172 || var_0)))) & (((((var_1 ? var_4 : (arr_1 [i_1])))) ? var_3 : ((min(var_8, var_1)))))));
                arr_6 [i_0] [12] [i_0] = (min(((max(var_7, var_0))), (arr_2 [i_0] [i_1 + 2])));
                arr_7 [i_0] [i_1] = (arr_4 [i_0] [i_0] [i_1 + 1]);
            }
        }
    }
    var_10 = (~70);
    var_11 = (min((min((var_9 ^ var_9), (max(var_7, var_1)))), ((max(var_7, -var_9)))));
    var_12 = (min((!var_8), ((var_1 << (~var_0)))));
    #pragma endscop
}
