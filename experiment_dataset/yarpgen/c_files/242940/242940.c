/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 ^= ((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))));
                arr_4 [7] [i_0 + 1] [i_1] |= ((~(max((((arr_1 [i_1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0]))), (var_1 | var_12)))));
            }
        }
    }
    var_21 += (min(((min((17016 ^ 23494), (~23498)))), 224936798));
    var_22 &= (max((min(-23494, 52684)), -23494));
    var_23 = var_4;
    #pragma endscop
}
