/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((((var_11 ? ((-(arr_2 [i_0] [i_0]))) : (arr_0 [i_0] [6])))) ? -var_4 : var_10));
                var_15 = (max(var_15, (((-(min(((40830 ? 25110 : var_6)), (((25114 ? (arr_0 [i_0] [i_0]) : (arr_2 [3] [3])))))))))));
            }
        }
    }
    var_16 = ((var_4 ? (max(((-25111 ? 25129 : var_6)), var_9)) : ((((var_5 ? 46585 : var_5))))));
    var_17 += ((~(max((var_1 + var_3), (var_10 + -3925244952867954322)))));
    var_18 = var_12;
    #pragma endscop
}
