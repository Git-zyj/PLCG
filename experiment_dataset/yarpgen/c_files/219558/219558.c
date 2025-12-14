/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_4, 255))) ? (-9223372036854775807 - 1) : (var_12 && 419214683263955413)));
    var_16 = ((((((min(219, var_5)) || -var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = 255;
                var_18 = ((-83 ? var_13 : (max((var_3 && 255), 36028797018963967))));
                var_19 = (((((5581530589187551962 << (((arr_2 [i_0]) - 1905158031542870699)))) <= (arr_5 [15] [i_1]))) ? (((!240) ? ((var_6 ? var_6 : var_3)) : (~var_4))) : ((-(((arr_1 [i_1]) ^ 1202339921103385849)))));
            }
        }
    }
    #pragma endscop
}
