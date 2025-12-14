/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max((((((181 ? 255 : 2147483628))) ? ((var_8 ? var_7 : var_14)) : var_14)), var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_19 = (min(var_19, var_9));
                        var_20 = var_11;
                        var_21 = ((-((max((arr_8 [i_1] [17] [i_3]), -118)))));
                        arr_15 [i_0 + 1] [i_1] [i_1] [i_3] [i_0] = (arr_9 [i_0] [i_1]);
                    }
                    arr_16 [i_1] = arr_6 [i_1] [i_1] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
