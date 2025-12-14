/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 = ((((((1497602174 ? var_2 : (arr_3 [i_1] [i_0]))))) ? (arr_2 [i_0]) : (((var_9 ? (((max(1, 1)))) : (max(var_3, (arr_5 [i_0] [i_1] [i_1]))))))));
                    var_12 ^= (arr_8 [i_0] [i_0]);
                    arr_9 [i_0] [i_1] = 32761;
                    arr_10 [i_2] [i_0] [i_1] [i_0] = (min(((((arr_1 [i_0] [i_1]) ? (arr_1 [i_2] [i_0]) : (arr_1 [i_0] [3])))), (((!16492) ? (arr_2 [13]) : ((min(var_6, 2147483635)))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    var_13 = (((arr_8 [i_3 + 1] [i_3 + 1]) ? (arr_11 [i_0] [i_3 + 1] [i_0] [i_3 + 2]) : var_8));
                    var_14 += (((arr_6 [i_0] [i_3 + 2] [i_0]) ? (arr_12 [i_0] [i_3 - 1] [i_3]) : (arr_12 [i_0] [i_3 + 2] [4])));
                    arr_13 [2] = (16492 | 49018);
                }
                for (int i_4 = 4; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_0] [i_4] [13] [i_4] = ((!(((arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 3]) >= (arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 = ((((((32753 >= var_6) ? (arr_18 [i_6] [i_4 - 2] [i_4 + 2] [i_4 + 2]) : (arr_0 [i_0] [i_1])))) * var_8));
                                var_16 += (arr_16 [i_6]);
                                var_17 = 1;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_31 [14] [14] [14] [i_7] = (min((max((arr_2 [i_9 - 1]), (arr_18 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_9 - 1]))), ((((arr_28 [17] [i_9 - 2] [i_9 - 2] [i_9 + 1] [7]) ? var_7 : var_6)))));
                                var_18 = (max(var_18, ((((((min((arr_12 [0] [i_7 + 1] [0]), var_5))))) * ((~(max(var_8, (arr_1 [i_7] [1])))))))));
                                var_19 = (((((var_5 && (arr_12 [i_0] [i_7] [0]))))) / (min(-1980391134, 4294967295)));
                            }
                        }
                    }
                    arr_32 [i_7] [i_7] [7] [i_0] = ((((var_4 >= ((1 ? (arr_11 [i_0] [i_1] [7] [i_0]) : var_7)))) ? ((var_0 ? (((arr_7 [i_7 + 1] [i_1]) - 8160)) : ((1 ? 32759 : 255)))) : (arr_1 [7] [16])));
                }
                var_20 = (max(var_20, (49013 >= -4538070990394137207)));
            }
        }
    }
    var_21 *= (-1 | 255);
    var_22 = (min(var_22, ((((var_6 || (((var_7 ? var_1 : var_1))))) ? (!var_9) : ((var_3 ? var_7 : (var_4 && var_4)))))));
    #pragma endscop
}
