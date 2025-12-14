/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((!(arr_4 [i_0] [1])))))));
                var_18 = (((((arr_3 [8] [i_0]) ? -2595640831847014667 : (((~(arr_0 [i_0])))))) <= ((((-127 - 1) + var_8)))));
            }
        }
    }
    var_19 = var_3;
    var_20 = var_6;
    #pragma endscop
}
