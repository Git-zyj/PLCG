/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= min(((var_7 ? ((var_0 ? var_6 : var_13)) : ((max(-1236849338, 1))))), (((var_13 ? ((max(241, 241))) : var_7))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (arr_7 [i_0] [i_1]);
                    arr_9 [4] [4] [i_0] [8] = min(((-(arr_1 [i_0] [i_0]))), (((var_14 ? 241 : var_10))));
                    var_18 = (((max((arr_8 [i_0 - 1] [i_0 - 1]), (max(var_6, (arr_1 [i_0] [i_0 - 1]))))) >> ((((((min(var_3, 1))) ? var_12 : (((max(41, 1)))))) - 1990821804))));
                    var_19 = (max(((max(((min(15, var_1))), var_2))), (((arr_6 [i_1] [i_2]) ? ((max(-5068546150041724002, 1))) : (min(203, 1349337283401657054))))));
                }
            }
        }
        var_20 *= ((!((max((arr_1 [i_0 - 1] [i_0 - 1]), 241)))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_21 = var_14;
                                var_22 ^= ((((((arr_4 [i_3] [7]) ? (arr_5 [i_3]) : (arr_20 [4] [i_4] [i_5] [i_6] [i_3])))) || (((72057594037927424 ? 0 : var_8)))));
                                var_23 -= (~(52 <= var_14));
                                var_24 = (1125899906842616 + 717622750);
                            }
                        }
                    }
                    arr_24 [i_3] [i_5] [i_5] [i_5] = 8138723805593002040;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_30 [1] [1] [i_5] [i_5] [i_9] [i_5] [i_4] = (arr_19 [i_3 + 3] [i_3 + 1]);
                                arr_31 [i_9] [1] [i_5] [i_3] [i_5] [i_3] [i_3] = 0;
                                arr_32 [i_9] [i_5] [i_9] [i_9] [i_9] = (arr_23 [i_3] [i_3] [i_3] [2] [i_3 - 1] [i_3 - 1]);
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_3] |= arr_1 [i_3] [i_3 + 2];
        var_25 = (max(var_25, ((~(arr_27 [i_3 + 3] [i_3] [i_3 + 2] [0] [i_3] [i_3])))));
    }
    for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
    {
        var_26 = max((((var_12 ? (714864782199154 && var_8) : var_6))), (max(var_15, 0)));
        var_27 &= 138;
        var_28 ^= (((((arr_27 [i_10 - 1] [0] [i_10] [i_10] [i_10] [i_10]) << ((var_10 ? (arr_6 [i_10 - 1] [i_10]) : var_0)))) > (((((max(var_14, (arr_8 [1] [4])))) ? ((min(1, var_7))) : ((min(127, 81))))))));
    }
    #pragma endscop
}
