/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (1 && 18273847510485662806);
                    var_13 = (min(var_13, ((((arr_5 [i_0] [i_0] [i_1 - 3]) << 1)))));
                    var_14 += var_9;
                }
            }
        }
    }
    #pragma endscop
}
