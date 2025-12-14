/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_11 *= (((((((3320186948 % var_3) == (((arr_0 [i_0]) ? (arr_1 [8]) : (arr_1 [i_0]))))))) ^ ((1673099384 ? (arr_0 [i_0]) : (arr_1 [i_0 - 1])))));
        arr_2 [i_0 - 1] &= var_8;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = ((max(var_5, var_2)));
        arr_6 [i_1] [15] = ((-64 ? 10510 : 1));
        var_12 = (min((max(-var_5, ((min((arr_4 [i_1]), var_0))))), (((~(~59))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 *= var_1;
                                var_14 = (max(var_14, (arr_10 [i_2])));
                                arr_20 [14] [i_3] [i_2] [i_5] [i_3] = (i_2 % 2 == 0) ? (((((((var_1 >> (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) + 101245043)))) + (arr_3 [i_5]))) + ((max((arr_18 [i_2] [i_6 - 1] [14] [i_2] [11]), (arr_13 [i_2] [i_5] [i_4] [i_2] [i_2]))))))) : (((((((var_1 >> (((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) + 101245043)) - 729237412)))) + (arr_3 [i_5]))) + ((max((arr_18 [i_2] [i_6 - 1] [14] [i_2] [11]), (arr_13 [i_2] [i_5] [i_4] [i_2] [i_2])))))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_5] [i_6] = (((((var_10 >> (-100 + 113)))) ? (((((1640647643 | (arr_3 [i_2])))) ? (((min((arr_19 [i_2] [i_2]), 1)))) : (min((arr_13 [i_2] [i_2] [i_4] [i_5] [i_6]), (arr_3 [i_6]))))) : ((max((((arr_16 [i_2] [i_2] [i_2]) / var_3)), (((arr_14 [i_2] [i_2] [i_2] [i_4] [i_5] [i_6 - 3]) / (arr_9 [i_6] [i_6] [i_2]))))))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_3] [i_3] [i_4] = ((~(arr_19 [i_3 + 1] [i_2])));
                    var_15 = (i_2 % 2 == zero) ? ((((arr_3 [i_2]) ? ((var_0 ? (((arr_10 [i_2]) << (((arr_19 [i_2] [i_2]) - 63)))) : (-24335 == 420856204))) : ((var_9 | (arr_9 [8] [13] [i_2])))))) : ((((arr_3 [i_2]) ? ((var_0 ? (((arr_10 [i_2]) << (((((arr_19 [i_2] [i_2]) - 63)) + 28)))) : (-24335 == 420856204))) : ((var_9 | (arr_9 [8] [13] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
