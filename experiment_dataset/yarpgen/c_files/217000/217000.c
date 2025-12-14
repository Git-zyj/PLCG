/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((-1576134112 ? (((var_1 ? var_6 : var_2))) : (~var_0))), var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((var_3 ? var_3 : ((var_0 ? 1625883042 : 2220211174))))) ? (max(var_0, ((min(var_8, var_3))))) : (((((-(arr_0 [i_0])))) + (((arr_1 [i_0] [i_0]) ? (arr_1 [2] [i_0]) : 4973865707155071112)))))))));
        arr_2 [i_0] = ((-((var_7 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_14 += 238;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, (!2074756122)));
                        var_16 = ((((((var_8 ? (arr_6 [7]) : var_11)))) * ((max((arr_0 [i_2]), (((var_7 > (arr_4 [i_2])))))))));
                        var_17 &= -var_0;
                        arr_14 [i_1] [i_2] [i_2] [i_4] = (arr_10 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        var_18 &= (arr_4 [i_1]);
        var_19 = (arr_11 [i_1]);
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (min(2220211174, 6785398431751844810));
        arr_20 [i_5] [i_5] = ((18 > (max((var_10 % var_1), (~2)))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 = (min((676136463 ^ 19748), (!var_5)));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_21 *= (max(((min(var_3, var_7))), (((((arr_10 [i_7] [5] [i_7]) + 9223372036854775807)) >> var_3))));
                        arr_32 [i_6] [i_6] [10] [i_6] [i_6] = (max(((var_5 ? -1275123545 : 18446744073709551615)), ((((-12 ? -8 : 10327))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_39 [i_6] [i_10] [i_11] [1] = (((!((max((arr_24 [i_11] [i_10] [4]), 37794))))));
                    var_22 ^= (((((11661345641957706800 ? ((var_9 ^ (arr_8 [1] [1]))) : 1))) ? (min((!-1227820002), 9223372036854775807)) : (arr_34 [i_11])));
                    var_23 = -43823;
                    arr_40 [i_11] = (0 ? 33554304 : -1334847123);
                    arr_41 [i_11] = (((~var_8) ? var_3 : ((((min((arr_10 [i_6] [i_10] [i_11]), 1))) ? (arr_15 [i_6]) : 0))));
                }
            }
        }
    }
    var_24 = 38017;
    #pragma endscop
}
