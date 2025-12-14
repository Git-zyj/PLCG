/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_15);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max((arr_2 [2]), ((min(161, var_15)))));
                    arr_9 [2] [i_0] [i_1] [i_2] = (max((!0), (arr_1 [i_0 + 1] [i_0])));
                    arr_10 [i_0] [i_0] [i_0] = ((((20074 ? var_14 : -2147483628)) | ((min((min(var_16, var_3)), (arr_1 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (~14);
    #pragma endscop
}
