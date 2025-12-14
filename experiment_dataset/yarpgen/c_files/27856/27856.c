/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~1039) < (min(-var_1, var_13))));
    var_19 = (~-var_15);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2 + 1] = var_13;
                    var_20 = (max(var_20, (arr_2 [i_0 - 1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0 + 3] [i_2] [i_2] [i_2] [i_3] = var_16;
                        arr_11 [i_2] [i_2] [i_2] = (((((arr_9 [i_0] [i_1] [i_2] [i_3]) != (arr_0 [i_0] [i_0]))) && ((!(arr_1 [i_1])))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [12] &= (arr_7 [i_0] [i_1]);
                        var_21 = ((~(arr_1 [i_0 + 1])));
                    }
                    var_22 = ((!(((!64470) <= var_12))));
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] [i_4] &= min(((var_0 == (((var_3 <= (arr_7 [i_4] [14])))))), ((!((min((arr_14 [i_4] [i_4 + 1]), var_13))))));
        var_23 = ((-2575350291533425468 ? 14792356663582156579 : 428363916));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5 - 1] = (max((max((((!(arr_1 [i_5])))), (max(var_1, (arr_14 [i_5] [i_5]))))), (+-1)));
        var_24 = (arr_16 [i_5]);
        var_25 = ((var_8 ? var_11 : (((((~(arr_5 [i_5] [i_5 + 1] [i_5] [20])))) ? (~var_13) : (~var_5)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_26 *= (!-var_3);
        arr_24 [10] &= ((((var_6 ? (arr_22 [i_6] [8]) : (arr_23 [i_6]))) | (arr_21 [i_6])));
        var_27 = ((~((-(arr_21 [i_6])))));
        var_28 = ((((-8388608 ? 428363920 : 1049))) ? var_9 : (~var_3));
    }
    #pragma endscop
}
