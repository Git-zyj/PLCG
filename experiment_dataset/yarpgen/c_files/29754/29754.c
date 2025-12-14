/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_0, ((((max(var_4, var_1))) ? ((((-2129975403173968068 + 9223372036854775807) >> var_9))) : (max(9568835344655305857, 1579124383))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 -= (180 ? 1579124378 : 0);
        var_15 = 8074761213348047747;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_16 &= (((((((arr_7 [i_1] [i_2] [i_2]) > 0)))) / ((((max(-2565273247810126467, 0))) ? var_11 : 1415353318))));
            var_17 = (max((((arr_3 [i_2 - 1]) ? var_1 : ((9006099743113216 + (arr_7 [i_2] [i_1] [i_1]))))), (((((2715842887 ? var_8 : (arr_4 [i_1] [i_1]))) <= (((arr_1 [4]) >> (75 - 57))))))));
            var_18 = ((1896241572 + (~9568835344655305857)));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_19 = ((((max((arr_7 [i_1 + 1] [i_3 - 1] [i_1 + 1]), (arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1])))) || ((max(216, ((max(var_9, var_7))))))));
            var_20 = (max(var_20, (((-(arr_7 [i_1] [i_1 - 2] [i_1 - 2]))))));
            var_21 = max(var_8, ((((arr_5 [i_1]) + 249))));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_1] = ((((max(((((arr_5 [i_1]) <= 3231117443))), (4243374360 | 62)))) ? ((((((arr_5 [i_4 - 1]) & 2879613972))) ? (max((arr_6 [i_1] [i_4]), var_11)) : var_6)) : ((((var_9 >= ((var_12 ? 0 : (arr_3 [0])))))))));
            arr_15 [i_1] [i_4 - 1] = (max((arr_7 [1] [1] [1]), var_3));
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_22 = (max((arr_10 [i_1] [9] [9]), (((arr_18 [i_1 + 2] [i_1 + 2] [i_5 - 2]) ? 1 : (arr_18 [8] [i_5 - 2] [i_5])))));
            var_23 *= (arr_10 [i_1] [i_5] [i_5]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_27 [i_7] = var_12;
                            var_24 = (((arr_3 [i_1 + 2]) + (((var_1 > (arr_3 [i_1 - 2]))))));
                            var_25 = var_9;
                        }
                    }
                }
            }
        }
        var_26 = (max((((arr_10 [i_1 + 2] [i_1] [i_1 - 3]) != (arr_1 [i_1 + 2]))), ((!((((arr_6 [i_1] [i_1]) ? (arr_16 [i_1] [i_1] [i_1]) : 0)))))));
        arr_28 [i_1 + 2] [i_1] = var_4;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_27 = (max((arr_6 [i_1 - 3] [i_1 - 3]), (max((arr_6 [i_1 + 1] [i_1 - 2]), (arr_17 [i_1 - 3])))));
                    arr_34 [i_9] [i_9] = ((arr_8 [i_1 + 2] [i_1 + 2]) + var_12);
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_28 = ((((arr_36 [i_11 + 2]) - (arr_36 [i_11 - 3]))));
        var_29 = (max(50791, 2715842917));
        arr_38 [i_11] = (((var_2 + var_5) ? (((~(0 != 1345730134120300856)))) : ((3217875943803215950 ? (arr_36 [i_11 - 3]) : (arr_11 [i_11 + 1] [i_11 - 2] [i_11 - 2])))));
    }
    #pragma endscop
}
