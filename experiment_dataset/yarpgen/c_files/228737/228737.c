/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_13 = (min(var_13, ((((var_0 ? 8353826385762118118 : (arr_5 [i_0] [2] [i_0])))))));
            var_14 = var_8;
            var_15 = ((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_1]) : var_3))) ? (arr_4 [i_0 - 1] [i_0] [6]) : 4517862770938278233));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_16 = (var_3 * (((arr_3 [i_2 - 1] [i_0]) * (arr_3 [i_2 + 1] [i_0]))));
            arr_9 [i_0] = (((min((arr_4 [i_0 + 2] [i_0] [i_0]), var_7))) && (((-(arr_4 [i_0 + 1] [i_0] [i_0])))));
            var_17 = (max((min(var_7, ((var_5 ? 13928881302771273382 : var_10)))), (((-(arr_3 [i_0] [i_0]))))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_18 *= var_9;
                arr_12 [i_0] [i_0] = ((-(arr_10 [i_3 + 1] [i_0])));
                var_19 = (((arr_4 [i_2 + 1] [i_0] [i_2 - 1]) ? (arr_4 [i_2 - 1] [i_0] [i_2 + 1]) : var_0));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_0] [i_2 - 1] [i_0] = ((!((min(var_11, 17592186044415)))));
                var_20 = (!17592186044407);
                var_21 = (!-4517862770938278233);
            }
        }
        arr_16 [i_0] = var_6;
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_22 = ((var_8 && (((var_3 * ((min((arr_19 [i_5] [i_5]), (arr_19 [i_5] [i_5])))))))));
        var_23 -= (min((((arr_17 [i_5]) / (arr_17 [i_5]))), ((max((arr_17 [i_5]), (arr_17 [i_5]))))));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_27 [i_7] = ((-(((65532 / -63) ? ((-(arr_21 [18]))) : var_6))));
            var_24 ^= (((max((arr_20 [i_7]), (17592186044410 + 4517862770938278233))) == (((+((var_6 ? (arr_26 [i_6 - 1] [i_7] [i_7]) : (arr_24 [i_6 - 2] [i_7]))))))));
        }
        arr_28 [i_6] = (((arr_23 [i_6]) ? ((min(-23, (((arr_21 [i_6]) ? 17592186044415 : (arr_26 [i_6] [i_6] [i_6])))))) : ((max(-17592186044421, var_1)))));
        var_25 = (((((-1 ? (arr_22 [i_6 + 2] [i_6]) : var_11))) ? (min((arr_22 [i_6 + 3] [i_6]), 13928881302771273382)) : (arr_22 [i_6 + 2] [i_6])));
    }
    #pragma endscop
}
