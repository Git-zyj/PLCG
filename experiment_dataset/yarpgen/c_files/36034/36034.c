/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max((max(var_14, var_8)), ((min(124, 120)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((((arr_0 [i_0]) | (arr_0 [i_0])))) ? (max(((max(var_10, -991835865))), (max(124, (arr_5 [i_1]))))) : (((887960403 % (((min(152, var_14)))))))));
                arr_6 [i_0 - 1] [i_0] [i_0] = (!76);
            }
        }
    }
    #pragma endscop
}
