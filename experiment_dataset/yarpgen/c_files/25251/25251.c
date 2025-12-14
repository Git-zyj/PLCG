/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (((((((var_8 != (arr_4 [i_0] [i_1 + 3] [i_1 + 3]))) ? (arr_2 [i_0 + 3]) : -1))) ? (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2]))) : (max((arr_3 [i_0] [i_1 + 3] [i_0]), ((var_12 ? (arr_0 [5]) : 103))))));
                arr_5 [i_1] = arr_2 [i_0 - 2];
                var_18 = ((((-6411015573148972302 ? -14 : 6411015573148972301)) == (arr_1 [i_0])));
            }
        }
    }
    var_19 &= (((var_8 + 2147483647) << ((((((1 ? 192 : (-2147483647 - 1))))) - 192))));
    #pragma endscop
}
