/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((min(236, var_6)))) != (!var_9))))));
    var_16 = (var_9 * var_1);
    var_17 *= ((max((!32700), var_2)) == (max(((127 ? var_0 : var_3)), var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = ((((((var_12 / (arr_7 [i_0 - 3] [10] [1] [3] [i_2] [10]))))) ^ (~var_4)));
                                arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] [i_2] = ((-(((var_5 <= (var_5 - var_3))))));
                                var_19 += var_3;
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (((((((186 == (arr_0 [i_1]))))) * (17203436161756520073 == 110))))));
            }
        }
    }
    #pragma endscop
}
