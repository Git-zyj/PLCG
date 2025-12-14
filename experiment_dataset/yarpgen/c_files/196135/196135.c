/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_14 = 35225;
                        arr_9 [i_2] [i_1] [i_2] [i_2] = (arr_6 [i_2] [i_2] [i_1] [i_2] [i_2]);
                        var_15 ^= (arr_7 [i_0] [i_1] [i_1] [i_2] [i_3 + 1]);
                    }
                }
            }
        }
        var_16 ^= ((((min(var_8, ((var_5 / (arr_0 [i_0])))))) ? (min(var_12, (arr_8 [i_0] [i_0]))) : ((~(arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_17 ^= ((~(min((((35225 / (arr_10 [i_0] [i_4])))), (min(var_13, 4134728284120127636))))));
                                var_18 ^= ((((min(((~(arr_5 [i_4] [i_4] [i_0]))), ((max((arr_5 [i_0] [i_4] [i_0]), (arr_8 [i_5 + 3] [i_6]))))))) ? (min((arr_14 [i_0] [i_0] [i_0] [i_0]), var_9)) : (arr_19 [2] [i_6] [i_6] [7] [2] [i_0] [i_0])));
                                var_19 ^= (28838 ? ((((arr_5 [i_0] [i_5] [i_0]) || 40253))) : ((min((arr_5 [i_7] [i_5] [i_7]), (arr_12 [i_5 - 1])))));
                                var_20 ^= arr_2 [0] [0];
                                var_21 = (arr_5 [i_0] [i_4] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_22 ^= ((arr_22 [i_4]) ? (arr_19 [i_5 + 4] [9] [2] [i_5] [4] [i_5] [i_5]) : ((min((((!(arr_8 [i_8] [i_4])))), (((arr_13 [i_0] [i_0] [i_9]) | (arr_6 [8] [i_4] [i_8] [8] [i_8])))))));
                                arr_28 [3] [i_4] [i_5] [i_9] [i_9] = ((+((((min((arr_3 [i_0] [i_4]), var_4))) ? ((var_8 ? -1069240038 : (arr_16 [i_0] [i_4] [i_5] [i_4] [i_9]))) : ((((arr_6 [i_0] [i_0] [i_9] [i_8] [i_9]) ? (arr_12 [i_5]) : (arr_12 [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 ^= var_3;
    #pragma endscop
}
