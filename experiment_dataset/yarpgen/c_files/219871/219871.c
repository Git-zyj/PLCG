/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = ((~(max(var_9, (((arr_2 [i_0]) ^ (arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = ((((((arr_8 [i_0 - 1] [i_0]) / (arr_8 [i_0 + 1] [i_0])))) ? (((var_5 == (arr_5 [i_0])))) : var_8));
                                arr_11 [i_0] [i_0] [i_3] = (((max((max(var_1, (arr_4 [i_0]))), ((((arr_1 [i_0]) >= (arr_10 [i_4] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))))) < (((arr_6 [i_0 + 1] [i_1] [i_2] [i_3]) + ((var_6 ? 26 : (arr_4 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (((((max(var_1, var_8)))) ? var_8 : var_8));
    #pragma endscop
}
