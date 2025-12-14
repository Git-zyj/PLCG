/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] = (max(-var_8, (((((var_8 ? var_6 : var_4))) ? (min(var_4, var_10)) : var_8))));
                        var_11 += ((29311 ? -30418 : 32911));
                        var_12 &= 29337;
                        var_13 = (min((2007633363731735329 & 1), var_0));
                        var_14 = (min((max((-29314 & 16439110709977816269), 1)), (((~21) ? 1 : ((var_2 ? var_2 : 18446744073709551615))))));
                    }
                }
            }
        }
        var_15 = min((((~34754) ? (((var_8 >> (var_1 - 49061)))) : (min(var_5, var_9)))), 1);
    }
    var_16 = var_7;
    var_17 |= -98;
    #pragma endscop
}
