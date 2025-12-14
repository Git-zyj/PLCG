/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (max(var_7, (!0)));
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = (((~7397051936142341719) || (((14330 ? (arr_2 [i_0] [i_1] [i_1]) : (arr_1 [i_2] [i_1]))))));
                    arr_6 [i_0] [i_1] [i_1] = (((((((var_6 ? var_0 : var_1))) ? var_6 : -var_1))) ? (((((((arr_3 [i_1]) ? var_0 : var_2))) ? ((255 ? 0 : 0)) : var_3))) : ((-4378 ? (arr_4 [i_2] [i_0] [i_0]) : (max(32767, (arr_2 [i_0] [i_1] [i_1]))))));
                    var_16 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [18] [i_1] = (min(((var_5 ? (arr_3 [i_1]) : (arr_3 [i_1]))), ((((arr_3 [i_1]) <= (arr_3 [i_1]))))));
                                var_17 |= (~(((arr_0 [i_3] [i_3]) ? (((var_6 ? var_0 : (arr_10 [i_0])))) : (18446744073709551615 + 0))));
                                var_18 *= ((((((arr_2 [i_0] [i_1] [18]) - (arr_2 [i_1] [i_2] [8])))) ? var_7 : (min(549755813887, (arr_2 [12] [i_2] [16])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_19 *= ((~(((arr_8 [i_0] [i_6] [i_6]) ? var_3 : (arr_2 [i_5] [i_6] [i_6])))));
                                var_20 = ((var_10 & ((-((9223372036854775807 ? var_4 : 0))))));
                            }
                        }
                    }
                    var_21 |= (min((!-29179), (((!var_10) && (arr_3 [1])))));
                    var_22 = var_6;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_23 |= 2141513138;
                    var_24 = (min(var_24, ((((arr_16 [i_0] [i_1] [i_8] [i_8]) ? (arr_16 [i_0] [i_0] [i_8] [i_8]) : var_8)))));
                    arr_24 [i_1] [i_0] [8] [i_1] = -343346611;
                }
                var_25 ^= var_6;
                var_26 *= (((1 && var_5) < (((((1 >> (3358763276946650501 - 3358763276946650477)))) ? (-2 <= 1055531162664960) : 84))));
                var_27 = ((((1 ? 65 : 3360862928)) >> (((-2147483647 - 1) ? 0 : -21))));
            }
        }
    }
    #pragma endscop
}
