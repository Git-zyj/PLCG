/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= ((+(((arr_1 [i_0 - 2]) ? (((min(var_13, var_5)))) : var_12))));
        var_15 = (arr_1 [19]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [1] = (((((arr_5 [i_1]) % (((var_12 ? -23 : 481135039))))) & ((((min((arr_7 [19]), 776452515))) ? (max(18446744073709551609, 6)) : (((~(arr_8 [i_0 - 1] [i_1] [i_1]))))))));
                        var_16 += ((((max(((min(3, var_1))), ((var_10 ? 3 : 2))))) ? (((((arr_9 [12] [i_1] [i_0]) ? var_10 : (arr_2 [i_1] [i_1]))) >> ((min((arr_11 [i_0] [i_1] [i_0] [i_0]), var_9))))) : (max((((arr_11 [i_0 + 3] [i_1] [19] [i_3 + 2]) ? (arr_4 [13]) : var_11)), var_7))));
                        var_17 = var_0;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_18 = var_3;
        var_19 = (((arr_16 [18]) != (arr_6 [i_4] [i_4])));
    }
    var_20 = (min(var_20, (((((((min(3, var_6))) ? (!1) : 1)) << ((((~((var_12 ? 1 : var_2)))) + 18)))))));
    var_21 = var_10;
    #pragma endscop
}
