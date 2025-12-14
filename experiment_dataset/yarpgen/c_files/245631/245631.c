/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-32767 - 1);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = (((~2196297719) ? (((arr_2 [i_0 + 2]) ? ((1827973808 ? var_1 : (arr_5 [i_1]))) : (min(var_9, var_11)))) : ((~(((arr_10 [1] [i_4] [i_4] [i_4] [i_0] [1] [i_3]) >> (var_3 - 1515485564)))))));
                            var_14 ^= (arr_7 [i_0] [i_1] [i_2] [i_2]);
                            arr_13 [i_4] [i_1] [i_1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] = ((((((!(arr_8 [i_0] [i_0] [i_2] [i_4])))) == ((9311333580304833099 ? var_11 : (arr_9 [i_1] [i_4] [i_1] [i_2] [i_1] [i_0]))))) && (((+((1 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_2] [i_3] [i_2])))))));
                            var_15 = (min(var_15, (((((((arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3] [i_4]) | (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [16] [i_4] [16])))) ? ((1 ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_0 [4]) >> 1)))) : ((((((var_4 ? (arr_6 [i_2]) : var_1)) > (!-1))))))))));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_16 |= (max(236357179, 2));
                            var_17 &= (max(5803531346298275196, 1));
                            arr_18 [i_1] = ((+(((arr_0 [i_5 - 1]) ? (arr_0 [i_5 + 3]) : (arr_0 [i_1])))));
                            var_18 |= (arr_2 [i_3]);
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_19 *= ((0 >> (236357186 - 236357163)));
                            var_20 = ((var_2 ? ((~(arr_7 [9] [i_1] [9] [i_1]))) : (arr_2 [i_0 + 2])));
                            var_21 = (arr_1 [i_0] [i_0]);
                            var_22 = (min(var_22, (arr_7 [i_2] [i_3] [i_1] [i_2])));
                            var_23 = 236357200;
                        }
                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [8] [i_3] [8] = ((((~(((arr_19 [9] [i_3] [i_1] [i_1] [8]) | (arr_2 [17])))))) ? (((((arr_2 [3]) ? var_8 : (arr_20 [i_0] [0] [i_2] [i_1] [i_7]))) % 1)) : (((arr_0 [i_7 - 1]) & (arr_5 [i_1]))));
                            var_24 = ((((((arr_8 [i_3] [i_2] [i_2] [i_3]) < (arr_20 [i_7] [i_1] [i_2] [i_1] [i_1]))) ? ((((arr_14 [i_0] [i_7 + 3] [i_2] [i_3]) ? var_0 : (arr_5 [i_1])))) : (arr_23 [i_0 + 1] [i_1] [i_1] [i_7] [i_1]))));
                        }
                        var_25 = (min(var_25, var_10));
                        arr_25 [i_1] [i_1] [i_1] [i_1] = 236357186;
                        arr_26 [i_0 - 1] [i_0 - 1] [i_1] = (arr_10 [i_2] [i_1] [i_2] [i_2] [i_1] [i_2] [4]);
                        arr_27 [i_1] [15] [i_2] [i_3] = (arr_4 [i_0] [i_2] [i_3]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_26 = (arr_20 [i_8] [i_1] [i_2] [i_1] [i_0]);
                        var_27 = (max(var_27, (((-236357197 * (!46570))))));
                        var_28 = (arr_3 [i_8]);
                        var_29 |= (max(((((((arr_11 [i_8] [i_2] [i_0 + 2] [i_1] [i_0 + 2]) > (arr_17 [i_0] [i_1] [i_2] [4] [i_8])))) % (arr_5 [i_2]))), (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1])));
                        var_30 = var_8;
                    }
                    arr_30 [i_1] [i_1] [i_2] [i_1] = (((arr_28 [i_1] [i_0 + 2]) ? (arr_6 [i_0 - 1]) : (((-236357179 + 2147483647) >> (((((-2147483647 - 1) - -2147483631)) + 48))))));
                    var_31 = (((((arr_4 [i_0] [i_1] [i_0 + 1]) && (arr_4 [i_0 + 2] [i_2] [i_0 + 1]))) && (((arr_8 [1] [i_1] [i_2] [i_0 - 1]) || (arr_8 [17] [3] [i_1] [i_0 + 2])))));
                    var_32 = (min(var_32, (((~(arr_4 [i_0] [i_1] [17]))))));
                }
            }
        }
    }
    #pragma endscop
}
