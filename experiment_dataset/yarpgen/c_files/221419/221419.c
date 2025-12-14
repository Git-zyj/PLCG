/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~var_5) | ((~(~116)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (((((~((var_15 ? var_3 : var_0))))) ? (((!(~var_4)))) : -var_5));
        arr_2 [i_0] [i_0] = (max((((!(var_3 > var_16)))), (((var_4 ? var_12 : var_6)))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((((min(18446744073709551599, 254))) ? (~var_1) : ((~(~var_13)))));
        arr_7 [i_1] = (min((((var_7 + 2147483647) >> (var_13 - 146))), (!var_6)));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_21 = ((var_8 ? var_4 : var_3));
                            arr_21 [9] [i_3] [i_4] [i_5] [i_5] [i_6] = (var_18 >= var_3);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_22 = ((~((var_13 ? var_16 : var_0))));
                            var_23 = (((var_9 ? var_3 : var_6)));
                            var_24 = (~var_11);
                            arr_24 [i_2 + 1] [i_3 - 1] [i_4] [i_7] [i_7] |= var_10;
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_25 = (((((-((var_11 ? var_13 : var_14))))) && ((!(((var_3 ? var_17 : var_8)))))));
                            arr_28 [i_2] [i_4] [i_4 - 1] [i_5] [i_8] = ((~(var_8 - var_8)));
                        }
                        arr_29 [i_4] [i_3] [i_4 + 2] [i_4 + 2] = ((((((var_8 ? var_3 : var_5))) ? 4503599627370495 : var_6)));
                    }
                }
            }
        }
        var_26 ^= (+-1);
        var_27 = (((((~(var_17 - var_9)))) ? (!-var_5) : ((-var_7 >> ((((var_18 ? var_10 : var_15)) - 222))))));
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        var_28 = (min(var_28, var_12));
        var_29 = ((!((min((~var_17), -var_7)))));
        var_30 *= (((!52) < ((var_4 ? 25839 : 57))));
        arr_32 [i_9] = (max(56, 12782016453243791930));
    }
    var_31 = (~-var_6);
    var_32 = (max(var_32, (var_14 + var_16)));
    #pragma endscop
}
