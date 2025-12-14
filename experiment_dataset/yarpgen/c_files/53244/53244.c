/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_12 ? (max(var_0, -55)) : (8176 / var_8))), (((var_10 | (var_13 >= var_2))))));
    var_20 ^= (((((-((var_0 ? var_17 : -8176))))) ? 4294967295 : ((((!var_13) & var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((((min(var_17, 18446744073709551615))) ? (var_11 ^ var_11) : (max(var_15, var_1))));
                arr_4 [i_1] [i_1] [i_1] = (((var_11 * 0) != 16777215));
                var_22 ^= (((var_2 | var_4) ? (((((((var_9 << (var_1 - 62803976)))) < ((var_16 ? var_14 : var_8)))))) : (var_1 & var_2)));

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    var_23 += ((-var_16 ? (((var_10 ^ var_2) ? var_13 : (var_7 > var_10))) : ((((((min(43, var_9)))) == ((var_8 ? var_4 : 16383)))))));
                    var_24 = ((~((-((max(var_3, var_9)))))));
                    arr_8 [i_1] [i_1] = ((((min(var_6, ((var_9 ? var_2 : var_5))))) ? (~var_5) : ((((0 < 1) || (var_3 % var_11))))));
                    var_25 = var_6;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_26 = var_12;
                    var_27 *= ((var_13 <= (var_15 / var_10)));
                    var_28 = (max(var_28, ((((var_0 ? var_0 : var_16))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_4] [i_1] [i_0] = ((!((!(var_0 > var_6)))));
                                var_29 = (((0 ? (~1) : (-35 == 5516016893564269192))));
                            }
                        }
                    }
                    var_30 = (((min(((min(1, 0))), ((var_1 ? var_17 : var_18)))) & (max((!var_15), var_0))));
                    var_31 = ((18446744073709551615 ? 1 : 0));
                    var_32 += -1;
                    var_33 = (min((var_16 + var_17), var_2));
                }
                arr_22 [i_0] &= (((-8169 * 4294967279) ? (((!var_5) >> ((((max(254, 78))) - 232)))) : (~-var_6)));
            }
        }
    }
    #pragma endscop
}
