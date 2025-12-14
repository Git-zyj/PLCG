/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(max((max(var_6, var_13)), var_18))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((max(7347167585190276496, 4294967295)), (((~(~-14999))))));
        arr_3 [i_0] [i_0] = (max(var_15, ((var_15 ? 12698747560890158535 : var_8))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~(((((var_7 ? var_18 : 14998))) ? -14998 : ((max(-15012, -15000))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_20 = (-4177566048461821525 || var_14);
                    arr_14 [i_3] [i_3] [i_1] [i_1] |= (((9223372036854775807 ? 15871191603154010920 : -14998)));
                }
            }
        }
    }
    #pragma endscop
}
