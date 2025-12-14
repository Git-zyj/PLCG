/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max((((~(arr_4 [i_1])))), ((((min(46287, (arr_0 [10])))) ? (var_4 & 59) : (((arr_1 [i_0]) ? (arr_3 [0]) : (arr_2 [i_0] [i_0]))))))))));
                var_12 = (!1983298356);
                arr_5 [2] |= ((((-5926219421006770741 + 9223372036854775807) >> (((((arr_1 [i_0]) + 5926219421006770741)) - 5926219421006787389)))));
                arr_6 [i_0] = (min(((min((arr_2 [i_0] [i_0]), (arr_4 [i_1])))), (min(((11910656996254823637 + (arr_3 [i_0]))), 5926219421006770741))));
            }
        }
    }
    var_13 = var_5;
    var_14 = ((!((min(2037029950127094911, (min(11910656996254823637, 64)))))));
    #pragma endscop
}
