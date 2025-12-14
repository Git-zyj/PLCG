/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 += (min((max((min(-6961179692220161814, var_15)), (var_10 - 4294967295))), ((min((var_11 + 10594), (max(var_13, 4294967295)))))));
                var_19 ^= (min(((((arr_0 [2]) <= (arr_0 [8])))), (var_12 / var_6)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_20 = (min(((((arr_8 [i_4] [i_4] [i_4 + 1]) / -6961179692220161814))), (max(var_13, 7869011707231611906))));
                            arr_14 [i_2] [i_5] [i_5] [i_5] [i_5] = (((min(var_6, 1213809288)) & (((108590271 > (arr_10 [6] [i_4 + 1] [6] [6]))))));
                            arr_15 [12] [i_5] [3] [i_5] = ((((min(var_11, (arr_9 [i_2] [i_5])))) * ((min((arr_9 [i_2] [i_3]), 20224)))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((min(var_9, (arr_13 [i_3]))) & (((min(14176, (arr_9 [i_2] [i_2]))))))))));
                var_22 -= min((max(var_17, 21061)), (((20224 < ((((arr_6 [i_2] [i_2]) || var_16)))))));
                var_23 = ((((2548470833 >> (4234099889 - 4234099883))) & ((3020216571 >> (18214846113198794461 - 18214846113198794434)))));
                var_24 = (min(var_24, ((min((min(var_10, (arr_8 [i_3] [i_3] [i_2]))), (((1 <= (arr_8 [i_2] [i_2] [9])))))))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [1] = min((((((arr_10 [1] [18] [1] [18]) + var_2)) + (arr_5 [i_6] [i_6]))), (((arr_9 [i_6] [i_6]) + (arr_10 [i_6] [i_6] [i_6] [i_6]))));
        arr_21 [i_6] [i_6] = (((7433873254365651764 - 3225878956) - (32767 + -20797)));
        arr_22 [i_6] = (max(((((arr_10 [i_6] [i_6] [18] [i_6]) && ((min(var_13, var_15)))))), (min(var_17, (arr_16 [i_6] [i_6])))));
        var_25 *= (min(((3788171694828661627 * (min(var_10, (arr_16 [i_6] [5]))))), ((((arr_5 [i_6] [i_6]) ^ var_15)))));
    }
    #pragma endscop
}
