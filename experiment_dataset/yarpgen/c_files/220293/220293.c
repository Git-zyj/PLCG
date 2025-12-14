/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 22532;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max(var_14, var_5));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] = (min((min((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]), (arr_0 [i_1 - 2]))), (arr_0 [i_1 - 1])));
                            arr_15 [i_0] [i_1 - 2] [i_2] [i_2] = (arr_10 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_15 *= ((-(((arr_4 [i_0] [i_0] [i_1]) ? (((var_4 ? 37620 : (arr_10 [i_1] [i_1] [i_0])))) : (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_0 [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
