/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((((((-2014645710 ? (arr_2 [i_0 + 4]) : var_14))) ? (((var_1 >> (((arr_1 [i_0]) - 55694))))) : (arr_2 [i_0 + 4]))), ((((arr_1 [i_0 + 3]) != 4294967278)))));
        arr_4 [i_0 - 1] = (min(((((max(1124868868, 65521))) ? (((max(1, 1)))) : -18446744073709551608)), ((((((1 ? 2147483647 : -978252506))) || 3991337102)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_18 = (max(var_18, (arr_6 [i_0 + 1] [i_1 + 2] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (arr_7 [i_0 + 3] [i_1 + 1]);
                        var_20 = 4294967294;
                        var_21 = ((((-8399677838390502338 >= (arr_0 [i_3])))));
                        var_22 = (min(var_22, (((!(arr_7 [i_0 + 1] [i_0 + 3]))))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_23 = (max(var_23, (max((((-((var_1 ? var_13 : (-2147483647 - 1)))))), (((arr_8 [i_0 + 4] [i_4] [0] [i_4]) ? (arr_1 [i_4]) : 1))))));
            var_24 = ((((var_14 ? (arr_2 [i_0 + 1]) : 11))) ? (((2147483647 & (-2147483647 - 1)))) : (((((-3675381525417683424 ? -431529234 : (arr_14 [i_0] [i_0 + 2] [6])))) ? (arr_0 [i_4]) : ((424953331 ? 0 : 2231681492)))));
            arr_16 [i_0] [i_4] = (((((arr_10 [i_0 + 3] [i_0 - 2]) ? (((3853189285832421348 ? var_3 : var_12))) : (1 & 18446744073709551596)))) ? (max(var_0, (arr_13 [i_0 - 1]))) : var_5);
            arr_17 [i_0] [i_0] = 11;
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_25 = (arr_19 [i_0]);
            var_26 = (arr_9 [i_5 - 1] [i_0 + 3] [i_0 + 4]);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            var_27 = (min(var_27, (arr_0 [i_0 + 3])));
            arr_26 [i_6] [i_6] = (arr_24 [i_6] [i_0]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_0 + 2] [i_6] = (((arr_24 [i_6] [i_6 + 1]) ? (arr_27 [i_6] [15] [i_6] [i_6]) : ((((arr_0 [1]) ? (arr_29 [i_0] [i_0]) : (arr_2 [i_9]))))));
                            var_28 = ((-(arr_21 [i_0] [i_6 + 3] [i_6 + 3])));
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_8] [i_6 - 1] [i_6] [i_6 - 1] [1] = (((!-311755744) ? (!var_8) : ((1 ? 1732162938 : -978252506))));
                            var_29 = (min(var_29, (!var_6)));
                        }
                        arr_37 [i_8] [i_6] [i_6] [i_0] = -105;
                        var_30 = ((-(arr_19 [i_6 + 1])));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_31 = 10;
                            var_32 = (min(var_32, (~9223372036854775807)));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_33 = (((arr_15 [i_8]) ? var_15 : var_12));
                            var_34 -= (((1 % 2147483647) ? (arr_42 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : ((((arr_42 [i_12] [1] [i_7] [i_0] [i_0]) == (arr_15 [i_7]))))));
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_35 = (((arr_21 [i_6 + 1] [i_7] [i_13]) ? var_10 : (198 != var_0)));
                            var_36 = (var_6 | var_13);
                        }
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            arr_50 [i_8] [i_6] = ((-59 ? 885568480 : 1));
                            arr_51 [17] [i_6] [i_8] [i_7] [i_6] [3] = var_9;
                            var_37 -= var_6;
                        }
                        var_38 *= ((-(arr_10 [i_6] [i_7])));
                    }
                }
            }
        }
        arr_52 [i_0] = var_6;
    }
    #pragma endscop
}
