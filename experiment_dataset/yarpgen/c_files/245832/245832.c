/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (arr_4 [i_0] [i_0]);
                var_11 = (max(var_11, (((((min((arr_3 [i_0]), (arr_3 [i_0])))) ^ 83)))));
            }
        }
    }
    var_12 = ((((((-32767 - 1) ? 16413701074593964004 : var_6)) & var_0)) >> (min((min(1509547811, 1677306475707091155)), var_2)));
    #pragma endscop
}
