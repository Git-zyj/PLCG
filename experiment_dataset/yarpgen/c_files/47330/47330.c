/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (max(var_14, ((max((((((var_2 ? 42 : (arr_3 [i_0] [i_0])))) ? (max((arr_0 [10]), (arr_3 [i_0] [i_0]))) : (((min(32767, 1)))))), (max(4480099620173044226, ((1 ? 1 : (arr_0 [6]))))))))));
                        var_15 *= ((((!var_1) ? ((~(arr_0 [i_0]))) : (max((arr_4 [i_0] [i_1 + 1] [i_0]), (arr_1 [2] [i_1]))))));
                        var_16 -= 1;
                        var_17 = (max(var_17, 32767));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (min(var_18, var_8));
                        arr_13 [i_0] |= (max((min(((var_5 ? -1 : -1)), (151 + var_12))), var_10));
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [1] &= (((((((177 ? 0 : (arr_3 [i_0] [i_1 + 2])))) ? (max((arr_6 [i_0]), 0)) : (arr_3 [i_5 + 1] [i_1 + 1])))) ? ((87 ? (arr_10 [i_0] [i_0] [i_1 - 1] [i_0] [i_5]) : (arr_12 [1]))) : (((var_7 ? ((32767 ? 1 : 999892595868493918)) : ((((arr_8 [i_0] [i_0]) ? var_4 : 1)))))));
                        var_19 = (min(var_19, (((~(max((min(var_12, 549621596160)), ((var_9 ? 2932113495387281376 : 1)))))))));
                        var_20 *= ((var_6 != (!1125899906842623)));
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_21 *= ((((1 ? (var_1 >= -3004560390730077444) : 18445618173802708993)) == (((~(max(1265537334, (arr_2 [i_6]))))))));
                        arr_20 [i_0] [i_0] &= 18445618173802708992;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 *= (~1265537330);
                            var_23 = (min(var_23, (((18446744073709551615 ? 14 : 1)))));
                            var_24 *= (max(((~(min((arr_18 [i_0] [i_0] [i_2] [i_6] [i_1] [i_7]), 1125899906842621)))), (arr_12 [i_6])));
                            var_25 -= ((15514630578322270245 ? 1 : 6));
                        }
                        arr_25 [i_6] [i_6 - 3] [i_2] [i_1 + 2] [i_1 + 2] [i_0] &= var_11;
                    }
                    var_26 = (max(var_26, ((((arr_15 [i_0] [i_0] [i_0] [i_0]) >= ((var_7 ? (!1) : var_0)))))));
                }
            }
        }
    }
    var_27 = (min(var_27, 13345103693954151257));
    #pragma endscop
}
