/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_0] [i_3] &= (((arr_4 [i_3]) ? 9151314442816847872 : 9151314442816847872));
                            var_13 = (~-89);
                        }
                        var_14 &= ((!((min(((6744 ? var_11 : 43548)), (arr_1 [i_0]))))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_15 = ((((arr_0 [i_1]) || var_1)) ? (((arr_0 [i_0]) & 36536)) : (max((arr_4 [i_3]), (arr_0 [i_5]))));
                            var_16 = ((-3403683669954697410 ? ((((-32762 || ((((arr_9 [i_0] [i_1] [i_2] [i_3]) ? 1489937803 : (arr_11 [i_5] [i_3] [1] [i_0] [i_0])))))))) : (min(32759, -9151314442816847872))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_17 = ((-8334 ? 67076096 : -9151314442816847877));
                            var_18 = (max(var_18, ((((arr_1 [i_0]) >> (((arr_11 [i_2] [i_2] [i_2] [i_3] [i_6]) + 124)))))));
                        }
                    }
                    arr_22 [i_2] [9] [i_0] [i_0] = ((+(max((arr_9 [i_0] [i_1] [i_2] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_19 = (arr_20 [i_0] [i_0] [i_1] [i_1] [7] [i_7] [7]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_8] [i_9] &= max((arr_11 [i_0] [i_1] [i_7] [i_8] [i_0]), (((var_3 >= 10215) | (var_1 < -147016992))));
                                var_20 = (max(((-7939634351892926400 / ((var_6 ? 57403 : -9151314442816847872)))), 3133250087));
                                var_21 = ((201 ? (((arr_16 [i_1] [i_7] [i_8] [i_9]) << (((arr_16 [i_0] [i_1] [i_7] [i_9]) - 8452)))) : ((9223372036854775807 ? (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 0 : (arr_20 [i_0] [i_0] [i_7] [i_8] [i_9] [i_0] [i_0]))) : 1))));
                                var_22 = 4197118602;
                            }
                        }
                    }
                }
                arr_32 [i_0] [i_1] [i_0] = (((((2928921683 ? 1542642397 : 101))) <= (max((arr_12 [i_0] [i_1] [i_0]), ((((arr_0 [12]) & var_11)))))));
                var_23 = (((((((max(1356, 222332687))) ? ((0 ? (arr_23 [i_1] [i_0] [i_0] [i_0]) : (arr_4 [i_0]))) : (arr_25 [i_0])))) ? 250 : (min((arr_30 [i_1]), 15943346785787249077))));
            }
        }
    }
    #pragma endscop
}
