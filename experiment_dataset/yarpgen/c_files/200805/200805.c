/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, (((var_2 ? ((max((arr_8 [i_2] [i_2] [i_2] [i_2 + 1]), var_8))) : ((((2057556921 ? var_2 : (arr_4 [15] [i_1]))))))))));
                    var_11 = (min((arr_3 [i_2]), (arr_9 [i_0] [14] [i_0])));
                }
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
