/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (104 - 2400489631204553732)));
    var_15 = ((~(((!(-117 && var_4))))));
    var_16 = ((!((((~var_13) ? var_3 : ((var_11 ? 3262833608573010657 : -522860736)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (max((((min((arr_2 [i_0] [i_1 - 1]), (arr_0 [i_0]))))), (((min(807466768, -125)) / -3015))));
                arr_6 [i_0] [i_0] [i_0 + 1] = ((((var_10 ? (arr_0 [14]) : var_2)) ^ 195));
                var_17 ^= (min(((((((-735133527987536419 + 9223372036854775807) << (var_12 - 92)))) ? ((-735133527987536419 ? var_0 : (arr_4 [i_1 + 1]))) : (2689596372733859885 && -17168092))), (((!((min(4294967295, (arr_2 [i_1] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
