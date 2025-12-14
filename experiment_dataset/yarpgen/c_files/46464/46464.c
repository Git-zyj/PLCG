/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_6;
    var_14 = (((((((max(var_1, var_0))) ? var_6 : (((min(var_6, var_8))))))) ? var_9 : (((((var_6 ? var_0 : var_2)) + -var_12)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_0] = ((-(var_8 / var_5)));
                        arr_13 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = 35968;
                        var_15 += ((-(((min(var_11, var_9)) << (857326666 - 857326652)))));
                        var_16 = (min(var_16, (((18446744073709551615 >= 4095) <= 13))));
                    }
                }
            }
        }
        var_17 = (min(7910034647588833289, ((((!var_6) ^ (~var_6))))));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_18 *= (((var_7 <= var_8) >= (((((var_9 ? var_9 : var_0))) ^ var_5))));
            arr_16 [i_4] [i_4] = ((((min((65535 ^ -4581732145233022220), 4294967289))) ? var_6 : var_4));
            var_19 = (min((((var_8 ? (~var_6) : ((min(var_6, var_8)))))), var_6));
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            arr_19 [i_0] &= (min((((var_4 && var_2) ? (var_1 / var_0) : (var_8 / var_6))), 4581732145233022219));
            arr_20 [i_5] = min((min(((var_6 ? var_10 : var_9)), (min(var_9, var_6)))), ((((((-4581732145233022220 ? -12 : 4692539865306847246))) && var_1))));
            var_20 = (var_8 / var_2);
        }
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_28 [i_8] [i_6] [i_7] [i_6] = ((((var_2 > (var_3 == var_11)))));
                        var_21 *= var_5;
                        arr_29 [i_0] [i_0] [i_6] [i_0] = (max(((((var_8 > var_3) <= (var_8 & var_11)))), (var_0 < var_1)));
                    }
                }
            }
            var_22 &= (((min(var_5, ((var_1 ? var_7 : var_4))))) && var_7);

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_23 *= var_11;
                var_24 |= (((((var_5 / (((var_12 ? var_0 : var_7)))))) ? ((((var_8 ? var_9 : var_5)) / (((var_8 ? var_11 : var_7))))) : var_2));
                var_25 = 1545410484506509769;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_26 = ((+(((var_9 - var_8) - (min(var_1, var_9))))));
                            var_27 *= ((((var_5 / (-25 * 58812))) / (((min(var_2, var_6))))));
                            var_28 = (min((var_1 >= var_4), (var_2 ^ var_12)));
                        }
                    }
                }
            }
        }
        var_29 = (~4581732145233022232);
    }
    #pragma endscop
}
