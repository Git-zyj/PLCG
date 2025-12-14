/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = ((94 ? var_13 : ((8698 ? var_2 : (var_3 - 122)))));
    var_16 = var_7;
    var_17 = (max(var_17, ((min(var_0, ((((((62208 ? var_7 : var_3))) ? (((-3046313146727147233 + 9223372036854775807) << (var_9 - 175))) : var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 ^= ((+(((arr_6 [6] [i_1]) & (((arr_4 [i_0] [8]) ? 8698 : 2833))))));
                var_19 = (((((30567 ? (arr_0 [0] [1]) : (arr_0 [i_0] [i_1])))) ? (arr_5 [i_0] [i_0] [i_1]) : (((!(arr_0 [i_0] [8]))))));
                var_20 -= (arr_1 [10] [i_0]);
            }
        }
    }
    #pragma endscop
}
