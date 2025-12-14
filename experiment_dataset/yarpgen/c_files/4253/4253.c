/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (min((((-127 - 1) * 3908428255)), (((arr_1 [i_0 + 1]) * 0))));
                    var_14 ^= (max((max(-2673605169, -22)), 65535));
                }
            }
        }
    }
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_16 [i_3] = ((-((-(((arr_1 [7]) - -75))))));
                arr_17 [i_3] = ((((min(((min(-91, 3120075993))), var_4))) ? (!2147483647) : ((max(219, -97)))));
            }
        }
    }
    #pragma endscop
}
