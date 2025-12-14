/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_3] = ((min((arr_8 [i_0] [i_1] [i_2] [i_2 - 2]), (arr_8 [i_0] [i_1] [i_2] [i_2 - 1]))));
                            var_17 = ((-(min(((210 ? (arr_11 [i_0 - 2] [i_1] [i_2 - 1] [i_2] [i_1] [i_1]) : (arr_5 [i_2] [i_1] [6]))), (arr_5 [i_3] [14] [i_2 - 2])))));
                            var_18 = (arr_3 [i_0] [i_1] [i_3]);
                            var_19 = (max(var_19, (arr_10 [i_0 - 3] [20] [i_1] [i_2] [i_2] [i_3])));
                            var_20 = ((min(0, (((arr_8 [i_0 + 1] [i_1] [i_2] [i_1]) ? 1023 : (arr_0 [i_2]))))) << (((arr_6 [13] [i_0 + 2] [i_0]) + 24703)));
                        }
                    }
                }
                var_21 = (max(var_21, ((((!(arr_4 [i_0 + 1]))) ? (((arr_4 [i_0 - 4]) ^ (arr_4 [i_0 - 3]))) : ((-(arr_4 [i_0 + 1])))))));
            }
        }
    }
    var_22 = (((((var_4 ? (!var_10) : (var_11 && var_12)))) ? ((var_15 ? (0 != var_0) : (!var_11))) : 13253));
    #pragma endscop
}
