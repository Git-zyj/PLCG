/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((!var_0), (0 && 3663376705))))) <= var_7);
    var_18 = (min(var_18, ((max(((var_4 << (((min(1435993379, 402653184)) - 402653157)))), -53655)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : ((min((arr_2 [i_0]), (arr_0 [i_0]))))));
        var_19 = (min(var_19, ((max(((-(arr_1 [i_0]))), (((((arr_1 [i_0]) + 2147483647)) << (((arr_1 [i_0]) + 878905217)))))))));
        arr_4 [i_0] [i_0] |= (((min((631590591 ^ 402653179), ((max(32760, (arr_0 [i_0])))))) / (max((max(4294967284, (arr_1 [i_0]))), 56774))));
        var_20 = (min(var_20, (((((-17984 ? 32034 : 0)) >= (((!(-107 <= 1150115323)))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 *= ((!(((var_13 * (arr_1 [i_1]))))));
        var_22 = (max(var_22, ((((arr_2 [i_1]) && (arr_6 [i_1]))))));
        var_23 = 0;
        var_24 = ((16547796401109350128 ? ((max((arr_2 [i_1]), (arr_5 [i_1] [i_1])))) : ((((arr_6 [i_1]) >= (arr_2 [i_1]))))));
    }
    var_25 = (-(~4));
    var_26 = (min(var_26, ((min(var_11, var_14)))));
    #pragma endscop
}
