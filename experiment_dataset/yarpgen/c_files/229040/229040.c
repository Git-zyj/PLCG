/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-1517650250 <= (((var_1 / -2277274161385979766) * (var_3 % var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [1] = (~(((arr_0 [i_0]) ? 1 : (max(0, 15)))));
                var_14 = (((arr_4 [i_0]) ? (13545306116695698670 || 62660) : (((((arr_4 [5]) / 1)) / (arr_3 [i_0])))));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
