/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((((((((arr_2 [i_1 + 1] [i_1 - 3] [i_1]) + 2147483647)) >> (((min((arr_3 [i_1] [i_2]), var_9)) + 7495671288244293202))))) ? (((arr_1 [i_1 - 3]) ? (arr_1 [i_1 - 3]) : (arr_1 [i_1 - 1]))) : (min(((var_6 / (arr_3 [i_0] [i_0]))), (arr_4 [i_0] [i_0] [i_1] [i_0])))));
                    var_21 |= ((~(max(((-(arr_2 [i_0] [i_1] [i_0]))), (arr_0 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (arr_3 [i_1 - 3] [i_1 - 3]);
                        var_23 ^= (((arr_1 [8]) ? (arr_1 [i_0]) : ((((arr_7 [i_0] [i_1] [i_0] [i_3]) ^ -9655)))));
                        var_24 = ((arr_7 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_2]) - (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 1]));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_25 = ((-2147483633 ^ (min((((16383 <= (arr_3 [i_0] [i_4])))), (min(3332413335666781466, (arr_14 [9] [i_1] [i_1] [i_1] [i_1])))))));
                        var_26 = var_12;
                        var_27 = ((((max(var_5, var_11))) && ((((arr_4 [1] [1] [i_1] [i_0]) - (arr_10 [i_0] [i_1 - 1] [i_1] [i_2] [i_4 - 1]))))));
                        var_28 = ((((((arr_1 [i_1 - 2]) + (arr_1 [i_1 + 1])))) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]) : (min((arr_10 [i_0] [i_1] [i_2] [i_2] [i_4 + 1]), (arr_7 [i_1 + 1] [i_2] [i_4 - 1] [i_1 + 1])))));
                    }
                }
            }
        }
    }
    var_29 = (-9223372036854775807 - 1);
    var_30 = var_15;
    #pragma endscop
}
