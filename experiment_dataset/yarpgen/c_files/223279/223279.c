/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_0, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (max((((arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? 6 : (arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 2]))), (arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])));
                    var_16 = ((((max((((arr_5 [i_1] [i_1] [i_1]) + 203565035)), var_12))) ? var_7 : (!var_9)));
                    arr_8 [i_1] = (min(((((arr_6 [i_2 + 1] [i_2 - 1]) < (arr_6 [i_2 + 2] [i_2 - 1])))), (((arr_6 [i_2 + 1] [i_2 + 1]) ? (arr_6 [i_2 - 1] [i_2 + 2]) : 51))));
                }
            }
        }
    }
    #pragma endscop
}
