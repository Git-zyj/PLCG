/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(((-(max(var_1, -1245935862)))), ((-1245935859 * (var_8 > -343344844))));
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (((((var_9 != (((2134984993 && (arr_13 [i_0 - 1] [i_1]))))))) * (((var_3 > (var_6 || 41388))))));
                                var_14 = ((var_1 ? (arr_4 [i_0]) : (!1486302490)));
                                var_15 = ((2064384 <= 65528) ? 123 : 4109);
                            }
                        }
                    }
                    var_16 = (min(var_0, (((arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]) - (198 - 1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (max((arr_9 [i_0] [i_1] [i_2] [i_5]), ((~(~16817)))));
                                var_18 = (((~((343344841 & (arr_4 [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
