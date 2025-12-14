/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((58262 ? 40272 : 22));
    var_12 = 4168;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((arr_1 [i_0]) ? (245 & var_2) : (((129 && (arr_0 [7] [i_0])))))));
        arr_3 [i_0] [i_0] = max(((191 ? 3332 : 25724)), ((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [3] [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = (((7111388000376401845 > var_7) ? (((0 == (((161 ? (arr_1 [i_1]) : -124)))))) : 31));
        var_14 *= (var_1 / var_6);
    }
    var_15 = (max(65534, -3484371235889191652));
    var_16 = (max(var_16, var_3));
    #pragma endscop
}
