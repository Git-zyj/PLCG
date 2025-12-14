/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (~-3843600282);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_18 = ((((((arr_4 [i_1 - 2] [i_3 - 1] [i_3 + 1]) << (((arr_4 [i_1 + 1] [i_3 + 1] [i_3 - 1]) - 61926))))) ^ (min(451367007, -888739902209019355))));
                        var_19 = ((min((arr_2 [i_3 + 1]), 1986349221209817978)));
                    }
                    arr_12 [i_0] [i_2] [i_2] [i_0] = (-(~3843600283));
                    var_20 = ((((1 * (arr_1 [i_0] [i_1 - 1])))) ? ((42373 ? 3843600288 : (((0 ? 40 : -28286))))) : ((((138 <= ((10297437480780510417 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) : 51406)))))));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = ((var_8 ? ((var_8 ? -1639270939 : ((1 ? 0 : var_10)))) : 28310));

    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_23 = (arr_14 [i_4]);
        var_24 = (((arr_14 [i_4]) ? ((3550920445917890691 ? (arr_13 [i_4]) : (arr_14 [i_4]))) : 3843600276));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_18 [i_5] = ((1040269847253519430 <= (arr_13 [i_5])));
        var_25 = (((arr_5 [i_5] [i_5] [i_5]) - (arr_5 [i_5] [i_5] [i_5])));
        arr_19 [i_5] [i_5] = (((arr_3 [i_5]) >> (((!(arr_1 [i_5] [i_5]))))));
        var_26 = (((arr_0 [i_5]) ? -549031341 : (arr_0 [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        var_27 ^= ((((49 ? 451366998 : -549031341)) >= ((((arr_8 [i_5] [i_5] [i_8]) * (arr_21 [i_5] [i_5] [i_5]))))));
                        var_28 = arr_7 [i_6];
                        arr_28 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = (((arr_26 [i_8] [i_7] [i_7] [i_6] [i_5]) ? (arr_26 [i_5] [i_6] [i_7] [i_7] [i_8]) : (arr_9 [i_6] [i_7])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
