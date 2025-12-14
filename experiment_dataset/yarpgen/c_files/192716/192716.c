/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((min(106, 59668))) ? var_3 : (-8 ^ 336352862))));
    var_16 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((arr_5 [i_0] [i_0] [i_0]) ? ((-var_5 >> (((((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : var_9)) + 762338898)))) : (((((arr_1 [i_0]) < (arr_1 [i_0])))))));
                var_17 = ((var_0 ? (((((((arr_5 [i_0] [i_0] [i_1]) ? -28 : 127))) <= (((arr_3 [2] [i_1] [i_1]) * (arr_2 [i_0] [i_1])))))) : (~1729447137)));
                var_18 = (max((((((var_6 / (-2147483647 - 1)))) ? var_11 : ((-14 % (arr_0 [i_0]))))), (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
