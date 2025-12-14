/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max((max(var_6, ((max(var_8, 0))))), 55470));
    var_14 += ((var_12 % ((var_6 ? ((min(var_10, var_2))) : ((max(var_2, 65519)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 &= (min(((~(arr_3 [i_0 - 1] [i_0] [3]))), ((~(arr_2 [i_0 + 1])))));
                var_16 = (max(var_16, ((min(var_10, (min(var_2, var_12)))))));
                arr_7 [i_0] [i_0] = (min(((~((min(198, var_11))))), (((min(64825, 65535))))));
            }
        }
    }
    #pragma endscop
}
