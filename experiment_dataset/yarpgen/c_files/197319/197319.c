/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (max(9218486250656129318, 9228257823053422305));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (((((9228257823053422300 ? 3519861169024821492 : 61837)) ^ 512)));
                    var_18 &= (arr_7 [i_0] [i_0]);
                    arr_9 [i_2] [i_1] [i_1] = (-(((((min(var_7, (arr_5 [i_0] [i_0] [i_0]))))) * (min((arr_7 [i_0] [i_0]), 9735)))));
                    arr_10 [i_0] [10] [18] [1] = (((((var_4 & ((((arr_6 [i_0] [i_0] [i_0]) && 46864)))))) < (((arr_7 [i_0] [i_1]) ? (((((arr_4 [i_0] [i_1]) || 72)))) : (arr_4 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
