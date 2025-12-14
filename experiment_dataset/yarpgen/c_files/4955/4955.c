/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (((min(var_3, -var_1)) ^ 1073741824));
                    arr_6 [i_2] [i_0] [i_0] [i_0] = (((!var_4) ? 38821 : 43));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((!((min(var_2, var_1)))));
                }
            }
        }
    }
    var_11 = ((var_2 ? (min(var_3, (max(var_7, 11240450020630073879)))) : (((((var_4 ? var_7 : var_0)))))));
    var_12 = var_2;
    #pragma endscop
}
