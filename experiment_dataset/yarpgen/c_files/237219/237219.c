/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(var_8, (((!(var_0 ^ var_13)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((var_3 ? var_2 : (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (((0 || (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((!((max(var_3, ((((arr_1 [i_0]) >> (var_9 - 34)))))))));
        arr_3 [i_0] = (arr_0 [i_0]);
        var_16 = (~var_11);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [4] = ((((!(arr_5 [i_1] [i_1]))) && (arr_6 [i_1] [i_1])));
        arr_9 [i_1] = (((arr_7 [i_1]) | (arr_5 [i_1] [i_1])));
        arr_10 [i_1] = (arr_4 [i_1]);
        var_17 *= (((((-(min(-1774748034899028805, 1774748034899028805))))) ? -var_10 : ((var_6 ? 7 : (arr_6 [i_1] [i_1])))));
    }
    var_18 = (max(var_18, ((((((var_9 > (((var_1 + 9223372036854775807) << (((var_1 + 416132333504693786) - 46)))))))) % var_7))));
    var_19 &= (max(((171 == ((3729087518 ? var_6 : var_9)))), ((!(((10842218440703758837 ? 23 : var_13)))))));
    #pragma endscop
}
