/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((1429698022273198598 ? 15 : 17017046051436353017));
        arr_2 [i_0] = 17017046051436353025;
    }
    var_14 = (min(var_14, 17017046051436353018));
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_16 *= ((!((min(var_2, ((min(1, 1))))))));
                arr_9 [i_1] [i_2] [i_2] = (arr_8 [i_1] [i_2]);
                var_17 = (max(var_17, ((((arr_1 [i_1] [i_2]) ? (min((arr_6 [i_2] [i_2]), (((arr_7 [i_2] [i_2]) ? 1429698022273198576 : var_12)))) : var_6)))));
                arr_10 [i_1] [i_1] [i_1] = (max(1, ((min(1, 34581)))));
            }
        }
    }
    #pragma endscop
}
