/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_2, var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_12 ^= (max((min((arr_3 [i_1 - 1]), -3671036308621886851)), (min((arr_3 [i_1 - 1]), 3671036308621886851))));
                var_13 = ((min(14261651171568140113, (((72 ? (arr_4 [i_0]) : 3671036308621886871))))) * 17123432666451757071);
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
