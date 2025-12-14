/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (max((min(var_14, -var_12)), var_15));
    var_19 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((-(arr_6 [i_0] [i_0])));
                    var_20 |= arr_6 [i_1] [i_2];
                    arr_10 [i_0] [i_0] [i_0] [i_0] |= ((min((max(var_10, 255)), (arr_7 [i_1] [i_0]))));
                    var_21 = (!99);
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}
