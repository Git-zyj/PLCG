/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] &= ((-(~var_1)));
                arr_8 [i_0] [i_0] [11] = ((0 ? (max(var_8, (arr_6 [i_0] [i_1 + 2]))) : (((~((1 ? (arr_3 [i_0] [i_0] [i_0]) : 1)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_2] = ((var_2 & (((arr_9 [i_2] [i_2]) ? var_1 : (arr_9 [i_2] [i_2])))));
            arr_14 [i_2] [i_2] = (((1 / 1) ? var_14 : var_6));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_18 [i_2] [14] [i_2] &= ((((((arr_9 [i_2] [0]) ? (arr_9 [i_2] [1]) : var_5))) ? 31004 : (arr_12 [16])));
            arr_19 [i_2] [i_2] [i_2] = ((127 ? (!-56) : ((((arr_17 [i_2]) > -1827295904)))));
        }
        var_15 = ((var_10 + ((+(((arr_10 [i_2]) - (arr_10 [i_2])))))));
        arr_20 [i_2] = ((var_4 ? 15969 : 8311621019845555976));
        arr_21 [i_2] [i_2] = ((((((var_8 ? 1 : (arr_17 [i_2]))) + 240)) - 1571185086));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_25 [i_5] = ((((((arr_23 [i_5 - 1]) < var_6))) | (arr_24 [i_5] [i_5 - 1])));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    var_16 &= ((((((((var_13 ? var_3 : 10346))) ? (min(107, var_13)) : (((arr_26 [i_6] [i_6] [i_5 - 1]) - var_3))))) ? ((+(((arr_31 [i_5 - 1] [i_6 - 1]) ? 4294967295 : var_4)))) : ((((((!(arr_24 [0] [i_6])))) % 1)))));
                    var_17 *= (~3615105613);

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_18 = (max(var_18, ((((((31004 ? var_11 : var_4))) ? var_10 : (((!(arr_26 [17] [i_7 - 1] [i_5])))))))));
                        arr_34 [i_5] [i_8 + 1] [i_7] [i_6] [i_5] = ((((arr_29 [i_5 - 1] [i_6 + 1] [i_5] [i_8 + 1]) ? (arr_28 [i_5 - 1]) : 1)));
                        arr_35 [i_5] [i_5] [i_6] [14] [i_5] [i_8] = ((var_2 ? (min(((var_4 ? 1 : (arr_26 [i_5 - 1] [i_6] [i_7 - 1]))), 1)) : ((-1827295910 ? (arr_29 [22] [i_7] [i_5] [i_7]) : (2147483647 - 16)))));
                        arr_36 [i_5 - 1] [i_6] [i_7] [i_5] [i_7] = (((((var_9 ? (arr_22 [i_5]) : 43744))) > (((arr_22 [i_5]) ? -345171815142292426 : var_3))));
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        arr_40 [i_5 - 1] [i_5 - 1] [i_6] [i_7 + 2] [i_5] = (~254);
                        var_19 *= var_7;
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_44 [i_5 - 1] [i_5 - 1] [i_5] = 1;
                        var_20 = (min(var_20, var_1));
                        var_21 *= ((((((arr_23 [i_5]) ^ (arr_23 [i_5 - 1])))) ? (min((arr_27 [i_7]), ((-(arr_41 [0]))))) : (((((min((arr_23 [i_6 - 1]), 126))) ? 1549909252 : 228)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_47 [i_5] [i_6] [i_6] [i_5] = (((arr_28 [i_5 - 1]) ? (arr_32 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : var_7));
                        arr_48 [i_5] [i_5] [i_5] = (((((var_2 ? (arr_28 [i_7]) : var_11))) ? (var_0 | 116) : ((((arr_24 [i_5] [i_7]) - 1187086981)))));
                        arr_49 [i_5] [i_5] [i_7 + 1] [i_11 - 1] = (!13604191085812546988);
                    }
                }
            }
        }
        arr_50 [i_5] = (arr_24 [i_5] [i_5]);
    }
    #pragma endscop
}
