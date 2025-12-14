/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (max(((min(((((arr_1 [1] [i_0]) != (arr_2 [i_0] [i_1])))), var_4))), (((arr_0 [i_0]) | var_2))));
                var_17 |= var_3;
                var_18 -= ((!((max(var_1, -7194661548604990828)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_19 *= (max((((15048423244290848253 != (arr_5 [i_1] [i_1] [i_1] [i_1])))), (((arr_5 [6] [i_1] [i_1] [i_2]) | (arr_5 [i_0] [i_1] [i_1] [i_2])))));
                    var_20 = (max(var_20, -var_13));
                    var_21 |= (((((+((max((arr_5 [i_2] [i_1] [i_1] [i_0]), 79)))))) != var_3));
                    arr_8 [i_0] = ((((min((((arr_5 [i_1] [i_1] [i_0] [i_0]) ? var_2 : -8273)), (((~(arr_1 [i_0] [i_0]))))))) ? (min((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))) : ((((((var_8 ? 0 : var_14))) ? -1 : (((arr_5 [i_0] [i_0] [i_0] [6]) ? var_14 : 2088960)))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_22 -= (((((arr_9 [i_0] [i_1] [i_1] [i_3]) ? (arr_9 [i_0] [i_1] [i_3] [i_3]) : (arr_9 [14] [i_1] [i_1] [i_0])))) ? (min(((var_11 ? (arr_6 [i_0] [i_1]) : (arr_9 [i_3] [i_1] [i_1] [4]))), ((((arr_6 [i_0] [i_1]) ? var_2 : (arr_5 [i_0] [16] [i_1] [12])))))) : ((((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_23 = (((((min(-8361984990352389723, (arr_5 [i_0] [i_1] [i_0] [i_3]))))) != 127));
                                var_24 = (min(var_24, (((((((arr_12 [i_0] [i_1] [i_5] [i_1] [i_5] [0]) | (arr_3 [i_5] [i_5])))) ? -var_10 : (((arr_9 [i_0] [i_1] [i_0] [i_0]) ? (arr_9 [i_0] [i_5] [i_0] [i_0]) : (34 & -8361984990352389700))))))));
                                var_25 = (max(var_25, ((((((var_3 & (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? (-8361984990352389725 | 1074585119206394270) : (var_9 & var_4))))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_26 = (arr_14 [i_0]);
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (max(1046528, 1));
                    var_27 = (min(var_11, var_1));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        arr_26 [i_0] [i_1] [17] [i_7] [i_7] [i_0] = ((~(arr_14 [i_0])));
                        var_28 *= (((((18446744073709551615 | (arr_6 [1] [i_1])))) ? (arr_19 [i_0] [i_1] [i_8] [i_8]) : (((arr_14 [i_8]) & (arr_6 [i_0] [i_1])))));
                    }
                    var_29 -= (((arr_21 [i_1]) | -3888054089768205751));
                    arr_27 [i_0] [i_0] [i_7] = ((!(arr_15 [i_7 + 1] [i_7] [i_7] [i_7] [i_0])));
                    arr_28 [i_0] [i_0] [i_7] = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_1] [i_7 + 2] [i_1] [i_0]) : var_0));
                    var_30 = ((!(arr_22 [i_7] [i_0] [i_7] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
