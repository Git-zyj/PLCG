/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 -= 3231519153;
                arr_6 [i_0] = 233;
                arr_7 [i_0] [i_0] = 4466643056386472255;
                var_19 = (min(var_19, 16268));
            }
        }
    }
    var_20 = var_13;
    var_21 = var_2;
    var_22 = var_4;
    var_23 = var_6;
    #pragma endscop
}
