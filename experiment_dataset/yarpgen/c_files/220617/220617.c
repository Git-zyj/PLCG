/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_9;
    var_14 = var_4;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(var_15, ((min((((+(((arr_0 [i_0 - 4]) ? (arr_2 [10] [i_0]) : 1))))), (min((!var_4), ((var_6 ? 251 : (arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((((((((-(arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((((arr_0 [i_0]) > (arr_0 [i_0])))))))) ? -var_11 : (!-67)));
        var_16 *= 1;
    }
    var_17 = ((((!((min(-8196732230998933993, var_8))))) ? var_11 : var_2));
    #pragma endscop
}
