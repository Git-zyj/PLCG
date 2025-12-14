/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? var_5 : ((min(var_4, var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((47863 && (arr_4 [i_2] [i_1] [i_0])))));
                    arr_7 [i_0] [i_1] [i_1] = var_1;
                    arr_8 [13] [13] [i_0] [i_0] = arr_6 [i_0] [i_1] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
