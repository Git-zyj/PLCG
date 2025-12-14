/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_12 = (908227599 || -7473724595143468705);
                            var_13 = ((((-(arr_9 [i_1] [i_0] [16] [i_2 - 3]))) != -2147483647));
                            arr_13 [i_1] [i_1] [i_2] [i_1] [11] = arr_5 [i_0] [i_1] [i_4];
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_14 ^= (((arr_7 [i_0] [i_2 - 3] [i_0]) + (arr_14 [i_0] [i_0 + 1] [i_2] [i_3 - 1] [0] [16] [i_5])));
                            var_15 = (((arr_11 [i_1] [i_0 - 2]) / (arr_11 [i_1] [i_0 + 2])));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_16 -= arr_0 [i_0 + 2];
                            var_17 ^= ((((((arr_8 [i_0] [i_2 - 2]) ? (((arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_6]) ? (arr_8 [i_0] [i_6]) : (arr_9 [i_6] [i_1] [i_6] [i_3]))) : (arr_5 [i_0] [i_0] [i_3 - 1])))) ? ((-(arr_9 [i_0] [i_3 - 1] [20] [i_6]))) : (((((arr_8 [i_0] [i_0]) || ((((arr_12 [i_0] [i_3] [18]) ? var_8 : 2219273712659523890)))))))));
                            arr_20 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_6] &= ((((-(arr_10 [i_0] [i_6] [i_3 - 1] [i_2] [i_2 - 1] [i_0]))) / (arr_10 [i_0] [i_6] [i_3 - 1] [i_3] [i_2 - 2] [i_0])));
                            var_18 = arr_8 [i_6] [i_6];
                            arr_21 [i_0] [i_1] [i_1] [i_3] [20] = arr_4 [i_0];
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_9 [i_1] [i_0 + 1] [i_2 - 1] [i_2 - 2]);
                            var_19 = (((arr_12 [i_0] [i_0 - 2] [i_2 - 2]) ? (arr_17 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_7] [i_1]) : ((((arr_8 [i_1] [i_1]) != (arr_2 [i_3]))))));
                            var_20 = (min(var_20, (arr_0 [i_0 - 2])));
                            arr_27 [1] [i_1] [i_1] [i_3] [i_7] = ((((-34197760270188541 ^ (arr_19 [i_0] [0] [i_1] [i_3] [i_7] [i_0] [i_3]))) <= (arr_14 [i_1] [8] [i_2] [i_2] [i_2] [i_0 - 1] [i_1])));
                            arr_28 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_7] = (((arr_18 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_3 + 1] [i_3]) ? (arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0] [i_3 - 1] [i_7]) : (arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_3 - 1] [i_3])));
                        }
                        var_21 += ((~((~(arr_11 [i_0] [i_0])))));
                        arr_29 [i_1] [i_1] [i_2] [i_3] = (((!(arr_24 [i_0] [i_0 + 1] [i_0] [i_1] [i_2 - 3] [18] [i_2]))) ? (((-7592983397808251852 + 9223372036854775807) << (18 - 16))) : ((((arr_4 [i_0 - 2]) ? (arr_4 [i_0 + 2]) : (arr_24 [i_0] [i_0] [i_0] [i_1] [i_2 - 2] [i_2 + 1] [i_2])))));
                    }
                    arr_30 [i_1] = ((+((((arr_22 [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_2 - 2] [i_2]) <= (arr_22 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_2]))))));
                    var_22 = arr_19 [i_0] [i_0] [i_1] [i_1] [13] [i_0] [0];
                    arr_31 [i_1] [i_1] = (((arr_23 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) - (((arr_18 [i_2 + 1] [i_2 + 1] [i_1] [i_0 - 1] [i_2] [i_1] [i_0]) ? (arr_18 [i_2 - 2] [i_2] [i_2] [i_0 - 1] [i_2] [0] [i_1]) : (arr_1 [i_0 - 2] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
