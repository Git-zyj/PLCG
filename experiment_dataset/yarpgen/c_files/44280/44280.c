/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((((((var_13 ? (arr_0 [i_0]) : (-2147483647 - 1)))) ? (arr_1 [i_0]) : ((1 ? -5354525051726196698 : 18446744073709551615))))) ? (arr_0 [i_0]) : (((min((arr_0 [i_0 + 1]), (arr_1 [i_0])))))));
        var_19 ^= (max((((159 <= (min(var_0, (arr_0 [i_0])))))), ((1274880569 ? (var_4 == var_12) : ((23322 << (((arr_1 [i_0]) - 3564869178))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_20 &= ((!(!var_0)));
                            var_21 |= 4418030098237655553;
                            var_22 = ((((((arr_9 [i_4] [i_2 - 1] [i_2] [21] [i_0]) ? (arr_9 [i_3 + 3] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_9 [i_3] [i_2 - 1] [i_0] [i_0] [i_0])))) ? (arr_9 [i_2] [i_2 - 1] [i_2] [i_1] [i_1]) : ((min((arr_9 [i_3] [i_2 - 1] [i_2] [11] [i_0 + 1]), (arr_9 [i_4] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2]))))));
                            var_23 = (max(((((max(var_11, 65535))) ? (((var_7 ? var_9 : -94))) : ((var_2 ? var_0 : 132120576)))), (((max(var_1, -9223372036854775790))))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_24 = (arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] [i_0] [i_3]);
                            var_25 = ((-37872 && (arr_1 [7])));
                        }
                        var_26 &= (((arr_7 [i_0] [22]) ? (arr_9 [i_0] [i_0] [23] [i_3] [20]) : 3225));
                        var_27 = (max(var_27, ((-94 ? (((((arr_11 [1] [i_0] [i_0] [i_0 - 1] [i_1] [i_2 - 1] [i_3 + 2]) <= 5354525051726196697)) ? (arr_6 [i_3] [i_2] [i_0 + 1]) : 37883)) : (((((min(var_4, -1827886690)) > (((arr_9 [i_0] [6] [i_2] [i_1] [i_3 - 1]) + (arr_6 [i_2] [i_1] [i_0 - 1])))))))))));
                        var_28 = var_13;
                    }
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        var_29 = min((max((arr_16 [i_0 + 1] [i_0] [i_0] [i_2 - 2] [i_6]), ((var_0 ? -94 : (arr_7 [i_0] [i_6 + 1]))))), (((~(max(-1827886690, 27663))))));
                        var_30 += 9129349122433408428;
                    }
                    var_31 = (((((min((arr_13 [i_0] [4]), (arr_1 [i_1]))) == ((((arr_9 [i_0] [i_0] [i_2] [i_1] [i_1]) ? 21837 : (arr_15 [i_0] [i_0 - 1])))))) ? ((min((arr_8 [i_0] [i_0] [i_0] [i_0] [23]), var_3))) : (arr_12 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_32 = (min(var_32, var_16));
                                arr_24 [i_8] [i_1] [i_1] [i_7] [i_8] [14] [i_2] = (max((((((var_13 ? var_0 : 211)) > (min(170522005172661082, 664011060))))), 52190));
                                var_33 = ((((min((arr_15 [i_0] [22]), var_8)) >= 77)));
                            }
                        }
                    }
                }
            }
        }
        var_34 ^= (((max((arr_19 [i_0] [i_0 - 1] [i_0] [i_0]), (arr_19 [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) % (max((arr_19 [i_0] [i_0 - 1] [i_0] [i_0 + 1]), var_15))));
        var_35 = ((max((min((arr_20 [i_0] [i_0] [9] [i_0] [i_0 - 1]), (arr_2 [i_0]))), 6)));
    }
    var_36 = (((max(var_4, (var_0 & var_7)))) ? ((((-9064024536360971862 != (~4304612066203769597))))) : (max(var_15, ((53 ? 42214 : var_4)))));
    var_37 = ((((((~var_1) ? var_4 : -20321))) ? ((max(var_15, var_14))) : var_9));
    #pragma endscop
}
