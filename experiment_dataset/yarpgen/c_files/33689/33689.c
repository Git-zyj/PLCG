/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((min((((234 ? (arr_3 [i_0] [i_0]) : 480))), ((1 ? -9223372036854775788 : 0)))) < (((arr_4 [i_0 - 1]) ? (((min(var_5, (arr_2 [i_1] [i_1]))))) : var_12))));
                var_16 = ((((min((((var_10 + 9223372036854775807) << 0)), (~var_7)))) < ((21 ? (min((arr_4 [i_0]), var_14)) : (max(var_4, (arr_4 [i_0])))))));
                var_17 = ((((min((arr_0 [i_0 - 1]), -105))) & (arr_0 [i_0 - 1])));
            }
        }
    }
    var_18 = (-2147483647 - 1);
    var_19 = ((~(((((1 >> (var_12 + 5073827576574541835)))) ? 2097151 : 170))));
    var_20 = (min(var_20, ((min(-var_6, ((1 ? var_6 : (max(4294967295, 11279716548896026717)))))))));
    #pragma endscop
}
