/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_6 == var_7) ? (2003961012 ^ var_6) : var_5))) ? ((var_5 ? (max(var_5, 2003961012)) : (var_6 / 2003961013))) : var_9));
    var_11 ^= (((var_1 ? ((128 ? var_1 : var_4) : var_4))));
    var_12 += (((((255 ? var_4 : var_9))) && var_0));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (arr_5 [2]);
                var_15 = (((((-(arr_3 [9] [14])))) ? ((-2003961012 ? (((-(arr_6 [i_0] [i_0])))) : (arr_1 [i_1]))) : ((1729868526 ? (((var_2 ? 1729868536 : var_0))) : 9361190561121749558))));
                var_16 = ((((arr_0 [i_0]) & (((arr_4 [16]) ? (arr_6 [i_0] [i_0]) : var_3)))));
            }
        }
    }
    #pragma endscop
}
