/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min((((min((arr_3 [i_1]), (arr_2 [i_0] [i_1]))))), ((-(arr_2 [10] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 ^= var_13;
                            arr_9 [i_1] = (min((((~(min(2147483647, var_3))))), var_12));
                            var_15 = (min(var_15, (arr_7 [i_0] [i_0] [14] [14])));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((min((!var_0), (min(var_2, 0)))), (((5910 ? var_2 : var_8)))));
    var_17 = min((((-(20020342280928707 < var_8)))), var_11);
    #pragma endscop
}
