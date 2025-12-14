/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((2027749819 / -434720774), ((49 + (~381413915)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1 - 2] [i_1] [21] = (max((((4294967295 ? (arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 4]) : 0))), (((((max(-62, 255)))) | (min(var_7, (arr_0 [i_1])))))));
                arr_5 [21] [i_1 - 1] [i_1 - 4] = var_19;
            }
        }
    }
    var_21 = (min(var_13, ((var_9 * (~var_9)))));
    var_22 = (-612585282 % var_10);
    var_23 = ((var_3 ? var_19 : (max((~-1), var_8))));
    #pragma endscop
}
