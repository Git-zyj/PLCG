/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_5 [i_1] [i_1] [i_0]);
                arr_7 [i_0] [1] = 1;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] [9] = ((((var_0 ^ (arr_0 [i_1]))) + var_3));
                                var_10 += var_1;
                            }
                        }
                    }
                    arr_16 [9] [i_1] = ((var_3 ? (((((4294967295 ? 12 : 141))) ? (var_7 ^ var_8) : (((-(arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))))) : var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_21 [3] [i_5] = (((var_3 ? var_8 : 18)));
                                arr_22 [i_0] [i_0] [i_0] [i_5] = var_8;
                            }
                        }
                    }
                    var_11 = -18964;
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_25 [i_7] [i_7] &= ((62 ? ((max(var_4, var_6))) : ((var_9 ? var_8 : (56 != var_9)))));
        arr_26 [i_7] |= var_8;
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_30 [10] [i_8] = ((var_2 ? (var_4 + 0) : ((var_9 ? (var_6 || 2251799813685232) : var_7))));
        var_12 = (arr_28 [i_8] [i_8]);
        var_13 = (min(var_13, ((((-57 % -114) / ((((var_0 ^ var_3) != var_6))))))));
        arr_31 [i_8] = var_5;
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        arr_34 [i_9] = var_6;
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    arr_43 [i_9] [i_10 + 2] [i_11] = (((arr_0 [i_9]) ? ((((((var_6 >> (var_0 - 15159462792516062472)))) ? ((var_2 ? var_6 : -4440)) : 4))) : (((((18269041326614671543 >> (var_0 - 15159462792516062449)))) ? ((var_6 ? var_8 : var_4)) : (arr_4 [1] [8] [i_11])))));
                    var_14 *= var_9;
                    arr_44 [i_9] [5] [0] [i_11] = ((((min(-1, -5838201412090775441))) ? ((18446744073709551615 ? (var_0 || var_2) : var_8)) : ((((var_8 ^ (arr_12 [i_9] [12] [i_9]))) * (((arr_18 [i_9] [i_9]) ? var_7 : var_6))))));
                }
            }
        }
        var_15 = (max(var_15, var_2));
    }
    var_16 -= var_5;
    #pragma endscop
}
