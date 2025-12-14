/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((~(arr_2 [i_0] [0]))))) | (arr_0 [i_1])));
                var_18 ^= var_11;
                arr_6 [i_0 - 1] [i_0 - 1] [i_1] = (max((arr_3 [i_0 + 1]), (((((((arr_4 [i_1]) != var_10)))) % var_10))));
                var_19 = ((!(((((((arr_4 [i_1 + 2]) % var_13))) ? (arr_2 [i_1 + 2] [i_1 - 1]) : ((max(var_11, var_1))))))));
            }
        }
    }
    #pragma endscop
}
