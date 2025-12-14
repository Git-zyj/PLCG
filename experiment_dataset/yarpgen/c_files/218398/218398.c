/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 -= (((((arr_5 [i_0 + 4]) ? -2 : var_3))) ? ((((arr_5 [i_0 + 3]) > (arr_5 [i_0 + 2])))) : (arr_5 [i_0 - 1]));
            var_17 ^= (((((((arr_5 [i_0]) ? (arr_1 [i_0] [1]) : var_3)))) ? (((arr_3 [i_1]) << (((min(var_4, -32758)) - 144628542)))) : (arr_4 [i_1] [i_1])));
            var_18 = (max(var_18, (((arr_1 [i_0 - 2] [i_0 - 2]) ? 4294967286 : ((~((32467 ? (arr_4 [i_1] [i_1]) : (arr_5 [i_1])))))))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_19 = (max(var_19, (((var_11 ? ((((var_5 / 534) / var_7))) : (min(((((arr_0 [i_1]) ? (arr_5 [11]) : (arr_1 [i_2] [11])))), (var_6 * var_4))))))));
                arr_9 [i_1] [i_1] [i_1] &= ((~(min(6, (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 = -3794;
                            arr_14 [i_0] [i_2] = (min(9, ((-((-(arr_4 [i_0] [i_3])))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_2] [i_0] = (((((((((arr_7 [19] [i_1] [i_0]) ? var_8 : 17112))) ? var_12 : (arr_12 [i_0] [i_0 - 2] [i_0 - 2])))) ? (arr_16 [i_0] [i_0] [14] [i_5]) : (arr_0 [i_0])));
                    var_21 = (min(((-((65001 ? 11 : 2147483638)))), (arr_6 [i_5] [i_5])));
                    var_22 -= 0;
                    arr_18 [i_0] = (((((((((arr_2 [1] [i_0]) ? var_3 : (arr_11 [i_0] [12])))) ? (arr_2 [i_0 + 1] [i_0]) : (arr_15 [i_0] [i_1] [i_0] [i_5])))) ? var_5 : (((((4136 ? (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 0))) ? ((6011 ? (arr_12 [i_2] [i_1] [i_0 - 2]) : (arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] [11]))) : var_14))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_23 [15] [15] [i_0] [i_6] [i_6] = 16215391336987014444;
                    var_23 = (var_12 | 1);
                    var_24 = (min(var_24, ((((((67098052 ? (arr_1 [i_0] [13]) : (arr_8 [i_1])))) ? (arr_19 [i_0] [4] [i_0 + 4] [i_0 - 1] [i_0 + 4]) : ((2697 ? (arr_7 [i_2] [i_2] [i_0]) : (arr_10 [i_0 + 1] [i_0 + 4] [i_0 + 4] [i_0 - 1]))))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, (((((arr_5 [i_2]) == (arr_11 [i_1] [i_0 - 2])))))));
                    arr_27 [i_0] [i_0] [i_0] = ((((((arr_16 [i_0 - 1] [i_0] [i_2] [i_2]) ? (arr_16 [i_0 - 1] [i_0] [i_0] [i_7]) : (arr_16 [i_2] [i_0] [i_2] [11])))) ? (arr_16 [i_0 + 1] [i_0] [0] [i_7]) : (~var_3)));
                    arr_28 [i_0 - 1] [i_1] [i_2] [i_0] = var_5;
                    var_26 += ((~(arr_16 [i_0 + 2] [i_1] [i_0 + 2] [i_1])));
                }
                var_27 -= ((((((var_9 ? (arr_19 [i_0] [8] [i_0] [i_1] [i_2]) : var_9)) <= (arr_13 [i_2] [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 2]))) ? ((((arr_4 [i_1] [i_1]) > var_3))) : var_1));
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_28 = ((((((var_10 ? (arr_21 [i_8] [i_0] [15]) : var_11))) ? var_3 : (var_6 > var_15))));
            arr_31 [i_0 + 3] [i_0] = ((((var_0 <= (arr_0 [i_0]))) ? ((((((arr_4 [i_0] [17]) ? 4141 : (arr_4 [i_0] [8])))) ? var_0 : 10423)) : (((var_3 ? (arr_15 [i_0 + 3] [i_0 + 4] [i_0] [i_0 - 2]) : ((4294967286 ? 112 : (arr_26 [i_0]))))))));
            var_29 = (min(var_29, (--4501608320719468924)));
            var_30 |= (arr_25 [i_0] [i_0] [i_0 + 4] [i_8]);
        }
        arr_32 [i_0] = var_12;
        arr_33 [i_0] = (arr_24 [i_0 - 2] [i_0] [i_0]);
    }
    var_31 |= (((min(var_2, (var_6 | var_15))) << (var_15 - 4701850504109284816)));
    #pragma endscop
}
