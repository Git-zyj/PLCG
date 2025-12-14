/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((-(arr_1 [i_1])))) ? (((arr_0 [i_1 - 2]) ? 15 : var_12)) : ((var_4 | (((-(arr_5 [i_1] [i_1]))))))));
                arr_8 [i_1] = ((((((-2147483630 | (arr_5 [i_1] [i_1]))) || (50223 || 231026962)))));
            }
        }
    }
    var_18 = ((~(((((var_7 ? var_9 : var_9))) ? (829417297 ^ var_2) : ((2712709921 ? var_4 : var_4))))));
    #pragma endscop
}
