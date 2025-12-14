/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 -= ((((0 * (arr_0 [i_0] [i_1]))) <= (arr_3 [i_0] [i_1])));
                var_17 = var_3;
                var_18 -= ((max(((!(-9223372036854775807 - 1))), (var_1 == 20073))) || (arr_4 [i_0]));
            }
        }
    }
    var_19 = var_0;
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_21 = (((((arr_8 [i_3] [i_2] [i_2]) ? (arr_8 [i_2] [i_3] [i_3]) : (arr_5 [i_2] [i_2]))) << (arr_7 [i_2] [i_2] [i_2])));
                var_22 = (((-(arr_6 [i_3] [i_2]))));
                arr_9 [i_2] &= var_15;
            }
        }
    }
    #pragma endscop
}
