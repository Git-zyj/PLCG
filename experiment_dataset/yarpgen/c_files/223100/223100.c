/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(var_0 > var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (i_0 % 2 == zero) ? ((max(((((1 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1 - 1]))) - 1040187392)), (arr_3 [i_1 - 1] [i_0])))) : ((max(((((1 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1 - 1]))) + 1040187392)), (arr_3 [i_1 - 1] [i_0]))));
                var_14 = (((((((max(var_5, (arr_4 [i_0] [i_0] [i_0])))) ? (arr_2 [i_1 - 1] [i_1 - 1]) : ((max((arr_2 [i_0] [i_0]), (arr_4 [21] [i_1] [i_0]))))))) ? (min(-1040187374, (arr_1 [i_0]))) : ((1040187392 / (arr_2 [i_1] [i_1 - 1])))));
                arr_6 [i_0] = (((-5444909245424311083 - (min((arr_0 [i_1 - 1]), -9223372036854775800)))));
            }
        }
    }
    var_15 = ((var_3 ? (((((var_12 ? 1040187392 : 206))) ? ((var_3 ? var_3 : var_7)) : (((var_5 ? var_12 : -1040187401))))) : var_4));
    #pragma endscop
}
