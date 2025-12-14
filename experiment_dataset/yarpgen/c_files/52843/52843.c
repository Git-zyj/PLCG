/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [12] &= var_3;
                        var_20 = (max(var_20, (arr_3 [7] [7])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_21 = (min(var_21, 262143));
                        var_22 = (max(var_22, (arr_8 [i_0] [10] [i_0] [8] [i_4])));
                        var_23 &= 3657602659;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((((((arr_11 [12] [i_2] [0]) - (arr_8 [i_6] [2] [i_2 - 1] [2] [12])))) ? -2809446811521921600 : (((arr_0 [i_6]) + var_10)))))));
                                var_25 = (max(var_25, ((((-((max(448, (arr_12 [i_5]))))))))));
                                var_26 = (arr_4 [10]);
                            }
                        }
                    }
                    var_27 = (min(var_27, (!3657602653)));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_28 = (arr_22 [i_0] [i_2] [i_7] [i_8]);
                                var_29 = (max(var_29, (((637364637 ? 65535 : 637364650)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_30 += (arr_28 [i_10 - 1] [i_11 - 1] [i_13]);
                                arr_37 [10] [i_10] &= (((((max(35641, (!31598849))))) % (((((arr_32 [i_10 + 1]) + (arr_30 [i_9]))) + ((max(637364654, (arr_25 [i_9]))))))));
                            }
                        }
                    }
                }
                arr_38 [i_9] [1] [i_9] = -2147483633;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 9;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            {
                var_31 -= ((23758 ? (((~(arr_28 [i_14 + 3] [i_15 - 1] [i_15 - 1])))) : ((~(3575480188 | var_5)))));

                for (int i_16 = 3; i_16 < 10;i_16 += 1) /* same iter space */
                {
                    arr_48 [1] [i_14 - 1] [i_16 - 2] &= ((((7802724529906623203 + (arr_40 [i_15 - 1]))) <= (~1851537758)));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_32 -= var_9;
                                var_33 -= (((~(max(var_16, (arr_16 [i_15] [i_17]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_19 = 3; i_19 < 10;i_19 += 1) /* same iter space */
                {
                    arr_57 [i_14] [i_15] [i_14] = (((((var_4 ? 120 : (arr_35 [i_14] [i_14] [i_15] [1] [1])))) ? (var_14 << var_13) : (((arr_16 [i_14] [4]) ? 4049182726 : (arr_13 [i_19] [i_14])))));
                    var_34 = (max(var_34, 171914306));
                }
                for (int i_20 = 4; i_20 < 11;i_20 += 1)
                {
                    arr_61 [2] [10] |= var_11;
                    var_35 ^= var_17;
                    var_36 = (max(var_36, (arr_13 [i_14] [14])));
                    arr_62 [i_20] [10] [6] |= ((((max(-8758313118446579491, (((174672827 ? (arr_21 [i_20 - 2] [i_15] [i_15] [i_15] [i_14 + 2] [i_14 + 2]) : var_6)))))) ? (((((arr_32 [i_20 + 1]) < (arr_32 [i_20 - 4]))))) : ((max(8758313118446579490, -424778233)))));
                    var_37 = (max(var_37, var_9));
                }
            }
        }
    }
    var_38 ^= ((var_5 * (31598863 <= 3443)));
    #pragma endscop
}
