/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_13 = (max((min((arr_1 [i_0]), (min(var_11, 0)))), 0));
        var_14 = var_8;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 &= ((-28759 ? 255 : ((0 ? 0 : 2787712936))));
                    var_16 |= (max(((min(2918304947, 2787712952))), (max(((max((arr_6 [i_0] [i_2] [i_2] [14]), 1))), var_12))));
                    var_17 -= 2;
                    var_18 -= (max(0, -21));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_19 = -var_0;
        arr_11 [i_3] [i_3] = ((-(arr_4 [i_3 + 1])));
    }
    var_20 ^= var_9;
    var_21 -= ((-9 ? -8125 : 13225611840077361952));
    #pragma endscop
}
