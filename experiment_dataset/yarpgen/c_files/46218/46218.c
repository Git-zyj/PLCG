/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (min((arr_3 [i_1 - 1] [i_1] [i_2 + 1]), (((arr_2 [i_1 - 1] [i_1 - 2]) - (arr_3 [i_1 + 1] [i_1] [i_2 - 1])))));
                    var_18 ^= ((-((((arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 - 1]) <= 1795070081)))));
                    var_19 = (!-var_8);
                }
            }
        }
    }
    #pragma endscop
}
