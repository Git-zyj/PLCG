/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(!21392)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] = var_9;
                    var_14 *= (min(((var_10 ? (((arr_6 [i_0]) / 3)) : 7680)), ((((163 && 58) && ((max((arr_8 [i_0]), 3882399224))))))));
                    var_15 = (max(var_15, (((((!((((arr_3 [i_0]) & 4294967292))))) ? (arr_3 [i_0]) : (var_9 <= 30335))))));
                }
            }
        }
    }
    #pragma endscop
}
