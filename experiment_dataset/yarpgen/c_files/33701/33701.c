/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -5474927557971585264;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (arr_6 [i_1] [i_1]);
                    arr_9 [i_0] [i_0] [i_0] = ((((arr_7 [4] [i_1] [i_1 + 3] [i_1]) ? (arr_7 [i_1] [i_1] [i_1 + 3] [i_1 - 1]) : (arr_7 [i_1] [i_1] [i_1 + 3] [9]))) & ((((arr_3 [i_1 + 3]) ? -13444 : (arr_3 [i_1 + 1])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((((arr_7 [i_1] [7] [i_1 + 3] [i_1 + 2]) | (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 3]))) < ((((((~(-2147483647 - 1)))) | (arr_3 [i_2])))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((((!(arr_0 [i_1 + 2] [i_1 + 2])))) & (arr_3 [i_1 + 1])));
                        var_21 = (arr_2 [i_1] [i_3]);
                        arr_13 [i_0] [i_1] [i_2] [8] [i_0] = (max((((!(arr_11 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 - 1])))), (((arr_4 [i_1 + 3] [i_1 + 1] [i_1 - 1]) - (arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1])))));
                    }
                    var_22 = (3481172067 > -114);
                }
            }
        }
    }
    #pragma endscop
}
