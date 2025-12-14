/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((arr_0 [i_0]) ? (!9719556982247695350) : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] = (30 / var_2);
                                var_14 = var_2;
                                var_15 = (((arr_1 [i_4]) ? (arr_11 [i_1] [2] [i_3] [7]) : (arr_11 [i_2] [i_4] [i_3] [i_3])));
                            }
                        }
                    }
                    var_16 = (var_2 | 255);
                }
            }
        }
        arr_13 [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    var_17 = ((((!(((var_0 ? 1 : var_0))))) ? (max(16383, 4088)) : ((~(~56273)))));
    #pragma endscop
}
