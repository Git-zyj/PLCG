/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((~((1 ? (arr_0 [i_0]) : (arr_2 [i_1] [i_0])))))) ? (((arr_3 [i_0] [i_0]) ? 1 : (arr_2 [i_0] [i_0]))) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
                var_20 = ((arr_0 [i_1]) / ((1 ? -2166309005568995520 : -13532)));
                var_21 = (((((arr_0 [i_0]) * (arr_0 [i_0])))) ? ((-1 ? (-9223372036854775807 - 1) : 101)) : (((arr_0 [i_0]) & 9223372036854775793)));
                var_22 = (min(((((1 < (arr_3 [i_0] [i_0]))) ? ((((arr_1 [i_0]) ? 30 : 237))) : (arr_3 [i_0] [i_1]))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1])))));
            }
        }
    }
    #pragma endscop
}
