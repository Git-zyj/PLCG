/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_9;
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((min((arr_3 [i_1 + 3]), (arr_3 [i_1 + 1])))) ? (~3863) : ((4014103873 | (arr_1 [i_1 + 1])))));
                var_17 = (max(var_17, (((!((max(138, 32971))))))));
                var_18 = (max(var_18, var_5));
            }
        }
    }
    #pragma endscop
}
