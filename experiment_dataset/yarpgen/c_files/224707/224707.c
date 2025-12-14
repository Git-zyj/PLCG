/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((max(var_7, var_11))) - (var_10 > var_15)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 -= ((max(1984183332493272976, 47220)));
        var_18 |= (min(((var_3 - (arr_1 [i_0]))), (var_6 % var_15)));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : 39363)) / (((var_11 || ((min(1, var_13))))))));
        arr_5 [i_0] = (64512 % 5901425568684084087);
        var_19 = (min((((arr_3 [i_0]) ? (((var_13 << (var_7 - 2280704628465006081)))) : ((-2849621004579308923 ? var_4 : (arr_2 [15] [1]))))), (max((arr_2 [i_0] [i_0]), var_15))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = ((max(var_4, ((min((arr_9 [i_1]), (arr_2 [i_1] [i_1])))))));

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_21 = (max(var_21, var_8));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_4] [i_3] [i_4] [i_4] [4] = ((((((min((arr_18 [i_3] [i_4] [1] [i_4] [i_4]), var_11))) || ((min((arr_10 [i_2] [i_2]), (arr_14 [i_1] [i_2] [i_5] [i_4])))))) ? (min((2849621004579308922 * 0), (arr_9 [i_4 + 2]))) : (((-(var_13 != var_12))))));
                            var_22 = (max(var_22, (((arr_12 [i_2 + 2] [i_2] [i_1]) ? (max((arr_12 [i_2 + 1] [i_2 + 1] [i_2]), var_4)) : (((((arr_12 [i_2 + 1] [i_2] [i_2]) == (arr_12 [i_2 - 1] [1] [i_1])))))))));
                            var_23 = (min((var_9 > var_5), (((max(var_9, (arr_7 [i_3] [i_5]))) >= (((var_7 ? var_12 : var_13)))))));
                        }
                    }
                }
            }
        }
        arr_20 [i_1] [i_1] = max((((((var_2 ? var_0 : var_13))) + var_3)), ((((arr_11 [i_1] [i_1]) ? (arr_11 [i_1] [i_1]) : (arr_11 [i_1] [i_1])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_24 = (max(var_24, 2849621004579308923));
        var_25 ^= ((!(max(var_2, var_6))));
        var_26 = (!(((max(var_7, var_14)) <= (max(1353604439224508451, 0)))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_27 = (((((var_10 >= var_2) != (arr_22 [i_6]))) ? (((64512 ? 6746 : 54369))) : (var_5 | var_11)));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        var_28 = ((var_8 - ((((min((arr_27 [4] [i_7] [i_9]), var_14))) ? var_13 : ((16384 ? var_5 : (arr_18 [i_6] [i_9] [i_6] [i_8 - 1] [i_9])))))));
                        var_29 += (((((min((arr_29 [i_8] [i_9] [i_8 - 1] [0]), (arr_29 [i_8] [i_9] [i_8 + 1] [0]))))) % 5223612821887264088));
                        var_30 = (min(var_30, (arr_13 [i_6] [i_7] [i_8] [i_9])));
                        var_31 = (max(var_31, ((min((!var_7), ((((2032 != (arr_17 [0] [i_6] [i_6] [i_6] [i_6]))) ? var_0 : ((max(0, 1))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    arr_35 [i_11] [1] [i_6] = (min((min((arr_25 [8] [i_11]), -var_7)), ((var_15 ? var_10 : -5223612821887264086))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_32 ^= (((1 | -35652) ? (max((min(-8837471804315583090, 1)), 0)) : 1));
                                var_33 += ((((arr_10 [i_6] [i_6]) ? (arr_32 [i_13 - 1] [1]) : var_7)));
                                arr_40 [1] [1] [i_11] [i_10] [i_13] [i_12] [i_11] = ((var_11 != (((((arr_39 [i_6] [i_10] [i_11] [i_13] [i_13]) && (arr_39 [i_6] [i_10] [i_10] [i_13] [i_13 - 1])))))));
                                arr_41 [i_6] [i_13] [i_11] [i_12] [9] = (var_2 ? (((~((var_7 ? var_1 : 1))))) : (min(var_2, 5223612821887264090)));
                            }
                        }
                    }
                    arr_42 [i_10] [i_11] = max((min(var_7, (max(1, 3313770054162716084)))), var_11);
                    var_34 &= 5223612821887264087;
                }
            }
        }
    }
    #pragma endscop
}
