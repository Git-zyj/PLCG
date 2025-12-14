/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [0] [0] = (-((2516750635 ? 123 : 1778216663)));
                var_17 = ((!((((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 4]) : 112)))));
                arr_6 [i_1] = 131;
            }
        }
    }
    var_18 = (!131);
    var_19 = max((133 && var_9), (!4294967277));
    var_20 -= var_8;
    #pragma endscop
}
