/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 -= -var_17;
                        var_19 = (min(var_19, var_7));
                        var_20 = (max(var_20, (var_14 & var_15)));
                        var_21 = (max(var_21, (((((max(var_15, ((9 ? -4905999116065721542 : 2191272383279781775))))) ? ((max((var_7 >= var_0), (var_15 != var_11)))) : ((((var_7 + var_6) != var_12))))))));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_22 ^= var_1;
                        var_23 -= (max(0, ((max(-1, (min(var_15, 7)))))));

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            var_24 -= (~((var_12 ? 8 : 25862)));
                            var_25 -= var_6;
                            var_26 |= (((min(var_4, ((max(-102, 11))))) + (-1441484087 % 1)));
                        }
                        var_27 = (max(var_27, (((((((min(var_3, var_17))) ? (max(-1294976022, -102)) : ((min(var_10, var_16))))) != ((((max(var_16, 1256787281)) != (((max(23, 0))))))))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_28 -= (min((min(((max(var_12, var_16))), (var_13 % var_10))), -var_8));
                        var_29 += ((max((var_13 && 26717), var_3)));
                        arr_18 [i_0] [i_0] [i_1 + 1] [i_1] [i_0] [i_6] &= (min((min(0, -673143157)), 3038180003));
                        var_30 &= -434258546;
                    }
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_31 ^= max((var_3 + var_13), ((min(-29795, var_15))));
                        var_32 += min(((((244912587 / var_4) & ((max(var_7, var_15)))))), ((var_7 ? (~var_3) : (!1))));
                        var_33 *= (max(((~(var_15 * 41705))), 2513308661));
                        var_34 &= var_0;
                    }
                    arr_22 [i_0] [i_1 - 1] [i_2] &= 37;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_35 ^= var_7;
        var_36 = (min(var_36, (((-2114677668 ? -4905999116065721542 : 18446744073709551607)))));
        var_37 |= 98826984;
        arr_26 [i_8] [i_8] |= var_10;
        var_38 = (min(var_38, (var_3 == 179)));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_39 &= (~((((min(0, var_6)) < 102))));
                                var_40 ^= var_14;
                            }
                        }
                    }
                    var_41 = 11050582621632650400;
                }
            }
        }
        var_42 *= ((min(var_8, var_15)));
        var_43 = (max(var_43, ((min((((-1 + var_17) ? 9 : (max(var_4, var_3)))), ((((var_12 != var_4) == (!var_13)))))))));
    }
    #pragma endscop
}
