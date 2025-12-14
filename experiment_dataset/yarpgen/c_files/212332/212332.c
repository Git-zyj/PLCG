/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (41 << 0);
    var_17 = ((var_13 - ((min((247 && 0), 11)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 += ((~(1 | 1)));
        var_19 ^= ((((((arr_0 [i_0]) >> (59588 - 59571)))) ? ((var_13 ? var_14 : (arr_1 [i_0]))) : (max(522429275, ((var_8 ? var_3 : 548088766))))));
        var_20 = (max(var_20, 32767));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [i_2] |= (~28914);
                    var_21 = ((3772538020 ? ((max(((1 >> (var_9 + 102))), 0))) : (max(66, ((min(1, 1182026829)))))));
                }
            }
        }
    }
    #pragma endscop
}
