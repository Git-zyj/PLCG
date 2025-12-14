/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-1536696936667490093 % 8850308803773819295) ^ (((var_0 ? var_7 : var_8))))), (1536696936667490085 - var_15)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = ((-var_16 != (arr_6 [i_2] [i_2 - 1] [i_2])));
                    var_18 = ((((((arr_1 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])))) | 9596435269935732320));
                }
            }
        }
    }
    var_19 = var_13;

    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((max(((((min((arr_2 [i_3]), 9596435269935732324))) ? ((((arr_4 [i_3] [i_3] [i_3]) ? (arr_5 [i_3] [i_3] [i_3]) : var_0))) : ((9596435269935732342 ? (arr_0 [i_3] [i_3]) : (arr_4 [i_3] [i_3] [i_3]))))), var_12)))));
        var_21 &= var_16;
        arr_11 [i_3] = (arr_1 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_22 *= var_14;

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_23 = (max(var_23, var_15));
            var_24 &= ((var_6 ? (arr_12 [i_5] [i_4]) : (arr_10 [i_4])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_25 = (((arr_16 [i_4] [i_6] [10]) ? var_4 : (arr_16 [i_6] [i_5] [1])));
                        var_26 &= ((((((arr_1 [i_7]) >> (arr_21 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((9596435269935732322 ? (arr_20 [i_7] [i_6] [i_5] [i_5] [i_4]) : (arr_17 [i_4] [i_5] [i_6] [i_7])))) : (arr_13 [1] [i_6])));
                    }
                }
            }
            var_27 *= ((-19555 ? (((arr_6 [i_5] [i_5] [i_5]) ? (arr_17 [3] [i_5] [i_5] [i_5]) : 9596435269935732343)) : (arr_16 [i_5] [i_4] [i_4])));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_28 &= 8850308803773819274;
            var_29 = (min(var_29, ((((~(arr_15 [i_4] [i_8])))))));
            var_30 *= (((8850308803773819291 != (arr_6 [i_4] [1] [13]))));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_31 = (((arr_6 [0] [i_9] [i_4]) ? var_11 : ((var_1 | (arr_6 [i_4] [i_4] [i_9])))));
            var_32 ^= (((arr_2 [i_4]) ? (!9596435269935732320) : ((9596435269935732339 ? (arr_18 [1] [i_4]) : 8850308803773819279))));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_33 = (((arr_21 [i_4] [i_4] [i_4] [i_4] [4]) ^ var_13));
            var_34 &= (((arr_26 [i_4] [9] [i_10]) ? (arr_18 [i_4] [i_10]) : (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10])));
            var_35 &= 56;
        }
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_36 = (min(var_36, (max((arr_8 [i_11]), (max((arr_3 [i_11] [i_11]), (arr_25 [i_11] [i_11] [i_11])))))));
        var_37 = (-1536696936667490093 ? 52 : 60095);
        var_38 *= ((((min((arr_8 [i_11]), 6683366793162698420))) ? (arr_21 [i_11] [i_11] [i_11] [i_11] [i_11]) : (((-(arr_6 [i_11] [i_11] [i_11]))))));
    }
    #pragma endscop
}
