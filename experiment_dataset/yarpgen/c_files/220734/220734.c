/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0]);
                var_21 = (max(var_21, ((((arr_2 [i_0]) ? (arr_3 [i_0] [i_1] [1]) : (max((arr_3 [i_0] [i_1] [i_1]), (arr_1 [i_1]))))))));
                arr_4 [i_0] = (((((((((arr_2 [3]) + -113))) ? (((arr_2 [i_1]) ? 2810384093 : 2810384086)) : 1484583202))) ? (((arr_0 [i_0]) ^ (arr_0 [i_1]))) : ((((!(arr_1 [i_1])))))));
                arr_5 [i_0] = min((arr_0 [i_1]), (max((arr_3 [i_0] [i_0] [i_0]), (arr_2 [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((~(arr_14 [i_5] [12] [i_3 + 2] [7]))))));
                            var_23 = (min(var_23, ((((((arr_8 [i_2 - 1]) + 2147483647)) >> ((((min((arr_9 [i_2] [i_3 + 2]), (arr_10 [i_3] [i_5])))) / (((arr_10 [3] [1]) ? (arr_6 [i_3]) : (arr_8 [i_5]))))))))));
                        }
                    }
                }
                var_24 = (arr_8 [i_3 + 1]);
                var_25 *= (((arr_7 [i_2]) ? (arr_10 [i_2 + 1] [i_3 + 2]) : (arr_12 [i_2 - 1] [16])));

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_26 = (min(106, ((~(arr_6 [i_2 + 1])))));
                    arr_19 [i_3] [i_3] = (max(((((((~(arr_15 [i_3])))) && ((((arr_12 [2] [i_6]) ? var_0 : (arr_8 [i_3 + 2]))))))), (((arr_9 [i_2 + 2] [6]) / (arr_9 [8] [i_6])))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_27 = (min(var_27, (((((min((arr_16 [i_2] [i_2] [i_3] [10]), (arr_13 [1])))) ? (((!(arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 3] [10])))) : ((((min(44, 15))) | (~27675))))))));
                    arr_22 [i_7] [i_7] [i_7] [i_3] = (max(((((arr_21 [i_2] [i_3] [i_3]) ? (arr_13 [i_3]) : (arr_20 [i_3])))), 1484583205));
                    var_28 *= (((((-257037816 ? 35851 : 101))) ? (max((arr_11 [15] [i_3 + 1] [i_3]), (((arr_15 [6]) ? (arr_16 [i_2] [i_3] [18] [0]) : (arr_10 [i_2 + 2] [i_2 + 2]))))) : (((!(((arr_17 [i_2] [i_3 + 3] [12] [0]) >= (arr_17 [i_3] [i_3 + 1] [6] [i_3 - 1]))))))));
                }
            }
        }
    }
    var_29 = var_14;
    #pragma endscop
}
