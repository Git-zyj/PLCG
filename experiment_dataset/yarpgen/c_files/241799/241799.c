/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (min(var_12, ((((var_2 <= 135) * ((((min(133, 135))) | var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((arr_6 [i_0 - 4]) ? var_8 : 123))) ? (min((max(18446744073709551615, var_7)), (var_2 / 18446744073709551615))) : (arr_4 [i_0 - 4])))));
                    var_14 = (max(var_14, ((((((5 ? (arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3])))) ? ((+((0 ? (arr_4 [i_0]) : (arr_6 [i_0]))))) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0 + 1]))))));
                    var_15 = var_9;
                }
            }
        }
    }
    var_16 = (max(var_16, var_0));
    var_17 = (((4097929414 * 482216543) & var_5));
    #pragma endscop
}
