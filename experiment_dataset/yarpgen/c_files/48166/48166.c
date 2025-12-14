/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((var_7 < ((var_2 ? var_7 : var_7)))))) + var_1)))));
    var_11 = ((2838532438688266570 ? (~144115188075855871) : ((39 ? var_3 : 144115188075855864))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [2] [5] = -0;
                arr_6 [i_1] [i_0 - 1] [8] = (((((-(arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2])))) ? (arr_1 [i_1]) : (5985810396633719248 && 5)));
                var_12 *= (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                arr_7 [2] [i_1] = (arr_3 [i_0] [i_0] [3]);
            }
        }
    }
    #pragma endscop
}
