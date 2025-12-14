/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 += ((~(((!var_12) ? (((max((arr_3 [i_0] [i_0]), -21840)))) : (~var_16)))));
                    var_20 = (min((arr_5 [i_0] [i_0] [i_1] [i_2]), (min(((min(-3534, 8513827772652576025))), (min(var_7, (arr_6 [i_0] [i_2])))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((((min(var_8, (-21831 && var_7)))) ? (min((~-1292564099113124627), var_8)) : ((((!35) | ((max(110, -21840)))))))))));
    var_22 = ((-(~var_14)));
    #pragma endscop
}
