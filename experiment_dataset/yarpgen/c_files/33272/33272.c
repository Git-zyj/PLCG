/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0]) & (((((arr_3 [i_0] [14]) && (arr_1 [5] [5])))))))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (((!(arr_2 [i_0] [i_0]))))));
                            var_14 = (min(var_14, (((((((((arr_3 [i_2] [i_3]) ? (arr_7 [4] [4] [i_2]) : 695755104))) ? ((-(arr_9 [i_1 + 1]))) : (((min(1, var_10))))))) ? ((((!(max(1, 1)))))) : (min(var_4, -8126033467794454250))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_0] [i_4] [i_0] [i_0] = (!-var_0);
                                var_15 = (min(var_15, (arr_1 [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] [i_0] = -0;
            }
        }
    }
    var_16 = (min(var_16, var_3));
    var_17 = (max(var_17, (var_3 / 15776352084847852207)));
    #pragma endscop
}
