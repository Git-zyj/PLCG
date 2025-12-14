/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222506
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
                arr_5 [i_0] [i_1] [4] = var_2;
                arr_6 [i_0] [i_1] [i_1] = (((((-(arr_2 [i_0] [i_0])))) ? ((((min((arr_1 [i_0]), 3516556599171123242))) ? ((-(arr_4 [i_0]))) : var_7)) : (((~var_0) ? (1586271047 < var_7) : (max(var_2, (arr_2 [i_0] [i_0])))))));
                var_12 = (min(var_12, (((~((((((arr_2 [10] [i_1]) ? (arr_2 [i_0] [i_1]) : var_2))) & (min((arr_4 [i_1]), var_10)))))))));
                var_13 ^= ((var_7 ? (((-(arr_2 [4] [i_1])))) : (arr_2 [i_0] [i_1])));
                var_14 = (min(((max((arr_1 [i_0]), -22553))), (((arr_1 [i_0]) ? var_9 : var_9))));
            }
        }
    }
    var_15 |= var_5;
    #pragma endscop
}
