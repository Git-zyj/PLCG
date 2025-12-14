/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_10 ? var_5 : var_8)) | var_11)) >= ((1 - ((1 ? 1 : 9021141516835782832))))));
    var_13 = (min((~var_2), (min(-1, var_0))));
    var_14 = (min(var_6, ((((max(1, 18))) ? (1 || 5762888706936812005) : 98))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [4] [i_1] [i_2] = 9021141516835782852;
                    var_15 = arr_1 [6];
                    var_16 ^= 36;
                    var_17 = (min(var_17, (((~((~((max((arr_2 [i_2] [i_1]), 219))))))))));
                }
            }
        }
    }
    #pragma endscop
}
