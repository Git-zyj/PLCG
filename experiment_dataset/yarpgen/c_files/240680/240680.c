/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = 4294967295;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((2244580445 ^ ((((max(24576, (arr_2 [i_1] [i_2])))) ? (arr_4 [i_2] [i_1]) : ((17491 ? (arr_4 [i_0] [i_1]) : var_7))))));
                    var_17 = (min(var_17, var_10));
                    var_18 = var_9;
                }
            }
        }
        arr_9 [i_0] = (min(193, (!5686694169225732414)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_19 = var_14;
        var_20 ^= var_9;
    }
    #pragma endscop
}
