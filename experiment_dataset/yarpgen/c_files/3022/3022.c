/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max(var_2, (var_3 + -821)))), ((3387611481 ? (max(var_7, var_17)) : var_16))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((((((max(907355814, 248))) ? (max((arr_0 [i_0]), 803)) : (((var_8 ? var_6 : 1021248281)))))) || (arr_2 [i_0 + 1])));
        arr_5 [i_0] [i_0] = (((max(var_10, (148 / 7))) % (((max(((!(arr_1 [i_0] [i_0]))), (-15477 < var_2)))))));

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_19 = (((((((arr_3 [i_0] [i_0]) ? (arr_2 [i_0]) : -386673873)))) != (arr_6 [i_1] [i_1] [i_1])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_20 = (((arr_1 [i_1 - 1] [i_0 - 1]) ? ((((min((arr_2 [i_0]), (arr_7 [i_2] [i_0] [i_2])))) ? (arr_0 [i_2]) : (-598363278 && 1356604744))) : (arr_9 [i_0] [i_1] [i_1])));
                var_21 *= (min((((((max(var_6, 598363278))) ? (min((arr_1 [i_0] [i_1]), (arr_0 [i_0]))) : (arr_3 [i_0] [i_0])))), (max(1790505508617520165, -33))));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_22 -= (arr_8 [i_0 - 1]);
                    var_23 = var_17;
                    arr_16 [2] [2] [2] [2] [2] = (max((max(16159429945192494018, -828)), (arr_0 [i_4])));
                    arr_17 [i_0] [i_0] [i_3] [i_0] = var_15;
                }
                var_24 = ((~(((arr_3 [i_1 - 4] [i_1 - 4]) ? (arr_3 [i_0] [i_0]) : (arr_14 [i_0 - 1] [i_0])))));
                arr_18 [i_0] [i_1] = (-31200 - -136384338);
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] = max((((arr_3 [i_0 + 1] [i_0 + 2]) / (arr_13 [i_0 + 1] [i_0 + 3] [i_0 - 1]))), ((max((arr_13 [i_0 - 1] [i_0 + 3] [i_0 + 3]), (arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 3])))));
            var_25 = ((((-(arr_21 [i_0] [i_0])))) ? ((min((min((arr_10 [9] [i_0] [i_0] [i_0]), (arr_0 [i_0]))), (((-(arr_14 [i_0] [i_0]))))))) : ((((((arr_8 [i_0]) ? (arr_15 [i_5] [i_5] [i_0]) : (arr_1 [i_0] [i_5])))) ? ((~(arr_8 [i_0]))) : var_14)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_26 = (((arr_9 [i_0 + 2] [i_6] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            var_27 *= (((arr_14 [i_0 - 1] [i_0 + 1]) >= (arr_14 [i_0] [2])));
            arr_25 [i_0] = ((!(arr_13 [i_0] [i_6] [i_6])));
        }
        arr_26 [i_0] = (min((((-(arr_14 [i_0 - 1] [i_0])))), (((arr_24 [i_0] [i_0]) ? (((-(arr_7 [i_0] [i_0] [i_0])))) : (((arr_3 [i_0] [i_0]) ? var_3 : (arr_8 [11])))))));
    }
    #pragma endscop
}
