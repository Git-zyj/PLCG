/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((-(arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                    var_21 = (arr_2 [i_1]);
                }
            }
        }
    }
    var_22 = ((-(((((var_19 ? var_4 : var_2))) + var_3))));
    #pragma endscop
}
