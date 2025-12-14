/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] |= var_4;
                var_18 = (max(var_18, (((min(65535, (arr_0 [i_1 + 1])))))));
            }
        }
    }
    var_19 = (var_10 < 2104296822);
    var_20 = var_12;
    var_21 = 402653184;
    var_22 = var_12;
    #pragma endscop
}
