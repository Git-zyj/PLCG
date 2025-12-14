/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_1 ? (((var_1 ? (((var_11 ? 11231 : var_1))) : ((var_10 ? var_6 : var_5))))) : ((((7 ? 6394115652476076447 : var_6)) - (((-20 ? var_10 : var_6))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_14 = (min(var_14, ((((-2147483647 - 1) ? 37 : (arr_8 [i_0] [i_1] [i_1 - 2]))))));
                    var_15 = 96;
                    var_16 = (((arr_4 [i_1 - 2] [i_1 - 1] [i_0]) > var_10));
                    var_17 ^= var_1;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_18 = (min(var_18, ((((((((25975 ? 29 : -18))) ? (arr_1 [2]) : (((~(arr_0 [0])))))) | ((((arr_3 [i_0] [i_0]) & var_9))))))));
                    var_19 = (13 || 2060533468);
                }
                var_20 = (max(var_20, (((+((-67 ? (arr_5 [i_1 + 2] [i_1 + 2] [i_1]) : (arr_3 [i_1 - 2] [i_1 + 2]))))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_21 -= -12;
                    var_22 *= (((arr_12 [i_0] [i_1 + 2] [i_4] [i_0]) ? (arr_7 [3] [i_1 + 2] [i_4]) : (arr_3 [i_0] [i_1 + 3])));
                    arr_13 [i_0] [i_0] [i_4] = (((((var_11 ? (arr_10 [i_0]) : var_7))) || (arr_6 [i_1 - 2])));
                    arr_14 [i_0] = (((arr_12 [i_1 + 1] [i_1] [i_4] [i_4]) || (arr_12 [i_1 + 1] [i_4] [i_4] [i_4])));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_23 -= (arr_10 [2]);
                    var_24 = (max(var_24, 12));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_25 = (max(((((var_7 ? (arr_0 [i_0]) : var_10)) % (arr_17 [i_0] [i_0] [i_0] [i_6]))), ((40 ? var_2 : (arr_19 [i_1 - 1] [i_1 + 2])))));
                    var_26 &= (arr_19 [i_1 + 2] [i_1 - 2]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_6] = (((((arr_7 [i_0] [i_1] [i_0]) ? var_9 : -9091)) % (arr_21 [i_0] [1])));
                        var_27 = (((arr_0 [i_0]) ? (arr_9 [i_7]) : (((arr_20 [i_0] [i_0] [i_7]) ? (arr_7 [i_0] [i_0] [i_6]) : (arr_20 [i_1] [i_1] [i_1])))));
                        var_28 = (-12 | 659355803);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_29 = (arr_16 [i_0] [0] [i_6] [i_0]);
                        var_30 = (min((((arr_24 [i_1 - 2] [i_0]) ? (arr_18 [i_1] [i_0] [i_1 - 2]) : (arr_12 [i_0] [i_1 + 2] [i_6] [i_8]))), (((var_6 > (arr_5 [i_1 + 3] [i_1] [i_1]))))));
                        var_31 *= (((min((((arr_22 [i_0] [i_1 - 2]) ? var_9 : var_0)), ((((arr_18 [i_0] [2] [i_6]) > 15))))) % (((((((var_3 ? (arr_19 [i_1] [i_1 + 2]) : var_5))) || (((var_10 ? var_9 : (arr_6 [i_0]))))))))));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_28 [i_0] = (((((min(var_10, var_6)) ? (4 ^ 9090) : (arr_17 [i_1] [i_1] [i_1] [i_1]))) > -7));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -37;
                            arr_30 [7] [7] [i_0] [i_6] [0] [i_9] = (((-1 ? -7 : -1)));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            var_32 = (arr_3 [i_10] [i_6]);
                            var_33 = (((arr_24 [i_1 + 2] [i_1 + 2]) % -9104));
                            var_34 = (((arr_26 [i_1 + 3] [i_1 - 1] [i_10 + 1]) ? (arr_17 [6] [i_10 - 2] [i_10 - 1] [i_10 - 1]) : ((1504413162 ? (arr_16 [i_0] [i_1] [i_6] [i_0]) : (arr_12 [i_0] [i_10 - 1] [0] [i_0])))));
                            arr_33 [8] [8] [i_1] [i_8] &= (-19 < 3666);
                        }
                        var_35 = ((((arr_24 [i_1 + 2] [i_1]) ? (arr_10 [i_0]) : (arr_10 [i_0]))));
                    }
                    var_36 &= (max((4294967281 || -3645), (((((-16 ? var_0 : var_11))) ? ((var_8 ? (arr_3 [i_1] [i_1]) : var_9)) : (arr_26 [8] [i_6] [1])))));
                }
                var_37 = (1073741823 < 2132668303);
            }
        }
    }
    var_38 = ((var_12 ? var_10 : var_8));
    #pragma endscop
}
