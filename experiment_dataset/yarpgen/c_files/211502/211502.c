/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (i_0 % 2 == 0) ? (((1 ? ((((((arr_5 [i_0] [i_0] [i_0]) << (((arr_0 [i_0]) - 5606804281708894919))))) ? var_13 : (((max((arr_5 [i_0] [i_0] [i_0]), 1)))))) : (arr_5 [i_2] [i_0] [i_2 - 1])))) : (((1 ? ((((((arr_5 [i_0] [i_0] [i_0]) << (((((arr_0 [i_0]) - 5606804281708894919)) - 16722972995607517550))))) ? var_13 : (((max((arr_5 [i_0] [i_0] [i_0]), 1)))))) : (arr_5 [i_2] [i_0] [i_2 - 1]))));
                    arr_8 [i_0] [2] [2] = arr_6 [7] [i_0] [i_2];
                    var_15 = -110;
                    var_16 = (max(18446744073709551615, 3431833118851220680));
                }
            }
        }
    }
    var_17 -= (285880351352228756 ? var_1 : var_13);
    var_18 = -14;
    #pragma endscop
}
