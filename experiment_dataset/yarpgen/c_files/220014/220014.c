/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min(((var_2 ? (0 ^ var_0) : -0)), var_7));
    var_17 = (min(var_12, (((!0) ? -1 : var_13))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_4 [i_0]) ? (arr_4 [i_0]) : -1743028556))) * -7684173849720400811));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = (((((arr_0 [i_0] [i_0]) & ((var_9 + (arr_4 [i_0]))))) >= (!-17)));
                }
            }
        }
    }
    var_19 += (((~412877187) || (((-2862 ? (~var_4) : (~var_9))))));
    var_20 += var_2;
    #pragma endscop
}
