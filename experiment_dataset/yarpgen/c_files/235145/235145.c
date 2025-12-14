/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_18 |= ((-896850196916745537 ? 5325032293258674066 : -896850196916745537));
                var_19 += (((((((arr_4 [i_0 - 1]) + 2147483647)) << (((((arr_4 [i_0 - 1]) + 17827)) - 31)))) | (((var_10 < 1) ? (arr_5 [i_0] [1]) : (arr_3 [i_0 + 1])))));
                var_20 = (min(var_20, (((((-(((arr_5 [i_0] [i_0]) ? var_6 : 82)))) <= (max((!var_5), ((-(arr_0 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
