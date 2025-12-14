/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((1125899906842623 ? 33693 : (!var_10)))) ? (!var_3) : (((((10 ? 3 : var_2))) ? ((var_13 ? var_2 : var_5)) : (var_0 * 0)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = (min(var_18, (max(((8342 ? 60860 : 18445618173802708988)), (((((var_11 ? (arr_4 [16] [2] [i_0]) : var_0))) ? ((18446744073709551600 & (arr_2 [4]))) : var_4))))));
            var_19 = (min(var_19, ((((65045 == var_1) ^ (var_8 + var_6))))));
            var_20 = ((~((((arr_0 [i_0]) < (arr_4 [i_0] [i_0 - 3] [i_0 - 1]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_11 [i_3] [i_3] [i_0] [i_3] [12] = 14394073858045361464;
                            var_21 = (-(((((~(arr_10 [i_0] [5] [i_4])))) ? ((((arr_1 [5] [i_4]) >> (61458 - 61453)))) : (min(5915465312318082002, 0)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_22 = 4827;
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_19 [5] [i_0] [15] = min((134217727 | var_7), (((8 & (arr_14 [i_7 - 2] [i_0])))));
                        arr_20 [i_0] [9] [i_0] [i_0] = arr_3 [i_0] [17];
                        arr_21 [i_0] = (((43270 - 16) >= ((((-65535 >= ((5915465312318082002 / (arr_0 [i_0])))))))));
                    }
                }
            }
            arr_22 [i_0] = (arr_15 [i_0] [10] [i_0 - 1] [i_0]);
        }
        var_23 -= 5849;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                {
                    var_24 = (max(18446744073709551575, 46736));
                    var_25 = 12531278761391469605;
                    arr_31 [i_8] [i_9] [i_9] [i_10] = var_8;
                    var_26 = (~5849);
                    var_27 = ((!((((((arr_25 [i_8] [i_9]) ? (arr_0 [i_9]) : 29119))) && (arr_30 [i_9] [i_8] [i_8])))));
                }
            }
        }
    }
    var_28 = ((((((var_3 ? var_10 : var_11)))) && var_14));
    #pragma endscop
}
