/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 += (arr_1 [i_0]);
        var_12 = var_2;
        var_13 += 101;
        var_14 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = var_3;
        var_16 = 17182040503429641933;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 += ((101 != -124) ? ((((((((-9223372036854775807 - 1) ? (arr_2 [i_2]) : 65116))) || (var_9 - 75))))) : var_8);
        var_18 = ((~(0 >= -9)));
        arr_6 [i_2] = (min(((0 ? ((max((arr_1 [20]), (arr_0 [i_2] [i_2])))) : ((max(125, 0))))), (max(((var_7 ? 127 : 0)), -123))));
    }
    var_19 &= (max(((var_0 ? (32768 != 4224589442510544335) : (min(var_0, var_3)))), var_9));
    #pragma endscop
}
