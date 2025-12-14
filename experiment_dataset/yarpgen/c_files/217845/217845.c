/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (((((-(arr_0 [i_0])))) ? (((!(arr_0 [i_0])))) : (((!(arr_0 [i_0]))))));
        var_21 ^= (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) % ((((arr_1 [13] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((~(arr_1 [i_0] [15]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 = (((((~((~(arr_5 [i_1])))))) ? (arr_5 [i_2]) : (arr_7 [i_1] [i_3])));
                    arr_10 [i_1] [i_1] [i_2] [i_1] = ((-(arr_7 [i_2 - 1] [i_2 - 1])));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] [i_1] = (arr_5 [i_1]);
                        var_23 ^= ((~(((((((arr_5 [i_1]) ? (arr_9 [8] [i_2] [i_4]) : (arr_9 [i_4 + 2] [1] [7])))) || (arr_6 [i_1] [i_2 + 2] [i_3]))))));
                        arr_14 [i_1] [i_2] [i_1] [i_1] = (((((arr_11 [i_2] [i_2]) ? 4839566188449677246 : (((-(arr_2 [i_4]))))))) ? ((((((arr_9 [i_1] [i_1] [i_1]) || (arr_12 [i_1] [i_2] [i_3] [i_1]))) ? (arr_9 [i_1] [0] [i_1]) : (arr_7 [i_2 + 2] [i_2 + 1])))) : (((arr_4 [i_2 - 1]) & (arr_0 [i_2 - 1]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_24 = (((arr_1 [18] [i_2 - 1]) ? (((arr_0 [i_2]) ? (arr_11 [i_2] [i_2]) : (arr_7 [i_3] [i_6 + 2]))) : (arr_2 [i_6 + 3])));
                            var_25 *= (((arr_3 [i_5] [i_2 + 1]) ? (((arr_0 [i_1]) ^ (arr_11 [i_1] [i_1]))) : (arr_19 [i_1] [i_1] [i_1] [i_1])));
                            arr_21 [i_1] [i_3] [i_2] = (-(arr_2 [i_3]));
                        }
                        var_26 = (((arr_4 [i_2 + 2]) ? (arr_4 [i_2 + 2]) : (arr_4 [i_2 + 2])));
                        var_27 = ((~(((arr_5 [i_5]) ? (arr_2 [i_3]) : (arr_8 [i_1])))));
                    }
                    arr_22 [i_2] [i_2] [i_2] [15] = ((((((arr_20 [i_1] [i_2]) & (((~(arr_5 [i_2]))))))) ? (arr_2 [i_2 + 2]) : ((((((arr_0 [i_1]) | (arr_11 [i_2] [i_2])))) ? (arr_2 [i_1]) : (((arr_15 [i_1] [i_2] [i_1]) ? (arr_15 [7] [i_2] [i_3]) : (arr_6 [i_1] [i_3] [i_3])))))));
                }
            }
        }
        var_28 = ((((((((arr_6 [i_1] [i_1] [i_1]) ^ (arr_18 [i_1])))) ? (((arr_18 [i_1]) ? (arr_17 [i_1] [i_1] [i_1] [11] [i_1] [i_1]) : (arr_18 [i_1]))) : ((((arr_1 [i_1] [i_1]) << (((arr_7 [2] [i_1]) - 32075))))))) == (((-((~(arr_18 [i_1]))))))));
        var_29 |= ((((!((((arr_3 [1] [i_1]) ? (arr_8 [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1])))))) ? (((-((~(arr_20 [i_1] [i_1])))))) : ((((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_5 [i_1])))) ? ((((((arr_5 [i_1]) + 2147483647)) >> (((arr_18 [i_1]) + 28707))))) : (((arr_1 [i_1] [i_1]) ? (arr_20 [i_1] [i_1]) : (arr_17 [i_1] [i_1] [3] [i_1] [7] [i_1])))))));
        var_30 = (min(var_30, (((((!(arr_2 [i_1]))) ? (((((-(arr_6 [i_1] [i_1] [i_1])))) ? ((~(arr_12 [i_1] [i_1] [i_1] [i_1]))) : (((-(arr_9 [i_1] [i_1] [i_1])))))) : ((((!(arr_8 [i_1]))))))))));
    }
    #pragma endscop
}
