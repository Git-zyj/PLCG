/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((0 ? (((arr_3 [i_0]) ? (min(2442432625, 176)) : (arr_1 [i_0]))) : (((-570718592 ? (!var_10) : ((1006632960 ? 24 : var_2)))))));
                var_21 ^= (((var_5 ? var_0 : (min(87, var_0)))));
                var_22 = (((((((((arr_2 [i_0] [i_1]) << (12852 - 12850)))) ? ((41174 ? (arr_0 [i_0]) : (arr_3 [i_0]))) : (132 <= 255)))) ? (max((arr_2 [i_0] [i_1]), (max(1692829534, 2665262350)))) : (arr_0 [i_1])));
            }
        }
    }
    var_23 = ((~((var_11 ? ((max(176, 181))) : var_1))));
    var_24 = (-((var_9 ? ((var_2 ? 79 : var_5)) : ((min(3499371148, 1203103254))))));
    var_25 = -26328;
    #pragma endscop
}
