/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [12] = ((((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 + 1])))) ? (arr_7 [i_0 - 1] [i_0 - 1]) : (((((var_2 ? var_5 : (arr_3 [i_0] [i_0]))) / var_0)))));
                    var_19 ^= ((55 % 13117983040356262844) ? ((((((var_13 * (arr_5 [i_0])))) ? (arr_3 [i_1] [i_0 + 2]) : (arr_0 [7])))) : (((arr_3 [i_0 + 2] [i_0 - 1]) ? 32767 : (arr_0 [i_0 - 1]))));
                    var_20 -= ((var_2 < ((141 ? (0 ^ var_0) : ((max(141, 0)))))));
                    arr_9 [i_0 - 1] [i_1] [i_2] [i_2] &= (((arr_3 [i_2] [i_1]) ? (((-74 * ((((arr_7 [i_0] [i_0]) && (arr_2 [i_1]))))))) : (max(62119, ((var_12 ? 65522 : (arr_7 [i_0] [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_3] [i_3] = ((!(max(1, (!65535)))));
                var_21 = ((-1 ? (((~(arr_4 [i_3 - 3] [i_3 - 3])))) : ((((((arr_3 [i_3] [14]) / (arr_5 [i_3])))) ? (((arr_14 [i_3] [i_4]) ? (arr_7 [i_4] [i_3]) : var_4)) : (((max(1, -7516))))))));
                arr_19 [i_3] [i_4] [i_3] = ((~((max(var_12, (arr_6 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
