/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_1 [i_0] [i_1]) + 2147483647)) << 0));
                                arr_12 [i_4] = (((arr_2 [i_1 - 1]) && (((arr_2 [i_2]) != (arr_2 [i_3])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_19 = (max(var_19, ((0 <= (var_7 >= var_7)))));
                                var_20 = (max(var_20, (!-8)));
                                var_21 = ((((((((var_14 ? 3824424367 : var_5))) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_7]) : (arr_20 [i_1 - 1] [i_1 - 1] [i_5 + 3])))) ? ((+(((arr_2 [i_1]) ? 2630129701624662470 : (arr_5 [i_5] [i_5 + 1] [i_5] [i_5 - 2]))))) : ((max(3460, -748667886815988875)))));
                            }
                            var_22 = ((((var_0 / (arr_18 [i_0] [9] [i_0] [5] [i_0] [i_0]))) > var_11));
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = ((-var_1 / (max(var_2, var_1))));
            }
        }
    }
    #pragma endscop
}
