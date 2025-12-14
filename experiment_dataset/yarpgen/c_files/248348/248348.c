/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max(((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((((((arr_3 [i_0] [i_1] [1]) << (var_8 - 1985860017460547111)))) ? (min(var_9, 19659)) : (arr_2 [i_0] [i_0] [0]))))))));
                arr_4 [i_0] |= ((+((min((arr_2 [i_1] [i_0] [i_0]), (max(-1, (arr_2 [1] [i_0] [i_0]))))))));
            }
        }
    }
    var_13 = (max(((max(((var_0 ? var_7 : var_8)), (var_6 > var_5)))), ((var_7 ? (min(var_10, 58067)) : var_5))));
    #pragma endscop
}
