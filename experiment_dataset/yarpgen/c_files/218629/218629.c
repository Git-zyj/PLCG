/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 -= ((-(((((arr_1 [i_0 - 1] [i_0 - 1]) + 11285265384631970267)) + (arr_1 [i_1 + 1] [i_1])))));
                var_17 *= ((185 && (arr_1 [i_1 + 1] [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_18 -= ((-((-1839285404937530683 & (arr_6 [i_2])))));
                arr_10 [i_2] [i_2] = ((-((-(arr_6 [i_2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_22 [i_7] [14] [i_6] [i_7] = (3703429363495109485 && (((arr_16 [i_7] [i_7] [i_7] [i_7]) <= (arr_18 [i_6] [i_6 - 1] [i_6 + 2]))));
                            var_19 = ((-(((((arr_7 [7] [i_5]) ? (arr_6 [i_4]) : (arr_18 [i_6] [i_7] [i_7]))) + (((arr_13 [5] [5] [5]) >> (((arr_5 [i_5] [i_5]) + 26))))))));
                            var_20 = 2403878928;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                            {
                                var_21 = (((((+(((-2147483647 - 1) ? 1 : 3628891617))))) || 0));
                                arr_31 [i_8] [i_8] [i_8] [i_9] = ((+((-1 ? (((arr_15 [i_9]) ? 4747942591532927553 : (arr_27 [i_4] [i_4] [i_4] [i_4] [i_9]))) : ((((arr_14 [i_4] [i_4] [i_4]) ? 2403878920 : (arr_14 [i_4] [i_4] [i_4 + 1]))))))));
                                var_22 = ((0 | (arr_19 [i_8 + 2] [i_8 - 2] [i_8 - 3] [i_8 - 2] [i_8 + 2])));
                                var_23 -= ((-(((arr_11 [10]) ^ ((((arr_6 [i_8]) == -8)))))));
                                arr_32 [i_10] [i_10] [i_10] [i_9] [i_10] [i_10] = -6470583802411342850;
                            }
                            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                            {
                                var_24 -= arr_20 [i_4] [6] [i_4] [i_4];
                                var_25 -= 53;
                            }
                            for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                            {
                                var_26 += (((((-((-2 * (arr_28 [0] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))) && ((((arr_29 [14] [i_5] [i_8 + 2] [i_8] [i_8] [i_8] [i_8 - 3]) - (arr_17 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))))));
                                var_27 -= 1;
                                arr_37 [i_12] [i_9] [i_12] [i_12] [i_12] [i_12] = (arr_17 [i_9] [i_9 - 1] [i_9] [i_9]);
                            }
                            var_28 += -2;
                            var_29 = 205;
                        }
                    }
                }
                var_30 = (arr_14 [i_4] [i_4] [i_4 - 2]);
                var_31 += ((((((((((arr_9 [i_4 - 3]) != 205)))) != (arr_28 [i_5] [i_5] [13] [i_5] [i_5] [i_5] [i_5])))) < 1742110242));
            }
        }
    }
    #pragma endscop
}
