/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 *= ((min(((4294967274 ? 17285060806524638432 : 1), var_2))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        var_14 ^= 136;
                        var_15 += 134;
                        var_16 = (arr_6 [i_2] [i_2] [i_2] [i_2]);

                        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_2] [22] [i_2] = ((96 ? 7 : -9351));
                            var_17 = 122;
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (((27319 ? 3758096384 : 120)))));
                            var_19 = (arr_12 [i_1 - 1]);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = ((((159 ? var_10 : 49441328))) && var_6);
                        var_21 = ((136 ? (arr_11 [10] [i_2] [i_2] [i_2] [i_1 - 3] [i_0 - 1]) : (arr_11 [i_6] [i_2] [i_2] [i_2] [i_1 + 2] [i_0 - 4])));
                    }
                    var_22 |= (((!(arr_3 [i_0]))) ? (((max(9980, 119)))) : (max(1839414595, -9322)));
                }
                var_23 = (min((min((arr_2 [i_0] [i_1 - 3] [i_0 - 3]), 1064689092)), (max(((var_8 ? var_8 : var_2)), (!122)))));
                var_24 = arr_9 [i_0] [i_0] [i_0 + 1] [i_0];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((((min(7, 1))) ? (arr_32 [i_7 + 1] [i_8]) : 9223372036854775780))) ? 124 : (((((max(var_4, 9980)))) ^ (var_1 ^ 4294967255)))))));
                                var_26 = ((((max((var_1 + 1), -9354))) ? ((-((var_9 ? 1636373352 : 4294967291)))) : ((((arr_32 [i_8 - 4] [i_10]) ? (arr_32 [i_8 - 1] [i_9]) : var_6)))));
                                arr_33 [i_8] [i_10] [i_9] [i_8] [i_8] = ((((max((arr_19 [i_7]), (arr_26 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_11 + 3])))) ? (arr_26 [i_7] [i_9] [i_7 - 1] [i_11 + 3]) : (arr_19 [i_7])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_27 = 4294967291;
                                var_28 = ((2658593944 ? (((arr_19 [i_7 - 1]) ? 255 : (arr_32 [i_7] [i_12]))) : var_10));
                            }
                        }
                    }
                    arr_39 [i_7] [i_7] [i_8] = ((arr_24 [i_9] [i_8] [i_8] [i_7]) ? ((((min(0, var_6))) ? ((-(arr_34 [i_7] [i_7] [i_7 + 1] [i_7 + 1]))) : (arr_32 [i_8] [i_8]))) : ((((var_9 ? (arr_36 [i_7 + 1] [i_8] [i_9] [i_7 - 1]) : -9353)))));
                    var_29 = (max(var_29, ((min(((((min(var_6, (arr_34 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])))) ? (arr_31 [i_9] [i_9] [i_8] [i_7 - 1]) : (55555 && 2658593944))), (((!(arr_24 [i_7] [i_8] [24] [i_9])))))))));
                }
            }
        }
    }
    var_30 = var_4;
    #pragma endscop
}
