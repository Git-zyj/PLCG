/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [4] = (min((-15316 || 14995239087677593864), (arr_0 [i_0])));
                var_20 ^= (arr_2 [i_1 + 1]);
            }
        }
    }
    var_21 = (min((max(var_16, (var_18 > var_2))), (((((17863887805009250363 ? 17050478035328715764 : 3451504986031957752)) != var_0)))));
    #pragma endscop
}
