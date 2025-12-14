/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [9] = ((!(arr_1 [i_0] [10])));
        var_20 = ((!(arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_21 = (arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_22 = ((-(((62796 & (arr_0 [i_3] [i_3]))))));
                    arr_10 [i_3] [i_2] [i_1 + 2] = ((var_5 && ((((arr_4 [i_1]) ? (arr_8 [i_1] [i_1 - 1] [i_1]) : 18374686479671623680)))));
                    arr_11 [i_2] [3] [1] = ((((((arr_1 [i_1 - 1] [i_2 - 4]) < (arr_1 [i_1 + 3] [i_2 + 2])))) / (((var_5 != (!var_8))))));
                }
            }
        }
        var_23 -= var_6;
        arr_12 [2] [2] = var_2;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_24 = ((-1 ? (-2076152005 ^ var_14) : var_18));
        arr_16 [i_4] [10] |= 15872;
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_25 ^= (min((arr_21 [0] [i_5 - 2]), (((((arr_21 [i_5] [i_5]) % (arr_20 [i_5]))) >> (arr_21 [i_5 + 1] [i_6 + 1])))));
                arr_22 [i_5] [i_5] = (((((arr_20 [i_6 + 1]) ? (arr_20 [i_6 - 1]) : (arr_20 [i_6 + 1]))) != ((((!(arr_20 [i_6 + 1])))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_26 &= (max((((arr_17 [i_7] [i_7]) ? (arr_17 [1] [i_7]) : var_10)), (((arr_17 [i_7] [i_7]) ? (arr_17 [i_7] [i_7]) : (arr_17 [i_7] [i_7])))));
        var_27 = (min((max((arr_6 [i_7] [i_7]), (((arr_9 [i_7] [i_7] [i_7]) ? 90093201399599314 : (arr_7 [i_7] [i_7] [i_7]))))), (((!((max((arr_18 [i_7] [i_7]), var_2))))))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_28 = -120;
        var_29 = (max(var_29, (((!((((arr_0 [3] [3]) ? (130 ^ var_11) : (((max(var_18, var_8))))))))))));
    }
    #pragma endscop
}
