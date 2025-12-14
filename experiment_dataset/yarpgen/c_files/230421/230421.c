/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_12;
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((((((max(var_5, (arr_4 [i_0] [i_0] [i_0])))) ? (arr_2 [i_1]) : ((var_1 ? var_6 : (arr_6 [i_0] [i_1] [6] [i_3]))))) >= ((((arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]) > var_11))))))));
                            arr_9 [i_0] [i_0] [i_0] [4] [i_3] [i_0] = (min(((var_8 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0]))), (var_2 && var_13)));
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = (min((arr_4 [i_0] [i_1] [i_3]), var_10));
                        }
                    }
                }
                var_19 = var_12;
                arr_11 [i_0] = ((((((var_10 % var_13) ? var_4 : (((var_9 ? var_3 : var_5)))))) ? var_5 : (((((((arr_6 [i_1] [i_1] [i_1] [i_1]) == var_12)))) ^ var_4))));
            }
        }
    }
    #pragma endscop
}
