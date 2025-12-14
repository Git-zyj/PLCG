/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min((!1), (8592 >= 5635584188968418796)));
                var_10 = ((!(((var_7 ? (min((arr_1 [i_1]), (arr_0 [i_1]))) : (arr_4 [i_0] [i_1]))))));
                arr_6 [i_1] [i_1] [11] = (min(((((((arr_4 [i_0] [i_0]) ? 2551054345 : (-2147483647 - 1)))) ? (!11202146096317992560) : (((22187 != (arr_3 [7])))))), (((-2147483647 - 1) ^ 22179))));
            }
        }
    }
    var_11 = var_6;
    #pragma endscop
}
