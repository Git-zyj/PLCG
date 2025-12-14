/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(((var_7 >> (var_4 - 31933))), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(var_5, (((arr_6 [i_0]) ^ (~939524096)))));
                arr_8 [i_0] = 939524096;
                var_18 = (max(var_18, ((((~var_10) != ((min(0, 213439422))))))));
            }
        }
    }
    #pragma endscop
}
