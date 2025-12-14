/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3773;
    var_19 = ((var_16 ? (13019445222128586771 * 1043148088) : (17022145169845990455 / 17022145169845990455)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = ((~(~-3762)));
                    var_20 = (min(var_20, 32));
                }
            }
        }
        var_21 = (((min(((61763 ? var_3 : (arr_1 [i_0]))), 1)) * (min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), var_8)), (arr_7 [i_0] [1] [i_0])))));
    }
    var_22 = (max(var_13, ((var_17 ^ ((55927 << (222 - 210)))))));
    #pragma endscop
}
