/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max((max(var_2, -11344730850268017876)), ((max((max(var_15, 67092480)), -370303601)))));
    var_18 = ((-((370303601 << (-1317857856 + 1317857856)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = -370303602;
        var_20 = (max(var_20, ((max(65535, 3630037604)))));
        var_21 -= (arr_1 [i_0] [15]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_22 = (min(var_22, var_9));
            var_23 = (((var_4 ? (arr_7 [i_2 - 1] [i_2 - 2]) : (arr_7 [i_2 + 1] [i_2 + 1]))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_24 ^= var_6;
            arr_11 [i_1] [i_3] [i_3] = -370303602;
            var_25 = (max(var_25, ((max(-370303601, -1317857856)))));
            var_26 *= ((((max(var_15, (arr_0 [9])))) ? var_1 : ((max(0, (arr_9 [i_3]))))));
            var_27 = (max(var_27, (((!((min((arr_7 [i_1] [i_3]), (arr_3 [i_3] [i_1])))))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_28 = (arr_2 [i_1]);
            var_29 = (min((arr_0 [i_1]), ((104 ? (arr_9 [i_1]) : (arr_9 [i_1])))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_30 = ((~(max((arr_17 [i_1]), ((((-2147483647 - 1) ? (arr_6 [7] [i_5]) : (arr_8 [i_1]))))))));
            var_31 ^= ((-(arr_9 [i_5])));
            var_32 = (max(var_32, ((min((((arr_2 [1]) + ((-(arr_10 [i_1] [i_5] [i_1]))))), var_9)))));
            arr_18 [4] [i_1] [i_5] = (max(((((arr_8 [i_1]) ? ((max(-11012, var_9))) : var_5))), (min((arr_6 [i_1] [i_5]), 3462921758676242137))));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [i_6] [i_6] = ((~(~253)));
                    var_33 = var_3;
                }
            }
        }
        arr_25 [i_1] = (min(3021895684236648241, 370303591));
        arr_26 [i_1] [i_1] = ((((max(21005, 0))) ? ((((max(-239922496, var_15))) ? ((2975414023 ? var_11 : var_3)) : (arr_21 [i_1] [i_1]))) : -370303602));
    }
    var_34 = ((var_11 ? var_12 : (((370303599 ? 1317857838 : 0)))));
    #pragma endscop
}
