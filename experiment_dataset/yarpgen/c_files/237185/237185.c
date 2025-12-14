/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 += (((((!((max(var_5, var_9)))))) < (~-40)));
                var_14 -= ((+(min((arr_5 [i_1 - 1] [i_1 + 1] [i_0]), (min(1339, (arr_1 [i_0] [1])))))));
                var_15 = ((-((var_9 ? -477701437 : 477701445))));
            }
        }
    }
    var_16 = (max(var_16, (var_9 < var_9)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                var_17 = (max(var_17, 185));
                arr_11 [1] [i_2] [i_2] = ((max((((195 - (arr_4 [i_2])))), (var_4 * var_6))) / ((max(-32495, (var_10 + 477701437)))));
                var_18 += ((-(max((max((arr_6 [i_2] [i_2]), var_6)), (arr_6 [1] [4])))));
            }
        }
    }
    #pragma endscop
}
