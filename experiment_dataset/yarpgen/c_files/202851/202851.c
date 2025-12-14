/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (max(var_10, var_2));
        var_11 = (var_7 - var_6);
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_12 = ((6060157816621702455 ? 1745736756 : 156));
                        var_13 *= (((((-16 ? 15321509794796774991 : -32763))) ? var_1 : ((var_2 ? var_5 : var_1))));
                        arr_14 [i_4] [i_2] [i_2] [i_4] [4] = var_0;

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            arr_18 [i_1] [18] = (((((var_4 ? var_3 : var_9))) ? var_2 : (((var_9 ? var_5 : var_0)))));
                            var_14 = ((var_5 ? ((var_2 ? var_9 : var_1)) : var_3));
                            var_15 = ((-16 ? ((((var_7 < (var_0 == var_0))))) : (((((354239901 ? 2823662398129998490 : 111))) ? var_6 : (var_8 + var_4)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_16 -= var_0;
                            arr_23 [i_1] [i_6] [1] [i_1] [i_1 + 2] [i_6] [i_1 + 1] = 65;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_17 = ((-1 ? 17959 : 99));
                            var_18 &= (((var_3 != var_4) ? (var_3 < 4393426475405914725) : (var_5 > var_6)));
                            var_19 += (((var_9 ? var_4 : var_9)));
                        }
                    }
                }
            }
        }
        var_20 = (((((6484513293630748990 ? 5332230271939312659 : -4393426475405914726))) ? ((var_1 ? var_0 : var_1)) : ((var_3 ? var_4 : var_2))));
    }
    var_21 *= var_2;
    var_22 -= ((10 ? ((((((var_7 ? var_9 : var_8))) || (var_7 <= var_7)))) : var_3));
    #pragma endscop
}
