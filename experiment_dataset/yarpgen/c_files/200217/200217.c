/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 &= ((var_8 ? ((var_19 ? var_1 : var_12)) : ((max((min(var_4, var_1)), var_1)))));
    var_22 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_23 |= (!65535);

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] = (arr_4 [i_1]);
                    arr_11 [6] [i_1] [6] |= ((((((114 ? var_2 : var_9)))) ? (((((59 ? (arr_5 [i_0] [1] [i_0]) : var_4)) == ((max(1, (arr_0 [i_0] [i_1]))))))) : (min((arr_7 [i_0] [i_0 + 2] [8] [i_1 - 1]), (arr_4 [1])))));
                }
                arr_12 [i_0] [i_1] = (max(var_18, (arr_2 [i_0])));

                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                arr_21 [8] [18] [i_1] [13] [i_5] = 69;
                                var_24 += (min(((min((1 * 1), ((var_19 / (arr_0 [i_5 + 1] [2])))))), (max((((arr_8 [i_5] [i_1]) * 9597316541060714189)), (arr_7 [i_1 + 2] [i_3 + 3] [1] [i_5])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_25 -= (((min((arr_19 [i_0 - 1] [i_0 - 1] [1] [8] [i_3]), var_4)) ? (((arr_19 [i_0 - 1] [i_1] [i_0 - 1] [4] [i_7]) * (arr_19 [i_0 - 1] [i_0 + 2] [8] [1] [i_3]))) : ((min((arr_19 [i_0 - 1] [1] [i_7] [1] [1]), (arr_19 [i_0 - 1] [i_1] [i_6] [1] [16]))))));
                                var_26 += min((min((arr_0 [i_1 + 2] [i_6]), (arr_0 [i_3 + 2] [i_0 + 2]))), (max((arr_0 [i_0 + 1] [6]), var_0)));
                            }
                        }
                    }
                    var_27 += ((((((max(var_4, 1033930237))) ? (arr_19 [i_0] [i_0 + 1] [i_0] [14] [i_3]) : (max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))) & ((((min(9223372036854775799, (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                    var_28 = (((!((((arr_13 [i_3 - 1] [16] [i_0]) * (arr_0 [i_0] [i_0])))))));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_1] [i_1] = (((((-(arr_29 [1] [i_1] [i_0 + 2] [i_8 + 2])))) ? (((arr_9 [i_0 + 2]) & 1)) : (arr_25 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_8])));
                    var_29 = (min((63649 & 1), (min((arr_16 [i_1] [i_8 - 1] [i_8 + 1] [i_8]), 5932526964005320566))));
                }
            }
        }
    }
    #pragma endscop
}
