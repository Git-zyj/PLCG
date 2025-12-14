/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((var_16 ? var_12 : var_12)), ((var_17 ? var_9 : -6942))))) ? (((((1 ? 4194303 : 56953))))) : var_1));
    var_20 = ((((var_5 % var_5) >> (var_2 - 3054056456))) + (~var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] = (arr_9 [i_0] [i_1] [4] [i_2]);
                        var_21 = ((var_17 ? (-32767 - 1) : (arr_1 [i_0])));
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_2 + 1] = (((4290772998 ^ 23080) ? var_15 : (26 || 1)));
                    }
                }
            }
        }
        arr_12 [10] = (arr_5 [i_0] [i_0]);
        var_22 *= ((4290772993 == (arr_0 [i_0])));
    }
    var_23 *= (6829791382040053122 && 4194302);
    #pragma endscop
}
