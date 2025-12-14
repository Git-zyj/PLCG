/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((max(21, 76))) ? (max((((-9223372036854775807 - 1) / 226)), ((1 ? (arr_2 [i_0] [i_0]) : -2492424886703003384)))) : ((((31 * 21) ? var_0 : ((4294967295 ? var_7 : (arr_4 [i_1] [i_0] [i_0]))))))));
                var_12 = -16443;
                arr_6 [i_1] = min(42, ((((((arr_4 [i_0] [i_0] [i_0]) << (arr_1 [i_0] [i_1])))) % (((-9223372036854775807 - 1) / 2163)))));
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
