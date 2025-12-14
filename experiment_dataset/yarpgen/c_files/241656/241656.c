/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_14 ? ((1412353090 ? var_0 : var_3)) : 1412353096);
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [16] [11] [i_0 - 1] = (((((!(~3679084838)))) + (arr_4 [0])));
                var_20 = ((+(min((~3), ((var_16 ? var_15 : -1412353096))))));
            }
        }
    }
    var_21 = (-((((-2147483646 ? 6210 : var_9)) + ((var_2 ? var_0 : var_14)))));
    #pragma endscop
}
