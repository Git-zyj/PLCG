/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((max((var_0 % 422212465065984), (((118 ? (arr_1 [i_0]) : 1))))) <= ((((((1 ? 1 : (arr_0 [i_0])))) ? 48 : (arr_1 [i_0])))));
                arr_5 [i_0] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) > (arr_1 [i_0]))))));
                var_15 = ((1 ? ((((arr_2 [i_0] [i_1 - 2] [i_1]) ? 5247879869002045062 : ((min((arr_2 [i_0] [i_0] [i_1]), 1)))))) : ((~((3996764818 & (arr_1 [i_0])))))));
                arr_6 [i_0] [3] [i_1] = var_14;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 -= (((69279663 ? -86 : ((32751 ? (arr_2 [i_1] [i_1] [0]) : 7)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (max((arr_1 [i_0]), (((96 * 18446744073709551615) ? (((max(var_4, (arr_0 [i_0]))))) : (min(9223372036854775799, (arr_1 [i_0])))))));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    arr_13 [2] [i_1] &= ((((arr_8 [i_1 - 2] [i_1 + 1] [i_3 - 3] [i_3]) ? 18014398509481983 : (min(-2147483624, -1)))) == (((40627 ? (arr_1 [i_1]) : -var_13))));
                    var_17 &= ((+(((~var_0) ^ (~255)))));
                    var_18 = (arr_3 [i_0]);
                    var_19 = ((((max((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1 - 3]), (arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1 - 3])))) - ((((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1 - 3]) > (arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 4] [i_1 - 3]))))));
                    arr_14 [i_0] [i_1 - 3] = ((((((max(31, var_8))) ? (((var_6 || (arr_2 [i_0] [i_1] [i_0])))) : (1 || 536869888))) * ((-28352 ? ((var_0 ? 65530 : var_13)) : (arr_0 [i_0])))));
                }
            }
        }
    }
    var_20 += (max(((-((var_9 ? -56 : var_5)))), var_4));
    var_21 += ((var_14 > (((17329767238779580635 / -93) ? (((var_6 ? 65535 : var_4))) : ((var_4 ? 1 : 1))))));
    #pragma endscop
}
