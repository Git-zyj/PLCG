/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 -= ((-(1 - var_8)));
                    var_19 = (arr_5 [i_0]);
                }
            }
        }
    }
    var_20 = ((var_1 ^ ((-((8388096 ? 1 : 0))))));
    var_21 = (min((max(((min(var_5, var_5))), -25099)), var_8));
    #pragma endscop
}
