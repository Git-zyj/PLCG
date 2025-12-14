/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 |= ((((((min(782073833, 18014123631575040))) ? ((max((arr_0 [i_0]), (arr_1 [i_0])))) : (min(19516562, var_6)))) | (min(((4275450733 ? 19516562 : (arr_2 [i_0] [i_0]))), (max(19047, 2145278917))))));
        var_13 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_14 &= (arr_4 [i_1 - 2]);
        var_15 = (min(var_7, 1469385515));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_16 ^= ((-(var_4 >= 4)));
                    var_17 = ((+((max((arr_9 [12] [4] [i_4]), (arr_5 [i_4]))))));
                }
            }
        }
        var_18 = 12;
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_19 = ((((((((var_3 ? (arr_13 [i_6]) : var_4)) == (~-24))))) < (arr_14 [i_5])));
            var_20 = (max(var_20, ((min(((31744 >> (var_7 + 1631076035))), -24)))));
            var_21 = (max(var_21, (((var_7 ? ((+(((arr_15 [i_5]) >> (var_1 - 8224101517355203772))))) : 203884408)))));
        }

        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_22 -= -1;
            var_23 = (max(var_23, (((((!((min(4275450733, -2814177533010508687))))) ? (arr_16 [i_7 + 1] [i_5] [i_5]) : (((((-203884408 ? 33792 : (arr_12 [i_5 + 1])))) / var_8)))))));
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        var_24 = var_7;
                        arr_26 [i_8] [i_9] = (((var_5 < 12) ? var_10 : (max((min((arr_25 [8]), 3177704263)), (min((arr_19 [i_8]), 4275450723))))));
                    }
                }
            }
            var_25 = (((((min(19516562, 4946536335716573666)))) ? 4275450723 : (40280 != 128257328)));

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_26 = ((var_4 >> ((((var_8 >> (((((arr_13 [2]) ? 2233464949370085499 : var_2)) - 2233464949370085483)))) - 17922))));
                var_27 = (max(var_27, 8679674366812425325));
                var_28 = ((2814177533010508686 ? (-9223372036854775807 - 1) : 15983622537964926464));
                arr_29 [i_5] [i_8] [i_5] = (~var_9);
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_35 [i_5 + 1] [i_5] [i_5] [i_8] [1] = (min(3, (4294967295 ^ 19516571)));
                        var_29 += (((((126 ? -4 : 12731))) ? (0 >= var_0) : (-13 * var_2)));
                        var_30 = (-32767 - 1);
                        var_31 = ((((((~(arr_33 [i_8] [i_8] [i_8] [10] [i_13])))) + 2147483647)) >> ((min(12, 4064))));
                        var_32 = ((1 >= ((((2086844433 == (arr_13 [i_5])))))));
                    }
                }
            }
        }
    }
    var_33 = ((max(835888451, (-127 - 1))));
    var_34 = (max(var_34, (((((min((32310 & 19516543), var_5))) ^ ((((min(var_0, var_3))) ? var_8 : 0)))))));
    var_35 = ((var_5 ? (((((1 ? var_5 : 12))) ? (!var_10) : ((var_7 ? var_1 : 123)))) : ((max(var_7, var_2)))));
    #pragma endscop
}
