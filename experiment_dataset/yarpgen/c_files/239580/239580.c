/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((!(var_5 || var_3)));
                            var_20 = var_9;
                            var_21 = (min((((var_2 / var_13) ? (arr_9 [14] [i_0] [i_2] [i_1 + 1]) : (var_6 || 0))), ((max(((var_7 >= (arr_4 [i_0]))), (arr_7 [i_1 + 1] [i_1 + 1]))))));
                        }
                    }
                }
                var_22 = var_6;
                var_23 |= (min((18446744073709551615 ^ -22944), (arr_6 [i_1] [i_1 + 1] [4])));
            }
        }
    }
    var_24 = (~var_13);
    var_25 = var_9;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_26 = (((max(((22943 ? var_3 : 0)), var_7)) - ((((arr_10 [i_4] [i_4] [i_5] [i_4] [i_6] [19]) || (arr_10 [i_4] [i_4] [i_5] [i_4] [i_6] [17]))))));
                    var_27 = (((1 > 18446744073709551586) || ((min((arr_16 [i_6]), var_7)))));
                    var_28 = (min((((arr_4 [i_6]) ? (((arr_17 [i_6]) ? 0 : 11)) : (arr_12 [i_4]))), (min((((var_15 ? var_7 : var_14))), (arr_16 [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
