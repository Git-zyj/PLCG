/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((248 ? (-2147483647 - 1) : -1)))), (((((((min((-2147483647 - 1), 224)) + 2147483647)) + 2147483647)) >> (((19546 | 199) - 19677))))));
    var_21 = ((var_14 ^ -18446744073709551615) / var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] |= ((((11150663353260300988 ? (!var_12) : (arr_4 [i_1] [i_0]))) <= (((((((arr_0 [i_0]) ? var_12 : (arr_4 [i_1] [i_0]))) > (arr_0 [i_1])))))));
                var_22 = (max(var_22, ((max(((((max(1404259976663639838, 1920))) ? (min((arr_1 [i_1] [i_0]), var_3)) : ((max(var_15, var_15))))), var_19)))));
                var_23 -= ((((((max(var_15, 1927))) ? (((arr_3 [i_0] [i_1]) ? 2791535725202671686 : (arr_5 [17] [17] [i_1]))) : (arr_2 [i_0]))) & (min((((arr_4 [i_0] [13]) ^ -703129936726324214)), (arr_3 [i_0] [i_1])))));
                var_24 *= (var_1 ? ((((((491634329 / (arr_3 [i_1] [i_1])))) ? (arr_0 [i_0]) : (min(var_19, var_3))))) : ((5196859167298644414 >> (10674598715129778588 - 10674598715129778558))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_25 -= (((!18446744073709551615) || (arr_3 [6] [i_2])));
        arr_9 [i_2] = (((((arr_0 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_2]))) + (arr_2 [i_2])));
    }
    #pragma endscop
}
