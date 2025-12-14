/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = ((!(6033891295290270699 + 4230269195)));
                var_14 = ((((max(((var_12 ? var_5 : 3123263853446851628)), (min(3123263853446851628, (arr_4 [i_1] [i_1] [i_0])))))) ? 10970305715350778098 : ((min((arr_2 [i_0 - 1]), (min(var_5, (arr_0 [i_1]))))))));
                arr_6 [i_1] [i_1] &= (min(var_10, ((-3123263853446851628 ? var_1 : (-9223372036854775807 - 1)))));
            }
        }
    }
    var_15 = (min(var_15, var_11));
    var_16 = var_6;
    var_17 = (max(9223372036854775807, var_10));
    #pragma endscop
}
