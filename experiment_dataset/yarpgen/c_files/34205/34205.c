/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = 0;
                arr_6 [i_0] [i_1] = (var_1 ? (arr_2 [i_0]) : (((((98 ? 9574818380343286598 : var_7))) ? (min(50012, 3467237063)) : (((var_7 ? 31 : 6521))))));
                arr_7 [i_0] [2] &= (min((((((var_1 ? (arr_0 [i_0]) : 4))) ? (arr_1 [12]) : (arr_4 [8] [i_0 - 1] [i_0 - 1]))), ((((arr_4 [12] [i_1] [i_1]) <= (min(var_2, 27)))))));
                arr_8 [i_0] [1] [i_1] = ((((min(((((arr_0 [i_0]) ? var_9 : 1))), ((4 ? 9587971561572994373 : 9587971561572994373))))) ? (min((arr_1 [i_0]), ((-14614 ? (-127 - 1) : (arr_0 [i_0]))))) : (((((4294967295 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (127 | -14614) : (min(2011797998, 0))))));
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
