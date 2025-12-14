/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((((max(((var_6 ? (arr_3 [i_1]) : var_17)), -18120))) ? ((-(arr_5 [i_1 - 1]))) : (max((var_9 || var_6), (var_6 / var_5)))));
                    arr_12 [8] [i_0] [i_0] = var_7;
                    var_19 = -27183;
                    var_20 = (min(var_20, (~-5984478256302114678)));
                }
            }
        }
    }
    var_21 = -5984478256302114678;
    #pragma endscop
}
