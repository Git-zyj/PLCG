/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_12 &= 17;

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_13 = (arr_2 [i_1]);
                    var_14 = (min(30880, var_5));
                    var_15 = 5563713844721355200;
                    var_16 = var_5;
                }
            }
        }
    }
    var_17 = 179;
    #pragma endscop
}
