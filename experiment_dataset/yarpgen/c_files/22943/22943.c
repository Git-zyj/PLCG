/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(var_13, (max(var_7, 5737456637110847275))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] = (arr_2 [i_1 - 1]);
                var_21 = (min(var_21, ((min(var_9, var_19)))));
                arr_6 [i_0 - 1] [i_0] [i_1 + 1] = (max((max(((5042173130074599273 << (13404570943634952352 - 13404570943634952296))), 1)), (arr_1 [i_0 + 1] [i_0])));
                arr_7 [i_0] [i_0] = 254;
            }
        }
    }
    var_22 = ((((((~1) ? ((min(var_4, var_5))) : (!0)))) ? (((((min(var_19, 5042173130074599254)) <= ((min(var_17, var_1))))))) : 8589934591));
    #pragma endscop
}
