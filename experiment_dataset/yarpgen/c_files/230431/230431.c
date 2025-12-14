/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((var_5 ^ (~var_1)));
        var_14 = ((215 ? ((225 ? ((3557507641 ? -17628 : 215)) : -2)) : 15332));
        var_15 = var_10;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_2] [i_1] = (-12613 | 1);
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((((35184372088831 ? ((-14582 ? var_12 : -9202289755436196041)) : var_5)) <= ((((arr_9 [i_2 - 1] [16] [i_2] [i_2 - 1]) ^ (arr_9 [i_2 - 1] [8] [i_2] [i_2 - 1]))))));
                }
            }
        }
        arr_12 [i_1] = 167;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4] = ((((arr_5 [i_4] [i_4]) << (((arr_6 [i_4] [i_4] [i_4]) - 4054112471223283939)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 7;i_6 += 1)
            {
                {
                    arr_21 [i_4] = 255;
                    arr_22 [i_6 + 1] [i_6] [i_6] = (((((var_3 ? 42 : ((-1386540766368624963 ? 8282401020364776463 : -24450))))) ? 18446708889337462785 : (5044410226433650101 * 0)));
                    var_16 = (min(var_16, (((((((var_8 ? var_7 : var_12)) < (((var_7 ? 25313 : var_5))))) ? ((var_8 ? (arr_20 [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 3]) : (1629906644 < -1977118869))) : ((var_0 | (arr_20 [i_6 + 2] [i_6 + 3] [i_6 + 3] [i_6 + 1]))))))));
                    var_17 = (max(var_17, ((max(((~(min(var_12, (arr_19 [i_4] [i_5] [i_6]))))), (-118 == 3641571732593318683))))));
                    var_18 *= (((1 / -47) / (arr_4 [i_6 - 2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_19 = ((((arr_24 [i_8 - 1]) ? var_3 : var_12)));
                    arr_29 [i_7] [i_7] [i_8] [i_9] = (215 | 19);
                    var_20 ^= (((((var_0 ? (arr_6 [5] [i_8 + 2] [i_8 + 2]) : (arr_6 [i_7] [i_8 + 1] [i_8 + 1])))) + (3874401874861586089 ^ 61440)));
                    arr_30 [i_7] [i_7] [i_7] [i_8] = (min(((((((35184372088843 ? (arr_4 [i_7]) : var_5))) == var_3))), (((((4053631187 ? var_2 : var_2))) ? (((var_2 ? 2908308341 : var_1))) : var_6))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((var_9 ? (var_4 - var_3) : ((min(1456544461, 1)))))) ? ((((max((arr_27 [i_10] [i_10]), var_4))) ? var_7 : (var_5 | var_9))) : (var_9 && var_7)))));
                                var_22 = (((arr_34 [i_7] [i_7] [i_7] [2] [1] [i_7]) | ((((max(4192683450, var_4)) >> ((((max(var_9, var_2))) - 54700)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
