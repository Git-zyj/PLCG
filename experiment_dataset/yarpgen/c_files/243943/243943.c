/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((var_9 | (var_3 / var_4))), var_0));
    var_13 = 30;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((((min((arr_3 [i_0]), (2007921226528688121 == var_10)))) - ((((((arr_3 [4]) | (arr_0 [i_1])))) % var_10))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (((((~(((arr_3 [i_0]) ^ -2007921226528688121))))) ? (((((arr_3 [i_1]) + (arr_7 [i_3] [i_1] [i_1] [i_3]))))) : (arr_10 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 - 3])));
                            arr_11 [i_0] [19] [i_2] [2] [i_0] [i_3] = ((((arr_10 [i_2 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 4] [i_3]) | (arr_10 [i_2 - 2] [i_2] [i_3 + 1] [i_3 - 2] [i_3 - 3] [12]))));
                            var_16 += 17886;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
