/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((var_10 ? (((((((arr_2 [i_0] [i_1] [i_2]) >> (((arr_3 [i_2]) - 1725232566))))) && (((0 ? 1 : (arr_5 [i_0]))))))) : ((((8 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) / (((((arr_7 [i_0] [1]) + 2147483647)) << (28 - 28))))))))));
                    var_17 = (((((var_2 ? (arr_6 [i_2] [i_2 - 1] [i_2] [i_2]) : var_2))) ? ((max(-28, (arr_6 [i_2] [i_2 + 2] [i_2] [i_2 - 1])))) : ((min((arr_6 [i_2] [i_2 + 1] [i_2] [i_2]), var_8)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((((((((arr_3 [i_0]) ? (arr_3 [i_3]) : 46))) ? (min((arr_12 [i_4] [6] [i_4] [i_3] [i_4] [i_4]), (arr_6 [i_3] [i_3] [i_3] [i_3]))) : (((max(1, 1))))))) ? ((((((arr_5 [i_1]) == var_14))) << (!1))) : ((min((arr_8 [i_2] [i_2] [i_2] [i_2] [i_2 + 3]), (arr_8 [i_0] [i_0] [i_1] [i_2] [i_2 - 1]))))));
                                var_19 &= ((-87 | (((((820311169 ? var_14 : (arr_5 [i_0])))) ? 1 : (-127 - 1)))));
                                var_20 += (((((((((arr_6 [i_0] [i_2 + 2] [i_3] [i_4]) & 46))) & (max(-109, (arr_3 [i_4])))))) ? ((((max((arr_0 [13] [i_2 + 2]), 1))) ? ((min(var_2, var_6))) : ((max(1, 63))))) : (min((((arr_0 [i_2] [i_3]) ? 1 : 80)), (((arr_10 [i_0] [i_2]) ? -70 : -67108864))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((-18739 + 2147483647) << (var_2 - 2))) / var_9)))));
    #pragma endscop
}
