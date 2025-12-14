/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [4] [i_1] [i_2] [i_2] = ((((min((arr_5 [i_0 + 1]), ((max(213, var_0)))))) || (arr_4 [i_1 + 1] [i_1 + 1])));
                    arr_11 [i_0 - 2] [i_1] [i_0 - 1] [i_0 - 1] = (((((var_9 ? (arr_9 [i_1] [i_1 - 2] [i_1]) : (!11518)))) ? ((((-(arr_1 [i_0]))) & var_7)) : ((-(arr_1 [i_0 + 1])))));
                }
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
