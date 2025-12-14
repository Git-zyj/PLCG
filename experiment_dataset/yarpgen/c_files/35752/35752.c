/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = 93;
        arr_3 [i_0 - 1] [i_0] = var_8;
        var_15 = (((arr_1 [i_0 - 1]) >> (((arr_1 [i_0 - 1]) - 171))));
        var_16 = (arr_2 [i_0]);
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((var_0 * (((var_10 <= var_13) >> 1))));
        var_17 = (((min((max((arr_4 [i_1] [i_1]), 8)), (arr_4 [i_1] [i_1]))) < ((((((var_12 ? 32 : 32)) >= ((-29 ? var_2 : (arr_5 [i_1] [i_1])))))))));
        arr_8 [14] [i_1] = var_5;
    }
    var_18 += var_13;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_19 += ((+((((1 != 2921656055) < 10)))));
                arr_14 [i_3] [i_3] = (arr_11 [i_2] [i_3]);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 ^= 1;
                                arr_25 [1] [1] [i_4] [i_5 - 1] [i_3] = -1;
                                var_21 += var_11;
                                arr_26 [i_3] [i_5] [i_6] = (min(((min((min(1, 128)), var_8))), (min(((((arr_10 [i_3] [i_4]) ? var_3 : var_12))), (((arr_24 [i_3]) & (arr_20 [i_2] [i_3] [i_5 + 4] [i_6])))))));
                                arr_27 [i_3] = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
