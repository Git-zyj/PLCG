/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [1] [1] [1] = (((((((max((arr_2 [0] [0] [0]), var_10))) ? var_7 : (max(-1853682775, var_0))))) ? 1853682761 : ((((var_0 == 1853682761) < ((var_6 / (arr_1 [1]))))))));
                arr_5 [9] [i_1] [i_0] = (((((arr_0 [i_0]) + 2147483647)) >> ((((~(arr_1 [i_1]))) + 143))));
                var_11 = max((((((arr_0 [i_1]) % (arr_1 [13]))))), ((var_4 ? ((~(arr_0 [2]))) : (((arr_3 [14] [14]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [9] [i_0] [i_0]))))));
                var_12 = (arr_0 [8]);
            }
        }
    }
    var_13 = (((var_3 ? var_5 : var_2)));
    #pragma endscop
}
