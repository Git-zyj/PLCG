/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [7] &= var_6;
        arr_5 [i_0 - 2] = (max((-1 != 31), (!4294967295)));
        var_10 &= (max((min(-7125357409894630049, var_7)), var_9));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] = (arr_9 [i_1] [i_2]);
            arr_11 [i_1] = (((7125357409894630060 ? 2251795518717952 : var_1)));
            var_11 *= (4294967295 || var_6);
            var_12 += 5;
            arr_12 [i_1] [3] [i_1] = ((var_0 ? -3086 : 4095));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] = ((((((max(4294967295, var_0)) / var_3))) ? -5252315077410980095 : var_4));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((arr_24 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_6 + 2]) ? (1037 && 204) : ((6663050206814241630 ? 4294963201 : 5970240847596024342)))));
                            var_13 = 66977792;
                        }
                    }
                }
            }
            var_14 ^= var_7;
            var_15 = ((var_4 > (~-1221339417)));
        }
        var_16 = (max(var_16, var_7));
    }
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                var_18 = (min(var_18, (((((((1451370832651039910 ? 36028796951855104 : 951132251)))) ? 18446744073709551589 : (max((((var_1 ? var_3 : 32))), ((142395378439168986 ? 562949953421311 : 0)))))))));
                var_19 = (((((-(~70368744177663)))) ? (max(((var_1 ? 234 : 1)), var_1)) : ((var_1 ? ((0 ? 1 : -17041)) : -85))));
                var_20 *= (((((9176713797440813975 ? (max(32, 4294967291)) : 93))) == ((((!(arr_32 [i_8]))) ? 163 : (((arr_30 [i_8] [i_7]) ? var_8 : 240))))));
            }
        }
    }
    #pragma endscop
}
