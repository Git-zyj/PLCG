/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-var_4 ? var_11 : var_5)), var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = (((((((((-1863342720 + 2147483647) << 0))) ? (~var_1) : (min(var_1, (arr_5 [i_0] [11])))))) ? (((min(var_11, (arr_8 [i_0] [i_1] [i_0] [i_0]))))) : (((var_9 ? var_10 : var_8)))));
                    var_16 ^= (arr_10 [i_1] [i_2]);
                    var_17 = (min((((arr_1 [i_0]) ? (arr_10 [i_0] [i_0]) : ((max(var_11, (arr_5 [2] [i_1])))))), (arr_10 [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = ((((((1863342719 | 1) ? (-127 - 1) : (max(1159571054598679624, 126))))) ? ((((((var_10 ? var_8 : var_3))) != ((var_8 ? var_1 : var_10))))) : (((var_9 ? var_0 : var_3)))));
    var_19 = (~var_8);
    #pragma endscop
}
