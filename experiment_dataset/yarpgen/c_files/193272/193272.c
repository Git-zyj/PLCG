/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~(max(var_5, var_12))))) && (((var_4 ? var_1 : (var_2 == 2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (((var_8 | (arr_2 [i_0]))));
                var_18 = (-44 ? 16482425394630892798 : -1113683420);
                arr_7 [i_1] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
