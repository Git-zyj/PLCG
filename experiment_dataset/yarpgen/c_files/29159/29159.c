/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = min(((((max((arr_3 [i_0] [i_0]), (arr_2 [i_1]))) == (((var_4 ? 83 : var_13)))))), (arr_1 [i_1]));
                    var_15 = ((!(arr_6 [i_2])));
                }
            }
        }
    }
    var_16 = var_13;
    var_17 = var_10;
    #pragma endscop
}
