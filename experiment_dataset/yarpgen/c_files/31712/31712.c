/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((!((!(arr_6 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_0 - 1])))));
                                var_14 = (arr_5 [13] [13] [13]);
                                var_15 = ((-((((arr_10 [i_3 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4]) <= var_8)))));
                            }
                        }
                    }
                }
                var_16 = (max(var_16, (((((-(arr_5 [i_0] [i_0 + 1] [i_1]))) + 24073)))));
                arr_12 [i_0] [i_1] = ((((((arr_11 [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_1] [4] [i_1]) << (~-1)))) == (arr_7 [i_0] [i_1])));

                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_17 = ((((min((((-(arr_0 [15])))), (arr_13 [i_0] [i_1] [i_5])))) ? (((arr_13 [i_0] [4] [i_5]) ? (((arr_6 [i_5] [i_1] [i_1] [i_0] [i_1] [i_0 - 1]) >> (var_3 - 18))) : (arr_6 [0] [i_0] [i_0 + 1] [i_1 - 1] [i_1] [i_1]))) : ((min((min(var_8, (arr_5 [i_0] [i_1] [i_5]))), ((((arr_10 [i_5] [i_0] [i_1] [13] [i_0] [i_0]) << (((arr_6 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_0]) - 2216015170342051493))))))))));
                    var_18 = -2258742958289535907;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                arr_22 [19] = (!32767);
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((max((min(var_10, (arr_27 [i_6] [18] [0] [i_9]))), ((((arr_19 [i_6]) ^ var_3)))))) ? (((880930609 ? (max(1125889471, var_11)) : ((((arr_19 [i_6]) > (arr_25 [4] [4] [i_7]))))))) : (arr_27 [i_8 - 1] [i_8 - 1] [i_7] [i_6]))))));
                            arr_30 [7] [i_7] [i_7] [i_9] = (((3305188533 < 989778763) ? (min(var_2, ((~(arr_28 [8] [8] [16] [i_9]))))) : ((((max(3426830537, (arr_21 [i_6] [i_8] [i_9])))) ? (var_5 != var_7) : (min((arr_29 [i_8] [i_8] [i_7] [i_6]), (arr_29 [i_6] [i_7] [1] [i_9])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
