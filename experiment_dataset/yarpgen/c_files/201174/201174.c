/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? var_7 : (((~1609731638) & -25))));
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_3] = (min(((-(arr_7 [i_2] [i_1] [12] [i_2 + 1]))), (arr_9 [i_1] [i_2 - 2] [i_2 - 2])));
                        arr_11 [i_0] [i_0] [i_1] = (((arr_3 [i_2 + 1] [i_1 + 3]) ? ((((!(!-19))))) : ((var_4 ? 4294967278 : (arr_9 [i_1] [i_1 + 1] [i_2 - 2])))));
                        var_21 = max((((((0 >> (((arr_0 [i_3]) + 23426))))) | (((arr_9 [i_1] [i_2 - 2] [i_1]) ? 7 : var_17)))), (((~(arr_8 [6] [i_3 + 1] [i_3 - 4] [i_3 - 3])))));
                        arr_12 [i_0] [i_0] [i_1] = ((((((arr_7 [i_1 + 1] [i_1] [i_3 + 1] [i_1]) > (arr_7 [i_1 - 3] [i_1] [i_3 + 1] [i_3])))) / (((arr_5 [i_1 + 1] [i_2 + 1] [i_3 - 3]) * (arr_5 [i_1 + 3] [i_2 - 2] [i_3 - 3])))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((~((~((65530 << (arr_1 [9] [9])))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                {
                    var_22 = ((var_1 || ((((((arr_3 [i_4] [i_0]) ? (arr_15 [i_0] [i_4]) : var_3))) > (((arr_14 [i_0] [i_4] [i_5]) ? (arr_16 [i_5] [i_4] [i_0]) : (arr_18 [i_0] [i_0] [i_4] [i_4])))))));
                    var_23 = ((+(((arr_4 [i_5 - 2]) ? (arr_4 [i_5 + 3]) : (arr_4 [i_5 - 1])))));
                    arr_19 [i_0] [11] [i_4] = 253;
                }
            }
        }
        arr_20 [i_0] |= (((arr_6 [i_0]) % (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
