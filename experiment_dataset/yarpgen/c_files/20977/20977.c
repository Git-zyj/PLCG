/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_1])))) ? var_5 : (arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = ((!(arr_1 [i_2 + 1])));
                            var_18 = (max(var_18, ((((((((arr_11 [i_0] [i_1] [i_2 - 1] [i_1]) ? (arr_9 [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_0]))))) || ((((arr_0 [i_0] [i_2]) ? (arr_0 [i_3] [i_0]) : (arr_8 [i_0] [i_0] [i_2] [i_3])))))))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_19 = (arr_10 [i_3] [i_2] [i_0] [i_0]);
                                var_20 = var_1;
                            }
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_11 [i_2] [i_2 - 1] [i_1] [i_2]);
                        }
                    }
                }
                var_21 = (!var_5);
                var_22 &= (arr_10 [i_0] [i_1] [i_0] [i_1]);
            }
        }
    }
    var_23 += ((var_11 ? (~var_10) : (max(((max(var_1, var_8))), (max(var_7, var_12))))));
    #pragma endscop
}
