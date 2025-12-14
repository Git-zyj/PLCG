/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_2 ? var_10 : var_4)))) ? (((max(37, var_6)))) : (((((var_1 ? var_17 : -30))) ? ((var_6 ? 0 : 29)) : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= ((((((var_3 ? (arr_3 [i_1] [i_1]) : 1)) <= (((arr_1 [i_1 - 1]) ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0]))))) ? ((((arr_2 [i_1]) <= (arr_1 [i_0 + 1])))) : ((((((arr_1 [0]) & 32767)) <= (arr_3 [i_0] [i_1]))))));
                var_20 = (min((((((((arr_2 [i_0]) && (arr_0 [i_0])))) == (arr_1 [i_1])))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_11))));
            }
        }
    }
    #pragma endscop
}
