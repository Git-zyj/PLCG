/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((56079 ? -8 : -8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 ^= ((!((min(2047, 2038)))));
                var_16 = (min(var_16, ((min(2065, 9)))));
                var_17 ^= (max((((var_11 / 55926) * (min(63, (arr_2 [i_0] [i_0] [i_1 + 3]))))), (39 + var_12)));

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3] [i_1] [1] [i_0 + 2] = 0;
                                var_18 &= 65535;
                                arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] = ((-4891747624428023330 ? (arr_4 [i_1] [i_0 + 2] [14] [i_1]) : (min(var_11, ((max(-11, -10)))))));
                                var_19 |= arr_6 [12] [i_0] [i_0] [i_0];
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_1] = (((-(arr_5 [i_1] [i_0]))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = ((96 << (((arr_3 [i_0 + 2]) + 1189419136591897181))));
                        arr_19 [i_0] [i_0] [i_0] [i_0 - 1] &= (((8 ^ var_5) | (var_0 ^ 63496)));
                        var_20 += (((arr_13 [16] [i_1] [i_0] [i_1 - 1]) ? (arr_13 [i_1 + 2] [i_1 - 3] [i_0] [i_1 + 1]) : (arr_13 [i_1] [i_1] [i_0] [i_1 - 1])));
                        arr_20 [i_1] [i_1] = 5614;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_21 = (min((((max(var_3, 39)) >> (var_0 - 33445))), 5622));
                        var_22 = (max(var_22, ((~(((((-4891747624428023330 ? 59918 : 63491))) ? (15 | 4415390416169958810) : 11145))))));
                        var_23 = ((((((~(arr_16 [i_1])))) | ((var_6 ? -1284471153564006727 : (arr_13 [11] [i_2] [i_1] [i_2]))))) | (((~(!5622)))));
                        var_24 |= (arr_2 [i_2 - 2] [i_1 - 2] [i_2 - 2]);
                        arr_23 [i_0 + 2] [i_1] [1] [6] [i_0] = ((((var_13 | ((((arr_4 [i_1] [i_2 + 2] [5] [i_1]) ? -9 : (arr_7 [i_1]))))))) ? (max((((54391 ? 32754 : 120))), (((arr_6 [16] [i_1] [i_1] [17]) ? (arr_13 [16] [i_0] [i_1] [8]) : var_11)))) : -9);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        arr_28 [14] [i_0] [i_2] |= (((6766656331528771253 ? -1 : 37880)));
                        var_25 = (max(((-9 ? 37631 : var_5)), (-1 || 320096508370061822)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {
                    var_26 = ((var_7 ^ (((~(arr_8 [i_8] [i_8] [i_9] [i_10]))))));
                    var_27 ^= 56519;
                }
            }
        }
    }
    var_28 *= ((var_11 ? (var_12 && -1) : var_7));
    #pragma endscop
}
