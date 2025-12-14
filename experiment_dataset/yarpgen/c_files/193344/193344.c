/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (max((((arr_4 [i_1] [i_2 - 1] [i_1] [i_1]) ? (arr_4 [i_0 + 1] [i_2 + 1] [i_0] [i_0 + 1]) : var_10)), ((~(arr_5 [i_2 + 2] [i_2 - 2] [6] [14])))));
                    var_16 = ((!(((91030295 ? 134201344 : -7115)))));
                }
            }
        }
    }
    var_17 += ((4160765930 ? (!var_1) : (min(var_6, var_3))));
    var_18 = ((-((-(max(var_4, var_12))))));
    var_19 = (min((!var_14), (max(var_13, var_0))));
    #pragma endscop
}
