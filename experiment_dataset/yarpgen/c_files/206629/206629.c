/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-(((3 || ((((arr_0 [i_1]) ? (arr_2 [i_0]) : -85))))))));
                var_17 = (max(var_17, (((206 ? -85 : -2147483647)))));
                var_18 = (((1320079781 ? 89 : 2147483647)) / -85);
                var_19 = (min(var_19, (((-((min((arr_2 [i_0]), -117))))))));
            }
        }
    }
    var_20 = ((var_8 ? var_2 : (((((-18 ? var_0 : 236))) ? ((min(var_0, var_11))) : ((var_3 ? -2147483640 : 127))))));
    var_21 = ((((((var_4 ? 89 : 166)))) ? ((((max(27, 0))) >> (254 - 237))) : 96));
    var_22 = var_5;
    #pragma endscop
}
