/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (882213367014855206 != 6757439401351900455);
    var_21 = var_4;
    var_22 *= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 570861028132757056;
        arr_4 [i_0] = (((((1719186594443559134 == (arr_2 [i_0])))) == (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (arr_2 [i_1]);
        arr_8 [i_1] [i_1] = ((((((max((arr_0 [i_1] [i_1]), var_18))) != var_1)) ? (arr_6 [i_1]) : (arr_0 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 -= ((2881625151323440978 ? -1510771158 : 1719186594443559134));
        arr_11 [i_2] [i_2] = (arr_2 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_25 *= (arr_2 [8]);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_2] [i_3] [i_2] [3] [i_2] [i_5] [i_6] = (((arr_19 [i_2] [i_2] [i_2] [i_2] [3] [i_2] [i_2]) ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_19 [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] [i_6])));
                            arr_23 [4] [i_3] [i_3] [i_3] [i_6] [i_2] = (((((4294967286 - (arr_2 [i_2])))) ? (arr_2 [i_2]) : (arr_5 [3])));
                            var_26 = (11689304672357651160 > -31177);
                            var_27 = ((+((var_19 ? (arr_20 [i_3] [i_4] [2] [i_6]) : (arr_18 [i_3] [i_3] [i_3] [i_3])))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_28 = 882213367014855206;
                            var_29 = (((((arr_20 [i_2] [i_3] [i_2] [i_5]) ? var_2 : (arr_21 [i_2] [i_2] [i_4] [i_7]))) | ((((-32767 - 1) + (arr_12 [i_7] [i_4] [i_3]))))));
                            arr_26 [i_2] [i_5] [i_4] [i_4] [i_7] [i_2] [i_7] = ((-(arr_17 [i_2] [i_4] [i_2] [i_7])));
                        }
                        var_30 = ((12728661200665717272 * ((((var_5 > (arr_7 [i_2])))))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_29 [i_2] [i_3] [i_4] [9] [i_2] [i_8] = (arr_21 [i_2] [i_4] [i_3] [i_2]);
                            var_31 = 54380;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_32 = 15565118922386110665;
                            var_33 = (((arr_13 [i_4]) & -1719186594443559135));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_34 = (min(var_34, (((((var_6 ? (arr_21 [2] [2] [i_4] [2]) : var_18))) ? ((-(arr_32 [i_3] [i_4] [i_5]))) : (((arr_28 [i_10]) ? var_16 : (arr_27 [i_2] [i_3] [i_4])))))));
                            var_35 = arr_1 [17];
                            var_36 = (arr_2 [i_2]);
                            var_37 = (arr_7 [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_38 = (arr_5 [i_2]);
                            arr_36 [3] [i_2] = (((arr_17 [i_2] [i_2] [i_2] [i_2]) ? (arr_19 [i_11] [i_5] [i_4] [i_4] [i_3] [i_3] [i_2]) : (arr_17 [i_2] [i_3] [i_2] [i_5])));
                            arr_37 [i_2] [i_3] [i_4] [i_5] [i_11] [i_4] &= (-1719186594443559135 + 12728661200665717266);
                        }
                    }
                }
            }
        }
    }
    var_39 = (((~-1719186594443559135) ? ((min((min(var_12, 1403851860)), (var_8 % var_12)))) : (~15565118922386110665)));
    #pragma endscop
}
