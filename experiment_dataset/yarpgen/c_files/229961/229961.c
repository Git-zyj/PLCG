/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((!(arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_4])));
                                var_15 = 1;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_16 = (((arr_15 [i_2 - 1] [i_5] [i_5] [i_5] [i_2 - 1]) ? (((min((arr_15 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_2 - 1]), (arr_13 [i_5] [i_2 + 1] [i_2 + 1]))))) : (min((arr_13 [i_5] [i_5] [i_2 + 1]), (arr_8 [i_5 + 2] [i_2] [i_5] [i_2] [i_2] [i_2 - 1])))));
                            var_17 = (!0);
                            var_18 = var_0;
                            var_19 = ((((((((28 ? 23968 : 0))) ? (!635109216974849398) : (((-32767 - 1) * 0))))) ? (max((min(5347, (arr_8 [i_0] [3] [2] [i_0] [i_0] [i_6]))), -var_1)) : ((((((((arr_3 [i_0 - 1]) ? (arr_5 [11] [i_1]) : (arr_2 [i_5] [i_2])))) || (arr_15 [i_5] [i_5] [i_2] [i_1] [i_0])))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_20 = (max((((arr_20 [i_5 + 3] [i_5 + 3] [i_5] [i_0] [i_0]) ? (arr_20 [i_5 - 2] [i_5 + 1] [i_5] [i_5 + 2] [i_2]) : (arr_20 [i_5 + 3] [i_5] [i_2] [i_1] [i_1]))), (arr_1 [i_0 - 1])));
                            var_21 = ((((max((arr_1 [i_2 + 1]), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_7])))) ? ((min(32767, 9223372036854775802))) : (arr_16 [i_7] [i_1] [i_5] [i_1] [i_1] [i_0 + 1])));
                            var_22 = (0 + 2147481600);
                            var_23 = (((((((arr_7 [i_5 + 3] [i_2 - 1] [i_0 - 1]) < var_10)))) / ((var_4 % (arr_7 [i_5 - 1] [i_2 - 1] [i_0 - 1])))));
                            arr_21 [i_7] [i_1] [i_7] = (arr_19 [i_0] [i_0] [i_2] [i_5] [i_7]);
                        }
                        var_24 = (max((arr_15 [i_5 - 1] [i_2] [i_1] [1] [i_0]), ((min((arr_17 [i_2] [i_5 - 2] [i_5 - 2] [i_1]), (arr_11 [i_0] [i_5 + 3] [i_2 + 1] [i_0 + 1] [i_1]))))));
                    }
                }
                var_25 = (arr_1 [i_1]);
                var_26 = (((arr_0 [i_0]) ? (((arr_7 [i_0 + 1] [i_0 - 1] [i_0]) + (arr_7 [i_0 - 1] [i_0] [i_0 + 1]))) : (arr_17 [i_0] [i_0] [i_0] [i_1])));
                var_27 = (((arr_19 [i_0] [i_0] [i_1] [i_0 - 1] [11]) + -1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            {
                var_28 = (arr_22 [15]);
                var_29 = (-(arr_23 [i_8]));
                var_30 = (((arr_23 [i_9]) >= (arr_24 [i_8])));
            }
        }
    }
    var_31 = var_3;
    #pragma endscop
}
