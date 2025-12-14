/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_1, 0))) && var_8));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = ((((((((var_6 ? var_5 : var_3))) ? (!32085) : ((max(var_1, var_1)))))) || ((((arr_3 [i_0 - 4]) ? (((~(arr_11 [i_1] [10])))) : -var_0)))));
                                var_12 = (min(var_12, ((max(((-((var_5 ? var_5 : (arr_4 [i_0] [i_1] [1]))))), (arr_0 [i_0 + 1] [1]))))));
                                arr_13 [i_1] [9] [i_2] [i_3] [i_3] = (var_5 >= ((max(-32105, var_5))));
                                arr_14 [i_4] [i_1 + 1] [i_1] [i_1 + 1] [i_0] = (((max(5588542950722474411, 3673231908)) >> ((8409494767415939426 ? 15 : 0))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (((max((((arr_12 [i_0] [i_0] [i_0] [i_2]) ? (arr_6 [i_2 + 2]) : (arr_5 [i_0 - 1] [i_1]))), (arr_9 [i_0] [i_1] [i_1 + 1] [i_2]))) / (((arr_12 [i_2] [i_2 - 1] [i_2] [i_2]) | var_6))));
                }
            }
        }
    }
    #pragma endscop
}
