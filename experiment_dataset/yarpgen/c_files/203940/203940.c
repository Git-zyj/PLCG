/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((min(1048575, var_18)) ^ 65535))) ? (((4262838704 * var_11) ? (var_8 != -8975306775578770890) : var_11)) : (((((32128592 / 12977) >= 0)))));
    var_21 = var_7;
    var_22 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [6] [i_2] [i_2] [i_3] [i_3] [i_0] = 1;
                        arr_10 [i_0] = (((((1385355388 ? 17 : 65535))) || (arr_0 [i_0] [i_0])));
                    }
                }
            }
        }
        arr_11 [i_0] = ((4294967290 != (0 & 45987)));
        arr_12 [i_0] [i_0] = (((arr_5 [i_0] [i_0] [i_0] [i_0]) & var_3));
    }
    var_23 = (((min(-607, (16383 + var_19))) == var_16));
    #pragma endscop
}
