/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(((((arr_1 [i_0 - 1]) % (arr_1 [i_0 + 1])))), ((((arr_4 [i_1 - 4] [i_0 - 1] [6]) > (arr_3 [i_0] [19]))))));
                var_18 = min((max((17592186044416 & -17592186044432), (arr_1 [i_0 + 1]))), ((((max(var_16, 4611650834055299072)) < (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                var_19 -= ((min((arr_3 [i_3 - 2] [i_3 - 1]), (arr_3 [i_3 - 2] [i_3]))));
                arr_12 [i_2 - 4] [i_3] = var_3;
                arr_13 [i_2 - 4] [11] = var_7;
            }
        }
    }
    var_20 = var_16;
    var_21 = var_16;
    #pragma endscop
}
