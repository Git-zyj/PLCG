/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = (arr_3 [i_0]);
                var_15 = (max(var_15, ((-(((212 ? 103 : 562949953421311)))))));
                arr_7 [i_1] = (max((min(var_7, (143 ^ var_9))), (arr_0 [i_1 - 1] [i_1 - 1])));
                var_16 *= ((min((~103), (var_14 & -45))));
                arr_8 [13] [i_1 + 1] [i_1 + 1] |= (max(23593, (~var_11)));
            }
        }
    }
    var_17 = (((!var_12) >= (((max(var_6, var_13))))));
    var_18 = (max((-127 - 1), (max((var_4 >> 0), (var_7 > 67)))));
    var_19 = (((-var_7 ? (2497601355926161768 >= var_12) : (var_6 <= 53415))));
    #pragma endscop
}
