/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-20123 ? -23 : var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_3 [i_1] [i_1])));
                    var_22 = ((arr_1 [i_2]) ? (arr_6 [i_0] [i_1] [i_0] [i_2]) : ((((arr_3 [i_0] [i_0]) ? var_5 : var_2))));
                    arr_9 [i_1] = var_13;
                    var_23 = (max(var_23, ((~(~var_17)))));
                }
            }
        }
    }
    #pragma endscop
}
