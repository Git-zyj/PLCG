/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_4 [i_1] [i_1] [i_1]);
                arr_6 [i_0] = ((~(arr_4 [i_0] [i_1] [i_0])));
                arr_7 [i_0] = -8486760986261796096;
                arr_8 [i_0] [i_0] = 29482;
                arr_9 [i_0] [12] [i_0] = (min((arr_3 [i_0]), -29469));
            }
        }
    }
    var_19 = var_9;
    var_20 = var_2;
    #pragma endscop
}
