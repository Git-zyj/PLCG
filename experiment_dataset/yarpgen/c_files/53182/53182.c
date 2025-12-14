/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((1 ? 36 : 177))), (1 | 0)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 -= (((((((var_0 ? (arr_2 [i_0] [i_1] [i_0]) : 1))) ? (arr_4 [i_0] [i_0] [i_0]) : ((1 ? var_0 : var_1)))) << (((((((280079420 ? var_1 : var_6))) ? ((-(arr_4 [i_0] [15] [i_1]))) : ((max(1, var_4))))) - 216))));
            arr_5 [i_1] [i_1] = ((((-(((arr_1 [i_1]) ? (arr_1 [22]) : 0)))) < (min((max(2574575370, 28)), ((-(arr_3 [i_1] [i_1])))))));
            arr_6 [i_0] [i_1] = (((((((max(var_9, var_2))) ? ((((arr_4 [i_0] [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1] [1])))) : ((3 ? (arr_3 [i_1] [i_0]) : var_1))))) ? 4204493052 : (((arr_4 [i_1] [i_1] [i_1]) + (arr_1 [i_1])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_2] [10] [21] [i_4] = ((-0 ? ((0 ? (min((arr_9 [i_0] [i_0] [i_3]), (arr_3 [i_1] [i_4]))) : 4209646202)) : 23637));
                            var_12 -= ((((max((arr_9 [i_0] [i_0] [1]), (arr_9 [i_0] [i_0] [i_0])))) ? ((((!(((var_8 ? 681312935 : var_2))))))) : -9455633791050647367));
                        }
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] |= (arr_11 [16] [i_0] [i_0] [i_0]);
        var_13 = (min(var_13, (((((max((((arr_14 [i_0] [i_0] [i_0] [i_0] [5] [5] [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))), ((min(var_0, var_2)))))) <= (~17221426743482085692))))));
        var_14 = (min(var_14, ((((((((-5913206023575044266 ? var_0 : 4294967295))) && ((max(var_1, var_8))))) ? ((-((0 ? var_2 : (arr_15 [i_0]))))) : (((-(~65535)))))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_27 [1] [i_6] [i_5] [i_5] = (((((var_6 >> (var_0 - 41398)))) ? (!-8394621025464506339) : ((((var_7 <= (arr_2 [i_5] [i_6] [i_7]))) ? (var_0 * 1) : ((min(var_8, (arr_11 [i_5] [i_5] [i_5] [i_5]))))))));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_15 = (max((arr_2 [i_5] [i_7] [i_8]), ((max(15987, 1)))));
                        arr_32 [i_8] [i_6] [4] [18] [i_7] [i_8] &= (((((((var_4 ? 34 : var_4))) || ((((arr_28 [i_5] [i_7] [i_8]) ? var_9 : (arr_2 [i_7] [i_7] [i_7])))))) ? ((~(arr_11 [i_5] [i_6] [1] [i_8]))) : (!var_7)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_9] [1] [1] [i_9] = 90474258;
                        var_16 = var_0;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_5] [i_5] [i_5] = var_1;
                        var_17 = -18446744073709551615;
                    }

                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        var_18 = (min(var_18, ((max((((-(min((arr_8 [i_5]), 4204493037))))), ((-13589 ? (max((arr_39 [i_5] [i_6] [i_6]), (arr_26 [i_5] [15] [17]))) : (((((arr_1 [i_6]) > var_4)))))))))));
                        arr_44 [i_5] [12] [12] [22] [i_7] [i_5] = (arr_12 [22] [i_7] [i_7] [i_7] [1] [i_11]);
                    }
                }
            }
        }
        var_19 = ((((((780642250 ? (arr_39 [i_5] [i_5] [i_5]) : var_8))) != (((arr_43 [i_5] [i_5]) & (arr_16 [i_5] [i_5] [9] [i_5] [i_5]))))) ? (max((6304964030813487956 % var_5), (arr_23 [i_5] [i_5] [i_5]))) : (arr_39 [i_5] [i_5] [i_5]));
    }
    #pragma endscop
}
