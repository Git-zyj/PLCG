/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (var_3 > var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_1] [13] [i_1] [2] = var_2;
                            var_13 = (min(var_13, ((((((var_4 ? var_3 : var_10))) ? (((arr_4 [i_2] [i_2]) ? (arr_4 [i_1] [0]) : (arr_4 [3] [i_0]))) : ((((var_6 <= (arr_4 [i_0] [i_1]))))))))));
                            arr_9 [6] [i_1] [i_2] [i_1] = ((!((((min((arr_4 [i_1] [1]), (arr_5 [i_0] [0] [i_2] [7]))) + (((max(var_9, var_1)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
