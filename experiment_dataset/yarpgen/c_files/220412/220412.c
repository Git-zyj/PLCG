/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 3] [i_0] [i_1] [i_2] = ((~(arr_1 [i_0 + 3] [i_2])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((-(((arr_5 [i_2] [i_1] [i_0 - 2]) ? 23253 : (!var_8)))));
                    var_13 = (min(var_13, (arr_6 [i_1] [i_2])));
                }
            }
        }
    }
    var_14 = var_12;
    var_15 = (((min(2147483647, 5812845157686940132)) * ((max(var_12, (min(var_9, var_0)))))));
    #pragma endscop
}
