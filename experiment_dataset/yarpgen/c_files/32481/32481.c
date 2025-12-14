/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_9 ? 107 : 206))) ? 1 : 39));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((((-1553884179 ? -985498413411464568 : var_6))) / (((((var_4 / 17944029765304320) || (((var_8 | (arr_1 [i_0])))))))));
                var_19 = (((((+((1 ? (arr_0 [i_0]) : var_9))))) ? (((min(0, (arr_3 [i_1]))))) : (((((arr_1 [4]) != var_14)) ? (arr_2 [i_1]) : (((arr_2 [i_1]) << (((-17400 + 17428) - 24))))))));
                var_20 ^= ((!((!(((0 ? var_14 : var_14)))))));
            }
        }
    }
    #pragma endscop
}
