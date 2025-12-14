/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((var_1 ? var_9 : var_8))) ? var_10 : -9007199254740736))) ? (((max(12877748212986670593, 1884797626)) * var_6)) : ((((-9007199254740760 ? 252 : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_0;
                var_15 = ((((((arr_3 [i_0 - 2]) ? ((1 ? var_3 : -9007199254740736)) : (var_3 - -9007199254740767)))) ? (((((59706 ? (arr_1 [7] [i_0 + 1]) : 1795468665))) % ((11798637129468743899 + (arr_1 [i_0] [i_1]))))) : (arr_1 [i_0 - 2] [i_0 - 2])));
                var_16 = ((-16980149280913446453 % (((((max((arr_4 [2] [6] [i_1]), -9007199254740760))) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 - 1]))))));
                var_17 &= ((!(5586925440485217830 << 1)));
            }
        }
    }
    #pragma endscop
}
