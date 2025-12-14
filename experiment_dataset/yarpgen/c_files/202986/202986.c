/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1625479846 != ((0 ? var_4 : ((9223372036854775796 ? var_4 : var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0] = var_6;
                    arr_7 [i_0] [i_1] [i_2] |= (((((((-23 != (arr_0 [i_0] [i_2]))) ? (var_13 != var_2) : 17884))) ? (-17885 & 21968) : var_14));
                }
            }
        }
    }
    var_16 &= ((var_8 ? var_5 : var_4));
    #pragma endscop
}
