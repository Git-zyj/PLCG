/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_8 + ((((var_0 ? var_13 : var_17)) + var_13)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = max((max((arr_3 [i_0] [i_0]), 11568708975778403323)), 6878035097931148292);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 1]);
                    arr_11 [i_1] [i_1 + 1] [i_2 + 1] = (max((((arr_2 [i_1 + 2]) ? var_12 : (arr_2 [i_0]))), (arr_2 [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [3] = ((((((arr_14 [i_3 - 2] [1]) ? var_18 : (arr_3 [i_3 + 1] [i_3 + 2])))) ? ((-(((arr_6 [16] [18]) ? (arr_13 [i_4]) : var_0)))) : (~var_9)));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_21 = ((((min((arr_8 [i_0] [i_0] [i_0]), (max(63, (-2147483647 - 1)))))) ? (min(var_5, ((236 % (arr_13 [15]))))) : (((((16981 ? 11568708975778403301 : 10141239611518055748))) ? (arr_9 [7] [i_3 + 1] [7] [i_6]) : (((!(arr_18 [i_6] [i_3] [i_4] [i_5]))))))));
                            var_22 += var_11;
                        }
                        var_23 = (max(((((min(1, -286184024))) ? var_10 : (var_3 + 209))), ((1 ? 1 : 209))));
                    }
                    var_24 = (6878035097931148292 ^ 165);
                    arr_22 [i_4] [16] [i_0] = ((var_16 * (var_18 || var_2)));
                }
            }
        }
        var_25 = ((((((~-16) ^ (~19774)))) < (((65535 | 1449552348897108274) ? 11031775232417785834 : (((var_15 ^ (arr_8 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = (var_3 + var_11);
        arr_25 [i_7] = (min(((((((11031775232417785834 ? (arr_13 [i_7]) : (arr_8 [i_7] [i_7] [i_7])))) || (arr_8 [i_7] [i_7] [i_7])))), ((-(arr_8 [i_7] [i_7] [i_7])))));
        arr_26 [i_7] [i_7] = var_14;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    {
                        arr_36 [i_8] [i_8] [i_8] [i_11 - 2] = (max(-var_6, (arr_7 [i_8] [i_8])));
                        var_27 = (max(((((max((arr_6 [i_8] [i_9]), (arr_27 [i_8])))) ? (max(var_16, 65529)) : (((max(1, var_6)))))), (((((var_12 ? (arr_1 [5]) : var_5)) | (arr_3 [12] [12]))))));
                        var_28 = (max((min(((((arr_29 [17] [5]) > (arr_0 [i_10])))), (((arr_35 [i_8] [i_8] [3] [i_8]) ? (arr_34 [14] [14] [1]) : (arr_24 [i_8]))))), ((max((arr_15 [i_9] [i_10] [i_11]), (max(54716, (arr_5 [i_8]))))))));
                    }
                }
            }
            arr_37 [i_8] [i_8] = 106;
        }
        var_29 = (max(var_29, ((((arr_8 [i_8] [i_8] [i_8]) ? var_11 : (209 % -43))))));
    }
    var_30 = var_9;
    #pragma endscop
}
