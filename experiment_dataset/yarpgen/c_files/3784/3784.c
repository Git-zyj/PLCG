/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((var_2 || var_6) << (661294485507874078 - 661294485507874070)))));
    var_11 = (var_2 ^ (((((max(213, var_9)) != var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, ((max(1, ((207 ? var_8 : 524977462)))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (arr_11 [i_1] [i_0] [i_3 - 1]);
                        }
                    }
                }
                var_13 = ((((((-(min((arr_4 [i_0]), (arr_9 [i_0 - 1] [i_1] [i_1]))))) + 2147483647)) << ((((((max(1, 1)) || (3769989833 && 387197038)))) - 1))));

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_5] = ((1305226694 ? 242 : -61));
                        var_14 ^= ((var_4 << (((arr_10 [i_4 - 4] [i_0 - 3] [i_0 - 1] [i_0 - 3]) - 3113980963667415552))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] |= (arr_14 [i_1]);
                        var_15 = (((((69 ? 4153885324 : 213))) ^ ((32448 ? 70667102 : -2556938810771809391))));
                        arr_19 [i_1] [i_1] [i_0] [i_5] = (((arr_16 [i_0] [i_0 + 1] [i_5] [i_5]) < (arr_1 [i_0] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_16 = (var_3 ? (arr_4 [i_0]) : var_2);
                        var_17 = (max(var_17, (arr_13 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_18 = (i_0 % 2 == zero) ? ((max(((max((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 3])))), ((((575182401 ? var_3 : (arr_8 [i_0] [i_1]))) / (((1 << (((arr_4 [i_0]) - 28)))))))))) : ((max(((max((arr_6 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 - 3])))), ((((575182401 ? var_3 : (arr_8 [i_0] [i_1]))) / (((1 << (((((arr_4 [i_0]) - 28)) + 36))))))))));
                        arr_24 [i_0 - 1] [0] [i_0] [i_0 - 1] = (max((((min(1048621066, 0)) & 32549)), (((var_8 && (3584 >= var_9))))));
                    }
                    arr_25 [i_0] [i_1] = (((((3769989834 % 4558161499190442623) || (((var_0 ? (arr_21 [i_0] [1] [i_1] [0]) : 3473092484))))) || (arr_2 [i_0 - 3])));
                    var_19 = (((((((arr_6 [i_0] [13]) ? 1676000303 : (arr_11 [9] [i_0] [i_4 - 3]))) - ((((arr_7 [i_0] [i_4] [i_0] [i_0]) * (arr_2 [i_1])))))) / -4923927859335364636));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_20 = (((arr_11 [i_0 + 2] [i_0] [i_0 + 1]) || (((24763 ? 7870 : (-2147483647 - 1))))));
                    var_21 = ((~(arr_27 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
