/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_5, (((var_7 / var_8) << (var_15 >= var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (min(((((min((arr_3 [i_3] [i_1]), (arr_2 [i_0])))) || (arr_0 [i_0 + 1]))), (((arr_6 [i_0 - 1] [i_2 + 2] [i_1] [i_2]) && (arr_6 [i_0 + 1] [i_2 - 2] [19] [i_2])))));
                            arr_11 [i_0] [1] [6] [i_2] = (min((arr_2 [i_2 + 2]), (max((max((arr_4 [i_0]), (arr_0 [6]))), (arr_9 [i_0] [5] [i_2] [i_3] [i_3])))));
                            var_19 += (((((((((arr_5 [i_0] [13] [13] [i_3]) <= (arr_9 [i_0] [i_0] [i_3] [i_3] [i_3])))) + ((((arr_0 [i_0]) || (arr_6 [i_0] [i_0] [i_2] [12]))))))) <= (arr_9 [i_0] [i_0] [i_1] [i_3] [1])));
                            var_20 = min((min(((max((arr_8 [i_0] [i_1] [i_1] [i_0] [i_3]), (arr_5 [i_1] [i_2] [i_3] [i_0])))), (((arr_0 [i_1]) + (arr_9 [6] [i_1] [i_2] [i_3] [12]))))), (arr_9 [i_3] [11] [i_2] [i_1] [i_0]));
                            arr_12 [i_2] [i_1] [i_1] [i_1] [15] = (arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_3]);
                        }
                    }
                }
                var_21 &= arr_9 [7] [i_1] [15] [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_22 *= ((((max(61, -62)))) - (min((arr_9 [i_0 + 1] [i_0 + 1] [i_5 + 3] [i_5 + 2] [i_5 + 1]), (((arr_2 [i_0]) + (arr_15 [i_0] [i_1] [i_5]))))));

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                arr_22 [i_0] [i_5] = ((((max(((((arr_13 [i_0] [i_1] [i_4]) == (arr_13 [i_1] [i_4] [i_5])))), (min((arr_9 [i_0] [i_1] [i_4] [i_5] [i_6]), (arr_1 [i_1])))))) && ((min((arr_18 [i_6] [i_1]), (61 && 704789083))))));
                                var_23 ^= arr_13 [i_0] [i_1] [i_4];
                            }

                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_24 = (max((653709779 ^ 8899), ((653709786 << (3641257510 - 3641257479)))));
                                var_25 = (((arr_20 [12] [i_4] [i_7]) <= (max((max((arr_18 [2] [i_1]), (arr_18 [i_4] [i_4]))), ((((arr_15 [i_0] [i_4] [i_4]) == (arr_6 [20] [3] [i_5] [i_5]))))))));
                            }
                            for (int i_8 = 4; i_8 < 20;i_8 += 1)
                            {
                                arr_28 [i_5] = (max((((arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1]) + (arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1]))), (arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1])));
                                var_26 = (min((((-8900 % -65) % (arr_17 [i_5] [i_5 + 2] [i_5] [i_5]))), (min((arr_19 [i_0 - 1] [i_8] [i_5 + 1] [i_8 - 2] [i_0]), (arr_7 [i_5] [i_5 + 2] [i_5])))));
                                arr_29 [10] [i_5] [11] [i_5] = (i_5 % 2 == zero) ? ((min(((max((arr_1 [i_0 + 1]), -61))), (((arr_10 [17] [i_5] [i_4] [i_4] [i_8]) << (((arr_10 [i_0 - 1] [i_5] [4] [i_0 + 1] [i_8 - 2]) - 25177))))))) : ((min(((max((arr_1 [i_0 + 1]), -61))), (((arr_10 [17] [i_5] [i_4] [i_4] [i_8]) << (((((arr_10 [i_0 - 1] [i_5] [4] [i_0 + 1] [i_8 - 2]) - 25177)) + 11342)))))));
                                arr_30 [i_4] [i_4] [i_4] [i_4] [i_5] = (arr_0 [i_0]);
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 19;i_9 += 1)
                            {
                                var_27 &= (15 & 20002);
                                var_28 += ((arr_1 [i_0 - 1]) * (arr_18 [i_0 + 1] [i_5 + 2]));
                                var_29 = ((((((arr_8 [i_0] [i_1] [i_4] [12] [i_9]) != (arr_8 [i_0] [i_1] [i_4] [i_9] [i_9])))) / (arr_32 [i_5 + 2] [i_5 + 2] [i_5] [i_9 + 1] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
