/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!((min(var_10, 926429189))))));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 += max((arr_4 [i_0] [i_1] [i_1]), (((~(arr_4 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_0] [i_0] = ((-((11520 ? (arr_2 [i_0] [i_1]) : var_1))));
                arr_8 [3] [i_0] [i_0] = var_3;
                var_14 -= (((-(arr_6 [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_15 = ((((((~var_5) - ((var_9 ? -4388910680231168615 : -5971955601271911382))))) ? (!236) : (~48600)));
    var_16 = (max(31, var_2));
    #pragma endscop
}
