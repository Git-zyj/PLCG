/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((234 ? (max(588668892316607857, 32767)) : (((((((-32767 - 1) ? 16134824192366702650 : 3214406540))) ? 0 : var_0)))));
        var_20 |= (((((-(arr_0 [i_0] [i_0])))) ? (((((arr_1 [i_0]) || (arr_1 [i_0]))))) : 11849054407373975192));
        arr_4 [i_0] [i_0] = (((((17443248723779592606 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) || ((((var_1 ? (arr_0 [i_0] [2]) : (arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (var_3 ^ (arr_6 [i_1]));
        var_22 = (arr_5 [i_1]);
        var_23 *= (((arr_6 [i_1]) / (arr_6 [i_1])));
    }
    #pragma endscop
}
