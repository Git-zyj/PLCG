/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(2023723104, 2))) ? (max(var_11, (min(var_1, -9)))) : (((min(-6712834407887829159, (var_3 == -14)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((37 > var_11) > -var_12))))));
                arr_4 [i_0 + 1] = 17474;
            }
        }
    }
    var_15 = ((((min(var_5, (var_1 < var_5)))) | (65531 || 202)));
    #pragma endscop
}
