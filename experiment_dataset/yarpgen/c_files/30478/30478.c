/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((11564 ? var_8 : var_5));
    var_17 = (max(var_17, ((max(((-((max(7800, var_13))))), (!var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((!((((arr_3 [i_1] [i_0 + 2]) ? (((arr_1 [i_1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_1]) : (arr_1 [i_0 + 3]))) : (((arr_0 [i_1]) ? var_2 : (arr_1 [8]))))))));
                var_18 ^= 3;
                var_19 ^= var_0;
            }
        }
    }
    #pragma endscop
}
