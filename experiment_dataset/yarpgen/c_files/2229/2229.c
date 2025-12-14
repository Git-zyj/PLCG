/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = 7185044214961032585;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (min((((arr_6 [i_1] [i_2] [i_4]) ? (arr_1 [i_1] [i_4]) : (4 + var_4))), ((4 - (arr_9 [i_0] [i_0])))));
                                var_17 = (min(var_17, var_3));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 -= (((-4 + -27) ? var_0 : (min((arr_17 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_2 - 1]), (!4)))));
                                var_19 *= ((((((((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_15 [i_1] [i_5] [i_5] [i_5] [i_2 + 1] [i_1] [i_0]))) >> (((arr_15 [i_6] [i_5] [i_1] [i_2] [i_1] [i_1] [i_0]) - 20497))))) ? ((~((((arr_8 [i_0] [i_1] [i_1]) <= var_2))))) : (((((max(22774, (arr_8 [i_0] [i_1] [i_6])))) > (arr_7 [i_0] [i_1] [10]))))));
                                var_20 &= ((-(max(((11261699858748519030 + (arr_15 [11] [i_1] [i_1] [i_1] [i_1] [i_1] [11]))), (((127 ? (arr_12 [i_0] [i_1] [i_2] [i_0]) : 22774)))))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 3] = (arr_6 [i_0] [i_2] [i_0]);
                            }
                        }
                    }
                    var_21 = (arr_13 [i_0 + 1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_22 -= (arr_16 [i_0 - 1]);
                                var_23 = (var_12 ? (((((((arr_16 [i_0]) ? (arr_21 [i_0] [i_1] [i_2] [i_7] [i_2] [i_0]) : var_4))) > 6226462600675218138))) : ((((arr_6 [i_0 + 2] [i_2] [i_7]) < (((-2147483647 - 1) / 25))))));
                                var_24 = (min(var_24, ((((((arr_14 [0] [i_7] [i_2] [i_7] [i_0]) + (min(var_3, var_1)))) + ((((arr_5 [i_0] [i_0] [i_8 + 1]) ? (((!(arr_3 [i_1])))) : ((var_14 ? 89 : 1406196811))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((((((~(arr_6 [i_9] [10] [i_11 + 2]))) ? ((var_12 ? 2251799813685248 : (arr_23 [i_9]))) : 2376107486)))))));
                                var_26 -= 126;
                            }
                        }
                    }
                    var_27 = (min(var_27, (((((min(2251799813685248, var_2))) ? ((max((!var_3), -1))) : (((var_14 + 2147483647) << (((max(-4124287067997049434, var_7)) - 1714829882)))))))));
                }
            }
        }
    }
    var_28 = (max(var_28, var_0));
    #pragma endscop
}
