/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_15, (min(-6491170544191380964, var_13))))) ? var_2 : ((-((var_15 ? var_15 : var_3)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [8] |= (((!-9171921180083485782) ? (((arr_1 [6]) * ((4 << (255 - 244))))) : ((((((0 == (arr_2 [i_0])))) >= ((max((arr_0 [1]), (arr_2 [i_0])))))))));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_6;
        var_18 *= (~var_11);
        var_19 = (arr_7 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 = (arr_10 [i_1] [i_1] [i_3]);
                    arr_15 [i_1] [i_1] [i_1] = (arr_14 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = ((var_15 * (arr_12 [i_3])));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (arr_10 [i_1] [i_1] [i_1]);
                }
            }
        }
        var_22 = ((-(arr_6 [i_1])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = ((((+(max((arr_12 [i_4]), 562949953421310)))) ^ ((((!(arr_6 [i_4])))))));
        var_24 = ((arr_17 [i_4] [i_4]) ? (((arr_10 [i_4] [i_4] [i_4]) - (arr_10 [i_4] [i_4] [i_4]))) : (min(((171 ? var_11 : 1)), -6619482057324457256)));
        var_25 = ((!var_3) ? ((-6619482057324457256 ? 2287828610704211968 : 20)) : ((var_7 ? (min(var_5, (arr_13 [i_4] [i_4] [i_4]))) : (var_13 && 1))));
        var_26 = (((((6619482057324457261 ? var_11 : (((var_14 << (((arr_13 [i_4] [i_4] [i_4]) - 5490673822178115449)))))))) ? ((-(max((arr_5 [i_4]), (arr_13 [i_4] [i_4] [i_4]))))) : 889875308862719862));
        var_27 = (min(var_27, ((((arr_9 [i_4] [i_4] [i_4]) ? ((((max((arr_7 [i_4] [i_4]), (arr_9 [i_4] [i_4] [i_4])))) ? ((var_11 ^ (arr_11 [i_4] [i_4]))) : var_5)) : var_16)))));
    }
    var_28 = (~6402262271594152602);
    var_29 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_30 ^= (!((((arr_25 [i_5] [i_6]) | (arr_25 [i_6] [i_5])))));
                var_31 = arr_20 [i_5] [i_6];
                arr_26 [i_5] [i_5] [i_5] = max(-var_11, ((((var_16 ? 8873258293673131684 : 1)) & var_4)));
                arr_27 [i_5] [i_5] = (((2287828610704211952 ? (max((arr_23 [i_5]), (arr_25 [i_5] [i_5]))) : var_8)) + var_3);
            }
        }
    }
    #pragma endscop
}
