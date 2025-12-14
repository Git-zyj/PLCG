/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((max(var_7, (max(2282141438, var_3))))), (-4324518151340788171 + var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = (!(~1881190537629411227));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_22 = (max(var_22, ((min(var_14, (!var_5))))));
                                arr_15 [i_0] [i_0] [i_0] = (((var_1 - 5589101598748108864) ? (min(-1, 16)) : (((max(var_9, (arr_3 [i_1])))))));
                            }

                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [8] [i_2] [i_1] [i_5] [i_5] [19] = var_14;
                                arr_20 [i_0] [i_1] [i_5] [i_3] [i_5] = ((-var_4 && ((max(((min(var_7, -3))), (max(2804692247, (arr_5 [i_0] [i_1] [i_2]))))))));
                                var_23 *= (min(((min(-17, 32753))), (arr_14 [i_0] [i_0] [0] [0] [18])));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                var_24 = (min(var_5, (min((max(var_13, (arr_6 [5] [i_1] [i_2] [i_6]))), (~-9)))));
                                arr_24 [i_0] [i_0] [i_0] [i_3] [15] [i_6] = (max(((((arr_8 [i_3] [1] [i_3 - 1] [i_3 - 4]) != 17))), (max(-1, -3))));
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_25 = (((min(130, var_6)) % var_1));
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0] = (min(31, 12343410759634620458));
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                var_26 = ((!((min((arr_8 [i_0] [i_0] [11] [i_3 + 2]), (arr_8 [i_8] [i_1] [i_2] [i_3 - 4]))))));
                                arr_32 [i_1] [i_1] = (max(1, var_3));
                            }
                        }
                    }
                }
                var_27 = max(((max((arr_3 [2]), -21))), var_16);
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_11] = ((~(~-5)));
                                var_28 ^= (arr_30 [i_10] [17] [i_10] [i_0] [i_9 - 1] [i_9] [i_0]);
                            }
                        }
                    }
                }
                arr_42 [i_1] [7] [5] = min(1, (min(((max(4, (arr_37 [i_1] [i_0] [i_0] [i_0] [i_0])))), (min(var_3, (arr_36 [i_0]))))));
            }
        }
    }
    var_29 = (((((var_4 >> (var_3 - 1236519046)))) ? (min((var_14 + var_16), (var_9 & 67108863))) : ((max(var_3, 14)))));
    #pragma endscop
}
