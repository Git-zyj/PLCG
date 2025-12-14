/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (max(((min((-32767 - 1), (arr_2 [i_0])))), var_12));
                var_17 *= ((min(var_15, (max(var_1, var_10)))));
            }
        }
    }
    var_18 = (~-5822235861029013283);
    #pragma endscop
}
