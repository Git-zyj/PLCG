/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_8, var_9));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 -= (max(((max((max(-15159, var_13)), var_9))), (max((((arr_1 [i_1]) ? 1 : var_3)), (18867 != 2016)))));
                arr_4 [i_0] [i_1] = ((((((((arr_2 [i_0] [i_0]) | var_1)) & ((max(var_7, 15187)))))) ? ((((min(var_3, -514322865597242602)) | var_10))) : (min(((1073741823 & (arr_2 [i_0] [i_0]))), ((min((arr_0 [i_1]), var_2)))))));
            }
        }
    }
    #pragma endscop
}
