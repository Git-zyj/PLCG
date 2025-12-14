/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((67108863 >> 3) / (((((min(var_13, var_7)))) - (-9223372036854775807 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_18 ^= ((50690 < (((arr_2 [i_0] [4]) - (arr_2 [i_0] [i_1 - 4])))));
                arr_8 [i_0] [i_0] = (min((((arr_4 [i_1 + 1] [i_1 - 4]) && (arr_4 [i_1 + 1] [i_1 - 2]))), (var_15 != var_15)));
            }
        }
    }
    #pragma endscop
}
