/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(9223372036854775807 / var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] [i_0] = ((5729818152766217484 ? (arr_1 [i_0]) : (((var_15 ? var_10 : var_10)))));
        var_17 = (((((arr_1 [i_0]) ? -122 : (arr_1 [i_0])))) && 10141885642229010278);
        var_18 = arr_1 [i_0];
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = 0;
        arr_6 [i_1] [i_1] = var_10;
        var_20 &= var_11;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            var_21 = (arr_7 [i_2 - 1]);
            var_22 = ((!(0 >= -12086)));
            var_23 = (max(var_23, ((((var_4 != 11531) ? ((((arr_10 [i_2] [1] [i_2]) ? (arr_0 [i_2]) : -6367652104591511640))) : ((-56 ? 1064735727 : 11587971263824044503)))))));
            var_24 *= (128 >= 3597166756155730308);
            arr_11 [i_3] [23] |= (arr_5 [i_2] [i_3 - 2]);
        }
        var_25 = ((14849577317553821308 & (arr_8 [i_2 - 1])));
        var_26 = (((var_14 + 2147483647) >> (((arr_10 [18] [i_2 - 1] [i_2 - 1]) - 3386012365))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_27 = ((((-17623 ? 127 : (((arr_13 [i_4] [i_4]) ^ 9223372036854775807)))) >= ((((((var_3 ? 1178971078 : 0))) ? var_3 : var_13)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_28 &= var_13;
            arr_18 [i_5] |= ((3230231557 << (var_8 - 12698181649911130138)));
            var_29 = (((arr_1 [i_5]) + (((17622 ? (arr_15 [i_4]) : var_6)))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_30 -= (((((arr_21 [i_4 - 1] [i_6] [2]) && 39)) ? ((max(3671204856, (arr_21 [i_4 - 1] [i_6] [i_4 - 1])))) : 1298666284147531016));
            var_31 = (max(((((~94) > (arr_17 [i_4 - 1] [i_4])))), 13));
            arr_22 [i_4] = ((4245537008 >> (((arr_9 [i_4 - 1] [i_4 - 1]) - 212))));
            var_32 &= ((((min(((max((arr_1 [i_4]), var_2))), (((arr_7 [i_4]) ? var_8 : 48))))) ? 1528071593398546513 : ((max(var_13, (min((arr_9 [i_6] [i_4]), (arr_10 [16] [16] [16]))))))));
            var_33 = ((((!(var_0 && -880574190))) && ((((arr_9 [i_4 - 1] [i_4 - 1]) ? 1122508243 : 2926)))));
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_34 = ((!((8493 || (arr_17 [i_4 - 1] [i_4 - 1])))));
            arr_27 [i_4] [16] [i_4] |= var_9;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 23;i_9 += 1)
            {
                {
                    var_35 = (min(var_8, ((min((arr_24 [i_4 - 1] [i_4 - 1] [i_9 + 1]), (arr_24 [i_4 - 1] [i_4 - 1] [i_9 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_36 = (((((min(2147483647, -2254799264902865871)))) ? (min(var_13, (((arr_16 [i_11]) ? var_5 : 30594)))) : ((-6249193515616141890 ? var_12 : (arr_19 [i_8])))));
                                var_37 |= var_10;
                                var_38 = (~2570517739);
                            }
                        }
                    }
                    var_39 = var_0;
                    var_40 = (((((min((arr_30 [i_4]), (arr_29 [i_4]))))) ? (arr_29 [i_8]) : ((((min((arr_24 [i_4] [i_8] [i_4]), (arr_26 [i_4] [i_4])))) ? 0 : (arr_1 [i_4 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
