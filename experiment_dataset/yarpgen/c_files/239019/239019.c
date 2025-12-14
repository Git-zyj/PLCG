/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = -1402766242;
                    var_18 += (~var_14);
                    var_19 = (min(var_19, (((-19651 == (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_20 += -1402766242;
    var_21 = (max(var_21, ((var_13 ? ((-(var_1 | 2855332098219278862))) : ((var_1 / (var_6 + 8737993999179221274)))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_12 [i_4] [i_3] [i_3] = ((1402766241 ? (min(2147483638, var_4)) : (!-2855332098219278873)));
                var_22 = ((((-19626 ? (~2147483638) : -21835))) ? (((arr_2 [i_3 - 1] [i_3 - 1]) | -1402766249)) : (((524160 ? (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : -109))));
                arr_13 [i_4] [i_3] [i_3] = var_9;
            }
        }
    }
    #pragma endscop
}
