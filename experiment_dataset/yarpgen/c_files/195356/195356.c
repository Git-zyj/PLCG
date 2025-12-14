/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max((!-4404303722469588884), (((15393 > 255) / var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = (arr_2 [i_4]);
                                var_15 = (arr_7 [i_0] [i_0] [i_0]);
                                var_16 = ((((min(((min((arr_10 [i_0] [i_2] [i_2] [i_4]), (arr_2 [i_2])))), ((34104 ? var_11 : var_10))))) || (((-12576271355030233715 ? ((min((arr_12 [5] [i_2]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_4 [i_2]))))));
                                var_17 = (!15400);
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_18 = ((-((var_0 ? (arr_5 [i_0] [i_6]) : ((max((arr_0 [i_5]), 1)))))));
                var_19 = (min(var_19, 217));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_20 = (min(var_20, (((((((var_12 >= ((((!(arr_18 [i_0] [i_0] [22]))))))))) <= (((arr_9 [i_0] [i_0] [i_0] [20] [i_0]) ? (arr_9 [i_0] [i_5] [i_7] [i_7] [14]) : var_1)))))));
                var_21 = (max(var_21, ((((((arr_1 [i_0]) ? (arr_1 [i_7]) : (arr_1 [i_0])))) == (arr_1 [i_0])))));
            }
            arr_21 [i_0] = ((!(arr_14 [i_0] [i_0])));
            arr_22 [i_5] [i_5] [0] = (min(var_7, ((((17749010644998484260 <= 24576) ? (arr_20 [i_5] [i_0] [i_0]) : -2153)))));
            arr_23 [1] [i_0] = (((((-(1340111661 / var_12)))) ? (((arr_14 [i_5] [i_5]) ? ((var_8 | (arr_9 [i_0] [i_0] [i_0] [i_5] [i_5]))) : (arr_17 [i_5] [i_5] [i_5] [i_5]))) : (arr_10 [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            arr_27 [i_0] [i_0] [i_0] = (((!247) ? 6 : 6));
            var_22 = ((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_28 [i_0] [i_0] [i_0] = (((arr_4 [i_0]) ? ((var_10 ? (arr_0 [i_8]) : var_5)) : ((min((arr_0 [i_8]), (arr_0 [i_0]))))));

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_32 [i_0] [19] [14] [i_9] = ((((min((arr_6 [i_8] [14] [i_9]), var_4))) || var_8));
                var_23 = (18446744073709551615 * 7591);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_37 [2] [2] = (min((((!(arr_6 [i_10] [14] [i_10])))), -var_11));
                            var_24 = var_7;
                            var_25 |= max(1, 208);
                            var_26 = var_4;
                        }
                    }
                }
                var_27 = ((!(((((arr_8 [i_9] [i_8] [i_0]) + 1048575))))));
            }
        }
    }
    var_28 ^= (var_7 <= var_4);
    var_29 = (~12576271355030233715);
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                var_30 = (arr_43 [i_12] [7]);
                arr_45 [i_12] = ((min(((-(arr_42 [i_12] [i_12] [i_13]))), -var_0)));
            }
        }
    }
    #pragma endscop
}
