/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 ^= max(2180499255211301996, ((min(4294967285, (arr_0 [i_2 - 1])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 ^= var_3;
                        var_13 = (((((((min(var_3, 96))) | ((143 ? 23834 : -1))))) ? (((((var_8 ? (arr_8 [i_0] [i_2 + 3] [i_2 + 3]) : 37914963))))) : (~-295004484308007800)));
                        arr_9 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_1] = (min((~101383320), -6));
                        var_14 = ((((arr_4 [i_0] [8] [i_0] [8]) ? ((12948 ? var_5 : var_5)) : (max(var_1, var_7)))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = var_8;
                        arr_14 [i_0] [i_1] [i_1] [i_4 + 1] = (!var_7);
                        arr_15 [i_0] [i_0] [i_0] [13] = (!9223372036854644736);

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_1] = 0;
                            var_15 ^= ((((min((arr_12 [i_1] [i_2] [i_4 - 2]), var_9))) ? (!24055) : (min(((min(8, 9223372036854775785))), 2199023255551))));
                            arr_21 [i_5] [i_0] = (arr_10 [i_2 + 3] [i_2 - 1] [i_4 + 1] [i_5]);
                        }
                    }

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_16 -= ((((((((0 ? 248 : 10340))) ? var_10 : -40))) ? ((max((arr_16 [i_0]), var_9))) : (min(-var_7, var_8))));
                        arr_25 [i_6] [i_6] [i_6] [i_1] [i_0] = 2147483647;
                        arr_26 [i_6] [i_0] [i_6] [9] [i_0] = (min((((((arr_24 [i_0] [i_1] [i_0]) ? var_3 : var_10)))), (min((!32), (arr_12 [i_0] [i_0] [i_6])))));
                        arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] = ((((((max((arr_0 [i_0]), (arr_23 [i_0] [i_0] [i_0] [7] [11]))) & (min(2658665008, var_8))))) & (min((min(1219526241, (arr_22 [i_0] [i_1] [i_2 + 3] [i_6 + 1] [i_0] [i_1]))), var_9))));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_17 = (min(var_17, (((0 ? (((min(var_6, var_6)))) : (min(var_10, (min((arr_8 [i_2] [i_0] [i_0]), 4825216013892329745)))))))));
                        arr_31 [i_0] [i_1] = (!(arr_22 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 2] [0]));
                    }
                }
            }
        }
    }
    var_18 = ((max(1886566007, 62206)));
    #pragma endscop
}
