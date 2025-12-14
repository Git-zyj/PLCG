/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_6 ? var_8 : var_4)))));
    var_14 = ((1211419224 ? 3 : ((min(-1211419224, var_2)))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_15 *= 30704;
        var_16 = -36028797018963968;
        var_17 = (arr_0 [i_0]);
        var_18 = var_3;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (1211419224 / -31389);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 -= 168;
                    var_20 = 23380;
                }
            }
        }
        arr_12 [i_1] = var_10;
    }
    var_21 += ((210 ? 20031 : -24105));
    #pragma endscop
}
