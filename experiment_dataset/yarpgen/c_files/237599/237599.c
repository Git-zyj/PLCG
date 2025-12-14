/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [1] [i_0] = (((arr_0 [i_0]) ? (((((((min((arr_0 [i_0]), (arr_4 [i_1])))) + 2147483647)) << (var_18 - 17823842315722063785)))) : ((~(arr_6 [0] [0] [i_0])))));
            arr_8 [i_0] [i_0] = (arr_5 [i_0] [1]);
        }
        var_20 += (min(1677597750, ((((((var_18 ? 3959 : var_17))) && (!50))))));
        var_21 = ((((max(((10514 ? var_19 : 55039)), ((0 ? 10525 : 10514))))) ^ (arr_5 [i_0] [9])));
    }
    var_22 = (~var_8);
    #pragma endscop
}
