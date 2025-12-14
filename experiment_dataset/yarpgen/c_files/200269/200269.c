/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = var_16;
        var_18 = (((arr_0 [i_0]) ? (196608 || -196609) : var_15));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = ((+(((arr_10 [i_1] [i_2 - 1] [i_3 - 2] [i_3 - 3]) | (arr_10 [i_2] [i_2 - 1] [i_3 - 2] [i_3 - 3])))));
                    var_20 = (max((arr_7 [i_1] [i_2] [i_3]), (arr_9 [i_1] [i_1] [i_2] [10])));
                }
            }
        }
        var_21 = ((~(min((min(2675549690, -4)), (max(-64, -196608))))));
    }
    var_22 = (min(45, (982015830 & var_10)));
    var_23 = (((var_4 ? (((min(1, var_7))) : ((196608 ? var_11 : var_8))))));
    var_24 = ((-(var_14 ^ var_14)));
    var_25 = var_0;
    #pragma endscop
}
