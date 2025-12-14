/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_12 = ((((max(32767, ((4294967295 / (arr_2 [i_0 + 1])))))) ? (arr_2 [i_0]) : (+-1354328353)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = -1354328353;
            var_13 = (max(var_13, (arr_3 [i_0 + 1] [8] [i_1])));
        }
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_2] = (~1354328352);
            arr_14 [i_2] [i_3] [i_3] = ((max((arr_7 [1] [i_3]), 1354328352)));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        arr_21 [i_4] = ((1194118101120611548 ? (((max((arr_11 [i_5] [i_4 - 1] [i_4]), (arr_11 [i_2] [i_4 + 1] [i_4 + 1]))))) : (((arr_17 [i_2] [5] [i_4] [5]) ? 3525251828550512146 : 32767))));
                        arr_22 [i_2] [i_3] [i_4] [8] = 1121566962;
                        arr_23 [i_2] [i_2] [i_4 - 1] [i_4] [i_5 + 1] = ((min((arr_20 [i_2 + 1]), (arr_20 [i_2 + 1]))));
                        var_14 = (min(1354328352, ((min((arr_10 [i_2 + 1] [i_5 + 1]), (arr_10 [i_2 + 1] [i_5 + 1]))))));
                        var_15 = (min(((-1354328353 ? (arr_9 [i_2] [i_3]) : (((arr_17 [i_4] [i_4] [i_4] [i_5 + 1]) ? 2305840810190438400 : var_10)))), ((min(2308817113, ((min(var_3, var_1))))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] [5] [i_6] = ((~((((631149846 + (arr_18 [1] [i_6] [i_6]))) / var_7))));
            var_16 = (((((arr_20 [i_2 + 1]) <= (arr_20 [i_2 + 1]))) ? (min(((~(arr_18 [5] [i_2] [i_6]))), (((-2147483647 - 1) ? -1354328353 : -1446136808)))) : (arr_18 [i_2] [i_6] [i_2])));
            arr_27 [i_2 + 1] [i_6] = (arr_9 [i_2 + 1] [i_6]);
            arr_28 [i_2] [i_6] = ((-(max(((0 ? var_3 : 13958)), ((~(arr_19 [i_6])))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_36 [i_7] [i_8] [i_8 + 1] [i_8] [i_2 + 1] [i_8 + 1] = 1354328353;
                        arr_37 [10] [i_7] [i_7] [6] [i_9] = -364;
                        var_17 = (((arr_25 [i_2] [i_7] [i_8]) ? (arr_15 [i_2]) : (((0 && (-2147483647 - 1))))));
                        arr_38 [i_2] [i_2] [i_7] [5] [i_9] = ((-32515 ? (arr_3 [i_2] [i_2 + 1] [i_8 + 1]) : (((arr_25 [i_9] [i_7] [i_8 - 1]) ? (arr_11 [i_9] [i_2 + 1] [i_8]) : (arr_7 [i_8] [i_7])))));
                    }
                }
            }
            var_18 = ((1 ? (arr_1 [i_2 + 1] [i_2 + 1]) : (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
        }
        arr_39 [i_2] = ((-69 ? (max(((max(2620230727, 56101))), (arr_17 [i_2 + 1] [i_2 + 1] [0] [i_2 + 1]))) : (0 * 2130706432)));
    }
    var_19 = (min(var_5, var_7));
    #pragma endscop
}
