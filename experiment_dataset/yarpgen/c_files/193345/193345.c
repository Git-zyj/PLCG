/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((~var_12), var_3))) ? (((var_2 / var_5) ? var_3 : ((4294967295 ? var_8 : var_7)))) : (((!var_0) ? (936859964 < 33554432) : ((var_0 ? 33554432 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (((arr_2 [i_0 + 2] [i_0 + 2]) >> (!var_4)));
                var_15 &= ((arr_2 [i_0 + 1] [i_0 + 4]) >= (arr_0 [i_0 + 2]));
                arr_4 [i_0] [i_1] [1] = ((+(((arr_3 [i_0 + 1] [i_0 + 2] [i_1]) ? (arr_2 [i_0 + 1] [i_1]) : (arr_2 [i_1] [i_0 - 1])))));
                var_16 = (((((((1496124364 >> (1496124379 - 1496124350))) == ((1 ? 4261412864 : 9223372036854775807)))))));
            }
        }
    }
    var_17 &= ((((max(var_12, (var_11 - 3603711804)))) ? (var_0 <= var_6) : var_0));
    var_18 = var_0;
    var_19 = var_12;
    #pragma endscop
}
