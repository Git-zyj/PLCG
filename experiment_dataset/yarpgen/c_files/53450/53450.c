/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, (((-(min(var_10, ((0 ? var_0 : var_0)))))))));
                        var_12 &= ((-3 ? var_7 : ((var_8 - (arr_1 [i_0] [i_0 + 3])))));
                        arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_3] = ((((!(arr_4 [i_2] [i_1 + 2] [i_1 + 2] [i_0 + 2]))) ? (((1 ? var_10 : (arr_6 [i_0 - 1])))) : (min(var_7, var_8))));
                        var_13 -= ((var_8 ? 252 : var_4));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_14 = (var_3 & -6552705703134812928);
                    var_15 = (max(var_15, (((((~(min(var_3, var_0)))) | (var_3 ^ -87))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_16 = (max((((!(8021983856669110869 ^ 3756562299110277833)))), var_0));
                        var_17 = ((((((max(var_7, 1))) ? var_10 : var_10))) && (((-(min(var_1, 36778))))));
                        var_18 = (max(var_18, ((((((((var_9 ? 0 : var_2))) ? var_8 : (!4))) ^ ((((((var_2 ? var_5 : 1))) ? (!var_6) : (~6552705703134812928)))))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (min(((~(arr_2 [i_0 + 1]))), var_6));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = (max(var_4, -23493));
                            arr_23 [i_0] [i_0 + 3] [i_0] [0] [i_0 + 3] [i_0 + 4] [0] = max((arr_18 [i_0 - 2] [i_4] [i_5] [i_8]), (((((79 ? 3756562299110277836 : var_8))) ? ((((!(arr_13 [i_8 + 2] [i_5]))))) : var_0)));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_20 = 16309;
                            var_21 ^= (((((~(arr_14 [i_0] [i_0 + 3] [i_0 + 4])))) ? ((max(var_9, (arr_2 [i_0 + 1])))) : ((var_6 ? ((min(1, var_7))) : var_3))));
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_22 = (min(var_22, ((min((~var_8), (((var_9 ^ var_8) ? (~6552705703134812923) : (79 & var_8))))))));
                            var_23 |= ((((max((max(77, var_3)), var_9))) ? ((((arr_0 [i_4] [i_5]) % ((var_2 ? 90 : 90))))) : (1 + var_8)));
                            arr_30 [i_4] [i_7] [i_7] [i_5] [11] [i_4] [i_0] = (min((var_0 << 1), (((~(((arr_14 [9] [9] [i_10]) ? -3756562299110277837 : 4)))))));
                        }
                    }
                    var_24 = var_0;
                    var_25 ^= 1;
                }
            }
        }
    }
    var_26 = ((var_10 & ((((3756562299110277841 ? 1 : var_9)) / 84))));
    #pragma endscop
}
