/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 4294967295));
                arr_6 [i_0] = ((((((!(arr_4 [i_1] [i_1 + 1]))))) > (max(157, (arr_4 [i_1] [i_1 + 1])))));
            }
        }
    }
    var_18 = (min(var_16, 127));
    #pragma endscop
}
