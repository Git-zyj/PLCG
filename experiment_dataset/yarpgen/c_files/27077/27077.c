/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((var_0 & (arr_4 [i_0] [i_0] [i_1 + 1])));
                    arr_7 [6] [i_2] [i_2] [7] = ((((min(1304, (arr_5 [i_1 - 1] [i_1] [i_1 + 1])))) ? (((4210960618039154806 || 14235783455670396809) ? (arr_2 [i_1 + 1] [i_1 + 1]) : 4210960618039154806)) : ((min((arr_5 [i_0] [i_2] [i_2]), -1297)))));
                    var_12 = (((var_3 / ((-1305 ? (arr_6 [i_2]) : var_1)))));
                }
            }
        }
    }
    #pragma endscop
}
