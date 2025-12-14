/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_12;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = var_0;
        var_19 = (arr_0 [i_0 + 3]);
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] [0] = (((((arr_2 [i_1 - 1] [i_1]) ? (arr_2 [i_1 - 1] [5]) : (arr_2 [i_1 - 1] [i_1]))) > (max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [8])))));
        arr_7 [i_1] [i_1] = (min((((!(arr_2 [i_1 - 1] [i_1])))), (arr_2 [i_1 - 1] [i_1])));
        var_20 *= (min((max(10444103669365924254, 10396923913971496287)), ((((arr_0 [i_1 - 2]) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 3]))))));
        arr_8 [i_1 - 1] = (arr_0 [i_1]);
    }
    #pragma endscop
}
