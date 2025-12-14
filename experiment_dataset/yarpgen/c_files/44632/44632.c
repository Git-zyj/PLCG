/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((((-86 + 2147483647) << (1 - 1))) > ((min(1, var_7)))));
                arr_4 [i_1] [6] = ((((max(var_5, var_7))) ? (((var_1 << (var_3 - 8153454739277291652)))) : var_10));
                var_13 = ((((-(arr_2 [i_0] [i_1] [2]))) + 9223372036854775807));
                var_14 -= -27952;
            }
        }
    }
    var_15 &= 17951126467441750398;
    var_16 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_13 [i_3] = 80;
                arr_14 [i_3] = (-(max(var_10, (arr_5 [i_2] [i_3]))));
                var_17 = ((var_1 ? (((arr_9 [i_2] [i_2] [i_2]) ? (44591 & 16720) : (((arr_6 [i_2]) & var_4)))) : 758632676));
            }
        }
    }
    #pragma endscop
}
