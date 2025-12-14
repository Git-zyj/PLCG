/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (~var_16);
    var_19 = 7769158526082854781;
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((-288230376151711743 ? (max((max(10677585547626696811, (arr_4 [i_1] [i_1]))), (max((arr_4 [i_0] [i_1]), var_3)))) : ((min(2147483647, ((max(7944, (arr_2 [i_1] [i_2])))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((max(12684, -31204)));
                }
            }
        }
    }
    #pragma endscop
}
