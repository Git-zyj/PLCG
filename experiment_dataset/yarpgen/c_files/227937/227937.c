/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = ((var_13 ? (arr_0 [i_0] [i_0]) : var_0));
        arr_2 [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = (((!41518) != (max(((-(arr_3 [i_1] [i_2]))), ((244 ? 100 : -32764))))));
            arr_9 [i_2] = (((((((((arr_4 [i_1] [i_2]) ? 27 : (arr_5 [i_1])))) ? (arr_5 [i_2]) : -234))) ? (arr_7 [14] [14] [14]) : ((17808213437333169997 ? (arr_7 [i_1] [i_2] [i_1]) : (arr_7 [i_1] [i_2] [i_1])))));
        }
        arr_10 [1] = -19488;
        var_16 |= (((((((15522 ? (arr_5 [i_1]) : 50011))) ? ((241 ? 114 : 122)) : 63)) + -35));
    }
    var_17 *= var_2;
    var_18 = (max(var_10, (min((!-121), ((-100 ? var_1 : var_1))))));
    #pragma endscop
}
