/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, ((((var_8 | (((var_4 ? 2119675230 : (arr_1 [i_0]))))))))));
        arr_3 [i_0] &= ((12531 ? (((min((min(var_0, 250)), (-18014398509481984 >= 10467))))) : ((85 ? 4975 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (arr_5 [i_1]);
        arr_7 [i_1] = (~251);
        var_16 *= (arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_17 ^= (arr_14 [1]);
                    var_18 = ((((((arr_4 [i_3]) ? var_13 : var_3))) < 268435328));
                    var_19 = (max(var_19, (((((var_5 ? (arr_12 [i_1] [i_2] [i_3]) : (arr_11 [i_1] [i_1] [1] [i_1]))) * ((((arr_12 [i_3] [i_2] [i_1]) ^ (arr_12 [i_2] [i_2] [i_3])))))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_29 [i_4] [14] [i_6] [i_6] [i_5] [i_4] = ((((min((1 != var_9), var_3))) ? (min(2955810476, 0)) : var_8));
                            var_20 ^= (min(((((~(arr_16 [i_8]))) & 1735497092)), ((~(max(4026531968, 45379))))));
                            arr_30 [i_4] [i_4 + 1] [4] [i_5] [i_6] [1] [i_8] = 19056;
                            arr_31 [i_8] [i_4] [i_6] [i_4] [i_4] = 268435328;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_21 = 1;
                            var_22 = (min(var_22, (!108)));
                        }
                        var_23 *= (max(-10443, 7));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [i_4] [i_10] = (min((6 ^ -1000779624081729005), (((!(-1317444730 && var_0))))));
                            var_24 = max(var_9, (arr_6 [i_4 + 1]));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_4] [i_5 + 2] [i_6] [i_7] [i_4] = (((16711361252572577507 * (arr_32 [i_4] [i_5 - 1] [i_6] [i_7]))));
                            var_25 = (max(((-(arr_25 [i_7] [i_5 + 2] [i_4] [i_4] [i_5 - 1] [i_5]))), (((var_6 >= (arr_25 [i_5] [i_5 + 2] [i_4] [i_4] [i_5] [1]))))));
                            var_26 = ((!(-7 || -9223372036854775805)));
                        }
                    }
                    arr_40 [i_4] = (((((((16 ? var_6 : 2008166498)) >= (((arr_4 [i_4]) ? (arr_35 [i_4 + 1] [i_4 + 1] [i_5 - 1] [i_5] [i_6] [11]) : var_1))))) / ((((-(arr_34 [i_4] [i_6] [i_4] [i_5 + 2] [i_4]))) | ((772058746 ? var_0 : (arr_37 [i_4] [i_4] [9] [i_5 + 2] [i_6] [1] [i_6])))))));
                }
            }
        }
        var_27 = (((var_10 ? var_10 : (arr_32 [i_4] [i_4] [i_4] [i_4 + 1]))) < (~2008166498));
    }
    var_28 -= ((var_4 - ((var_3 ? (((var_0 ? var_1 : var_6))) : var_8))));
    var_29 = (((!248) ^ var_13));

    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_44 [i_12] = var_10;
        var_30 = (((((~(arr_8 [i_12])))) & (((arr_8 [i_12]) ? (arr_11 [8] [i_12] [i_12] [i_12]) : (arr_11 [i_12] [i_12] [i_12] [i_12])))));
    }
    #pragma endscop
}
