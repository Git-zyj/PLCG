/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (max(var_7, (((((var_8 ? var_5 : var_5))) ? ((var_0 ? var_8 : var_10)) : (var_12 != var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((min(((var_9 ? 663532153 : (arr_4 [i_1] [i_1]))), (var_2 || 34899)))) ? ((703625424 ? 703625413 : 34929)) : (arr_3 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = 34890;

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                var_16 = (min(var_16, ((min(30, 0)))));
                                var_17 = ((((var_5 <= (arr_2 [i_0 + 2]))) && (arr_13 [i_0] [i_0] [i_2] [1] [i_4] [0] [i_0])));
                            }
                            arr_14 [i_0] [i_0] [i_2] [i_3] = 30621;
                            var_18 = ((2286174806 <= -5871211045874153109) > 2286174804);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_6] [i_6] = var_6;

                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_19 = (min(18446744073709551611, 26307));
                        var_20 = var_2;
                        arr_29 [3] [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_9 [i_6] [i_6] [i_8 + 2] [i_8 + 1]) >> ((((var_5 ? var_3 : (arr_7 [i_7] [i_8 + 1] [i_8 + 1] [i_8]))) - 18446744071890569250))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_21 = (((4294967285 || 11) || ((((arr_5 [10] [i_9] [i_10]) ? var_9 : (arr_22 [i_7]))))));
                                arr_35 [i_10] = (((26286 >> (30926 - 30917))));
                                arr_36 [i_10] [i_6] [10] [i_10] = (!0);
                                arr_37 [i_5] [i_6] [i_5] [i_9] [i_10] [i_9] [i_6] = var_7;
                            }
                        }
                    }
                    var_22 = (max(-26317, ((31 ? 10218836094866932613 : (18446744073709551615 && var_9)))));
                    arr_38 [i_7] [i_6] [i_5] [i_5] = (((var_7 < (((((arr_22 [i_5]) && var_4)))))));
                }
            }
        }
    }
    var_23 = (min(10422, 47425));
    #pragma endscop
}
