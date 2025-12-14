/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_11;
    var_14 = (+-98);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = var_2;
                var_16 = max((arr_0 [i_1]), (((~(arr_4 [i_0] [i_0] [i_1])))));
                arr_6 [1] [i_1] [i_1] = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] &= (~15);
                var_17 += ((6463140421347963736 ? (~9059703646000083750) : (min(var_5, (arr_7 [i_3 + 2] [i_3 + 2])))));
            }
        }
    }
    var_18 = (max(var_18, (((!(~11983603652361587879))))));
    #pragma endscop
}
