/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((var_9 ^ var_10) - (arr_2 [i_0] [i_0] [i_0]))) ^ (45565 ^ 19968)));
                var_16 = (((((arr_2 [i_0] [i_1] [i_1]) ^ ((120 ? var_6 : var_8)))) / ((var_6 ? (arr_2 [i_1] [i_1] [i_0]) : (arr_3 [i_0] [i_1])))));
                var_17 |= ((((((arr_1 [i_0]) ? ((((!(arr_0 [i_0]))))) : (arr_0 [i_0])))) ? (((arr_2 [i_1] [i_1] [i_0]) ^ (((var_8 + 2147483647) >> (-4483017048923936349 + 4483017048923936368))))) : var_0));
                var_18 = (max(var_18, (((((var_10 ? var_1 : (arr_1 [i_0]))) | ((max(19972, (arr_3 [i_1] [i_1])))))))));
                var_19 = (max(-1, 9223372036854775807));
            }
        }
    }
    var_20 = (~45565);
    var_21 = var_7;
    #pragma endscop
}
