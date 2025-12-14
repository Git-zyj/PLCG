/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = var_16;
                var_19 = ((((max((arr_2 [i_1] [i_0] [i_0]), (~var_12)))) || (((16383 << ((((((139 ? var_14 : 11655)) + 9205727672038880694)) - 8)))))));
            }
        }
    }
    var_20 = var_11;
    var_21 ^= (max((!-1), var_17));
    #pragma endscop
}
