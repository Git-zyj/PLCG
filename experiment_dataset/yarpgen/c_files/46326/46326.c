/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_10 ? (((65535 > 1) * 98)) : ((-(var_5 + var_7)))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = ((3622514006 ? ((((!(arr_1 [i_0 - 2]))) ? ((-(arr_1 [i_0]))) : (!124))) : (((!((var_17 && (arr_1 [i_0]))))))));
        var_20 = (((!var_6) ^ ((-(arr_0 [i_0 + 2] [i_0 + 2])))));
        var_21 = (max(var_21, (((-(((((var_4 ? 0 : 229))) ? (var_8 & 2835853240) : ((-(arr_0 [10] [i_0]))))))))));
        var_22 = ((((939524096 >> (1102558010044183756 - 1102558010044183735))) | ((((((~(arr_0 [i_0] [i_0])))) ? (var_15 | var_12) : (((((arr_1 [i_0]) + 2147483647)) >> (((arr_1 [i_0 - 2]) + 30)))))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((arr_3 [i_1 + 2] [i_1]) < (arr_3 [i_1 + 2] [i_1]))))) / ((16422 ? 8191 : 4187748948)));
        arr_6 [i_1] [i_1] = ((-69 ? (((!(!193)))) : (((((9223372036854775807 ? (arr_3 [i_1] [i_1]) : -9223372036854775795)) == (~93))))));
        arr_7 [i_1] = (((arr_1 [i_1 + 2]) < (1 + 16383)));
    }
    #pragma endscop
}
