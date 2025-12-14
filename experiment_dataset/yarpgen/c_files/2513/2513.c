/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_4, ((var_15 ? var_6 : ((286102190 ? var_3 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [9] [i_0] = (((min(((min(-286102190, (arr_1 [i_1])))), 1576548677)) / (max(2718418648, 58))));
                arr_5 [i_0] [i_1] [i_1] = ((((~(arr_1 [i_1]))) * (4309045699763606300 == 1576548684)));
            }
        }
    }
    var_17 = 105;
    #pragma endscop
}
