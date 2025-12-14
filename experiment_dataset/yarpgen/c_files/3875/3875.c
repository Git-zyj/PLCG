/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (max(156, ((((max(30807, var_5))) - (arr_1 [i_0])))));
        var_20 = (max(var_20, (((((!(var_2 % var_13))) ? ((((max(156, 99))) ? ((18446744073709551615 ? (arr_0 [i_0]) : 0)) : ((max(var_4, (arr_1 [i_0])))))) : (((((156 >= (-2147483647 - 1)))))))))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_21 = 32767;
        arr_7 [i_1] [i_1] = ((-(((!(arr_6 [i_1] [3]))))));
        var_22 |= 2978089851239757108;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [15] [i_2] = ((var_16 ? (arr_9 [i_2] [i_2]) : ((((arr_8 [i_2] [i_2]) + (arr_9 [i_2] [i_2]))))));
        var_23 = (max((((arr_9 [i_2] [i_2]) | var_13)), (arr_9 [i_2] [i_2])));
    }
    var_24 = -11;
    #pragma endscop
}
