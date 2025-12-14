/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_3;
    var_21 = (max((var_0 % var_2), var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(var_22, var_16));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] |= ((var_8 ? (!9673786859681716134) : (min((((arr_4 [i_1]) ? 6565931784936240017 : 10931060348552239007)), (arr_0 [i_1] [i_1])))));
        var_23 = (min(var_23, (((~(min(2061752931, -611464405)))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_24 ^= var_12;
        var_25 = (min(var_25, 2934005228877818718));
        var_26 = var_10;
        arr_8 [i_2] = (((((-(arr_4 [i_2])))) ? ((((arr_0 [4] [i_2]) ? (arr_4 [i_2]) : (arr_0 [i_2] [i_2])))) : (arr_3 [i_2])));
        var_27 = (min(var_27, var_0));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_28 = -1;
        var_29 = (max((min((min((arr_10 [i_3]), var_11)), (((var_17 ? (arr_12 [i_3] [i_3]) : -644630460))))), 1173544032090226680));
        var_30 = (max(var_30, (((((min((min(-6232197377526201535, var_18)), (max(var_12, (arr_11 [i_3])))))) ? (arr_10 [i_3 + 2]) : ((var_1 ? 28 : 127)))))));
        arr_13 [i_3 - 2] [i_3 + 1] = (max(var_1, (!var_10)));
    }
    #pragma endscop
}
