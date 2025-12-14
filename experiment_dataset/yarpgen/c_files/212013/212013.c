/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] = (((5 * 0) / ((((max((arr_8 [i_0] [i_0] [i_1] [i_2] [i_3]), var_11))) ? ((min(var_4, (arr_7 [i_3] [i_2] [i_1] [i_0])))) : ((min(var_6, (arr_0 [i_0] [i_1]))))))));
                            var_12 = (min(var_12, ((((((arr_1 [4]) | (((max((arr_8 [i_0] [i_1] [i_2] [6] [i_0]), var_4)))))) & var_2)))));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = (!var_5);
            }
        }
    }
    var_13 += var_7;
    var_14 = var_9;
    #pragma endscop
}
