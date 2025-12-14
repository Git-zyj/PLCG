/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((var_9 % var_10), var_16)) >> (var_19 - 181638789)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] &= min(((25669 ? 3814924366 : 1)), var_6);
                arr_6 [i_0] = ((((((((arr_3 [i_0 + 1] [i_0]) + 2147483647)) >> (((arr_2 [i_0] [i_1] [i_1]) - 3179544881))))) % var_12));
                arr_7 [11] [i_1] [i_1] = (min((var_4 <= var_9), (var_6 > var_14)));
                arr_8 [i_1] = arr_2 [0] [i_1] [i_1];
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_19 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] = (arr_9 [i_4 - 1] [i_1] [i_2 + 1] [i_3]);
                                arr_20 [i_0] = ((((arr_16 [i_0 - 2] [i_1] [i_2 - 2] [i_3] [i_3]) > (arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_4 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_25 [i_5] [i_5] = (((var_2 == var_8) + (arr_22 [i_5] [i_5])));
        arr_26 [i_5] = (((arr_21 [i_5]) ? (((var_17 ? var_3 : (arr_24 [i_5])))) : (arr_23 [i_5])));
    }
    #pragma endscop
}
