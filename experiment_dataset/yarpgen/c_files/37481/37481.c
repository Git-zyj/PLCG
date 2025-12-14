/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_0 > (((((var_4 ? var_1 : var_4)) == (~var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((((2441572104802462658 > var_12) ? (((arr_2 [9]) ? (arr_2 [i_0]) : 0)) : ((~(arr_6 [i_0] [i_0])))))) ? (max(((~(arr_2 [i_0]))), (((arr_3 [13]) ? (arr_4 [i_0] [i_0] [i_0]) : var_12)))) : (arr_2 [i_0])));
                var_17 = (min(var_17, ((min(((~(~-2441572104802462673))), (-2441572104802462681 & 2147483647))))));
                arr_7 [i_1] [i_1] [i_1] = (max((arr_4 [i_0] [i_0] [i_0]), (((((arr_5 [i_1] [i_0] [i_0]) | 2441572104802462681)) * ((((-7938 == (arr_5 [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
