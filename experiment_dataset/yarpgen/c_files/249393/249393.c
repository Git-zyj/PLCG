/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max(1, (max((arr_0 [i_0 + 1]), (arr_2 [16]))))))));
                arr_6 [i_0] = (arr_4 [i_0]);
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
