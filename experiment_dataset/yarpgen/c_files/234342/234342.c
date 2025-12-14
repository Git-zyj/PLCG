/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(8420457902098372576, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = -var_19;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_22 = var_16;
                    arr_9 [i_0] [i_0] [10] [14] &= (--5918735048109373549);
                    var_23 = -1931822863;
                }
                var_24 |= ((!(arr_8 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_25 |= (max(var_12, ((~(!var_3)))));
    var_26 = var_16;
    #pragma endscop
}
