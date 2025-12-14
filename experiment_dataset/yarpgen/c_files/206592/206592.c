/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 &= ((~(arr_8 [15] [i_1] [i_2])));
                    arr_10 [4] &= (((arr_6 [i_0]) ? 59 : ((max((arr_6 [i_0]), var_7)))));
                }
            }
        }
    }
    var_14 = ((~((min(var_11, var_10)))));
    var_15 = var_9;
    #pragma endscop
}
