/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_12 [i_0 + 1] [i_0] [i_0] = ((((arr_5 [i_0 + 2] [i_1]) ^ (arr_5 [i_0 - 2] [i_1]))) & (arr_5 [i_0 - 2] [i_1]));
                        var_18 = (min(var_18, ((((max((((arr_7 [i_3] [i_2]) ? (arr_8 [i_0] [i_0] [9] [i_3]) : (arr_9 [i_1] [i_1] [0]))), ((((arr_3 [i_0] [i_1] [2]) ? (arr_4 [i_0] [15] [i_3]) : var_11))))) < (((((max((arr_4 [12] [i_1] [i_2]), (arr_7 [i_1] [i_1])))) ? ((((arr_4 [i_0] [i_0] [i_0]) < var_4))) : (((var_1 < (arr_4 [i_1] [i_1] [i_1]))))))))))));
                        var_19 = arr_11 [i_0] [i_1] [11] [7] [1] [i_0];
                    }
                    var_20 = (max(var_20, (1116334040 || -2103071629)));
                }
            }
        }
    }
    var_21 &= (17433 != 1);
    var_22 = var_8;
    #pragma endscop
}
