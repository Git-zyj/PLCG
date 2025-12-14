/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_10;
    var_13 = (min(var_13, 28));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (min(((((var_0 && 0) > (((var_4 + 2147483647) >> 28))))), (arr_3 [i_0] [i_1 + 3])));
                var_15 = (((min(var_6, (arr_3 [i_0] [i_0]))) + var_9));
            }
        }
    }
    var_16 = var_10;
    var_17 = (max(var_17, 7));
    #pragma endscop
}
