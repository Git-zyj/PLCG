/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= (((18209552229191092691 - var_9) ? 1095965372 : 5));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_12 ? ((((var_15 >= (arr_2 [i_0] [i_0] [11]))))) : (arr_4 [i_2 + 1] [i_1 + 2] [i_1 + 4]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 *= arr_0 [i_2 + 1] [i_1 + 2];
                                arr_12 [i_2] [i_2] = (0 ? (4294967286 && 16383) : 2);
                            }
                        }
                    }
                    var_19 ^= (((arr_10 [i_2 + 1] [12] [i_0] [12] [i_0]) ? (arr_10 [i_2 + 1] [12] [i_2 + 1] [12] [i_0]) : (arr_10 [i_2 - 2] [14] [i_0] [14] [i_0])));
                }
            }
        }
        var_20 = (8239 || (arr_11 [14] [i_0]));

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_15 [2] [12] [i_0] = 4294967290;
            arr_16 [i_5] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
        }
    }
    var_21 = (((-(var_4 == var_4))));
    var_22 = (120 ? (!var_3) : var_9);
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_23 = (((!var_6) ? ((~(arr_21 [i_8] [i_9]))) : (((!((min(var_15, (arr_27 [i_6])))))))));
                                arr_30 [i_10] [i_10] [i_10] [i_10] [i_6] [i_6] = (min(var_1, ((((arr_21 [i_9] [i_9]) ? var_1 : var_1)))));
                                var_24 = (arr_20 [i_10]);
                                var_25 = (min(((((max(883935415, 28)) == -113))), ((-var_3 ? (arr_0 [i_9] [i_7]) : (arr_28 [i_8] [i_8] [i_8])))));
                            }
                        }
                    }
                }
                arr_31 [i_6 - 1] = ((((min((((var_3 ? (arr_9 [i_6] [i_6] [i_7] [i_7] [i_7]) : var_7))), (min((arr_20 [i_7]), var_1))))) <= (min((arr_19 [i_7] [i_6] [i_6]), (((var_5 / (arr_26 [i_7] [i_7] [i_7] [i_6 - 1] [i_6]))))))));
            }
        }
    }
    #pragma endscop
}
