/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (min(((+((((arr_6 [i_0] [i_1]) <= var_2))))), (((var_8 > (~var_3))))));
            var_12 = (min((min((arr_2 [i_1]), 389688719)), (((var_1 << (((arr_2 [i_0]) + 5327927864632557528)))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_1] = (min(1, ((!(arr_12 [i_0] [i_0] [i_1] [i_3 - 4] [1])))));
                        var_13 |= (((((389688719 + (-1 == -4508158902706847981)))) ? ((min(((6404633165910255198 ? 0 : 255)), 0))) : 4294967295));
                        var_14 -= (max(-1991, (((((41439446 ? -1 : 1)) == (1 <= var_7))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3 + 2] = (((arr_1 [i_0]) == ((((arr_5 [i_3 + 2] [i_3 - 4]) != ((var_2 ? var_8 : var_1)))))));
                        var_15 = (max(var_15, (((var_7 ? (max(var_7, 1)) : ((min(5, (arr_4 [i_3 - 1] [i_3] [i_3 - 4])))))))));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_16 &= ((max((((-(arr_1 [i_4])))), -9)));
                var_17 = (min(var_10, (min((((!(arr_3 [i_1] [i_1] [i_4])))), (max(1747239764607366649, 18446744073709551615))))));
                var_18 = (min(var_18, ((max((min((((arr_1 [i_1]) ? (arr_3 [i_0] [i_0] [i_0]) : var_5)), ((((arr_15 [i_1] [i_1] [i_0] [i_1]) ? 41877 : (arr_4 [i_0] [i_1] [i_1])))))), ((((arr_5 [i_0] [i_1]) > var_2))))))));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_19 *= ((1 + (max(7406856606855759034, (~1)))));
                var_20 = ((+(((((((arr_0 [i_0] [i_0]) + (arr_11 [18])))) && (arr_15 [i_0] [i_0] [i_1] [8]))))));
            }
            var_21 &= (~((((min(var_5, 48178))) % ((255 ? var_0 : var_4)))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_22 [i_0] [i_0] [10] = (((41439446 & var_2) ? (arr_21 [i_0] [i_6] [i_6]) : (min(10373214624866726710, 56811))));
            arr_23 [i_6] [i_6] = (!1889162320822195415);
            var_22 = 65535;
        }
        arr_24 [i_0] |= ((!((((arr_18 [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_18 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                {
                    arr_30 [i_8] [i_8 - 1] [i_8] = (max((max(41439455, var_8)), 7));
                    var_23 = (max(var_23, (((((max(var_5, (arr_12 [i_0] [10] [i_8 - 2] [i_0] [i_7])))) <= ((((arr_12 [i_0] [i_0] [i_8 - 2] [i_0] [i_7]) <= var_7))))))));
                }
            }
        }
        arr_31 [i_0] = (((((arr_16 [i_0] [i_0] [i_0] [i_0]) >= var_3)) ? ((((arr_6 [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0])))) : (~358887041)));
    }
    var_24 = ((((((var_11 >> var_8) << ((((min(var_7, var_2))) + 97))))) ? var_6 : (((-9223372036854775807 - 1) ? var_1 : var_1))));
    #pragma endscop
}
