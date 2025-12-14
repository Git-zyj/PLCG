/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (((((arr_1 [i_1]) & -788209395)) % ((var_3 ^ (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_2] = (arr_1 [i_0]);
                    var_13 = (max(var_13, ((((min((arr_1 [i_0]), (((arr_4 [i_0] [i_0] [i_1] [i_2]) ? -28682033936192914 : var_5)))) * var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
