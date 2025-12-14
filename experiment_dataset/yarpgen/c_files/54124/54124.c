/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((!((max((-1778083393 + var_8), ((var_5 ? var_3 : (arr_0 [i_0]))))))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((((!var_13) & var_7)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [14] [i_4] [i_4] = -1778083393;
                    arr_17 [i_4] = (arr_15 [7]);

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_4] [i_4] [i_3] [i_4 + 2] [2] [i_3] = (((((((arr_0 [i_2]) != var_6)) ? (((arr_11 [i_2] [i_3] [i_3]) + var_15)) : (~var_3))) / ((((((arr_12 [i_2]) ^ 1))) ? var_1 : (arr_19 [15] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                        arr_22 [i_2] [11] [i_4 + 1] [11] [i_4] = (min(((((((arr_9 [i_3]) ? var_13 : var_1))) ? ((max((arr_1 [i_2] [2]), 1))) : (arr_18 [i_3] [i_3] [i_3] [i_3] [5]))), var_12));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_21 ^= ((+(((arr_12 [i_2]) ? var_2 : var_16))));
                            var_22 = (arr_11 [i_2] [i_4 + 2] [i_4]);
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [i_7] [i_7] [i_4] [i_4] [i_3] [i_2] = ((((min((((arr_10 [i_2]) ? 0 : var_16)), var_1))) && ((max(var_16, ((((arr_12 [i_4]) ? (arr_11 [i_2] [i_3] [i_3]) : var_13))))))));
                        var_23 = ((var_15 << (((((-23086 ? (arr_20 [i_2] [i_3] [i_3] [14] [8] [i_7]) : 1152921229728940032)) <= (((-1586 ? 1 : var_16))))))));
                        var_24 = (var_0 > var_2);

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            arr_33 [i_8] [i_4] [i_4] [i_4] [15] = (((arr_14 [i_3] [i_4]) & 4294967269));
                            arr_34 [i_3] [i_4] [1] = ((var_9 ? var_6 : 348947638549355993));
                            var_25 = ((((((arr_11 [i_7] [i_4] [1]) >> (var_7 - 7576103297331772259)))) ? var_0 : (1802689381 & var_17)));
                        }
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_26 = ((!(-127 - 1)));

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_27 = ((((!(var_11 <= 2169647846))) ? (((1 - (arr_15 [i_3])))) : (!var_5)));
                            arr_40 [i_4] [i_3] [i_3] [i_9] [i_10 - 1] = (((((((var_6 ? var_0 : 1)) >= -2108880427))) + ((-(var_12 - var_3)))));
                            var_28 ^= (~-3241);
                            arr_41 [10] [i_2] [i_3] [i_4] [i_9] [i_10 - 1] = ((((36028794871480320 + ((min((arr_35 [i_4] [0] [i_4] [i_9]), var_0)))))) ? var_10 : ((((max(var_14, -11250))) ? ((-23099 ? var_10 : var_5)) : var_6)));
                        }
                    }
                }
            }
        }
        var_29 = var_8;
    }
    var_30 -= var_4;
    var_31 = ((~(((((min(19, var_2))) || (~var_15))))));
    var_32 = -var_16;
    #pragma endscop
}
