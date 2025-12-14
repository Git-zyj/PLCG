/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (~4883936676890849089);
    var_18 = (((((((max(var_11, var_2))) != (min(1, var_9))))) >> ((((-(min(var_1, 1)))) - 4294967274))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 -= (max((arr_0 [i_2]), (max(1, 4778018020643357156))));
                    arr_9 [i_0] [5] [i_0] [i_2] = ((1 + ((~(arr_5 [i_2] [i_1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
