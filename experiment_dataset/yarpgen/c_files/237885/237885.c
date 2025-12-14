/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 -= (arr_4 [i_0] [14]);
                    var_12 = (max(var_12, var_9));
                    var_13 ^= ((var_6 + ((-((var_4 ? var_10 : var_8))))));
                }
            }
        }
    }
    var_14 = (min(var_14, (((var_10 ^ ((((((-24081 ? 59061 : 114)) >= ((var_6 ? 65519 : var_0)))))))))));
    #pragma endscop
}
