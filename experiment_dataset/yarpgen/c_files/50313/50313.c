/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((((6438615053292180608 ? (arr_6 [i_0] [i_0] [i_0] [i_2]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) + (min(var_1, (arr_6 [i_2] [i_2] [i_2] [i_2])))));
                    var_14 = (max(-var_4, (max(var_9, (arr_5 [i_0] [i_0] [i_0])))));
                    var_15 = (((((arr_2 [i_2]) ? var_8 : (arr_2 [i_0]))) != (~74)));
                }
            }
        }
    }
    var_16 = (var_7 && var_0);
    var_17 = var_10;
    #pragma endscop
}
