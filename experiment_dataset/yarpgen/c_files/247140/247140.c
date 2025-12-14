/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = (((!30445) | ((96 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_22 = (((((((((1831192833 ? -108 : -108))) > (arr_1 [i_0] [i_0]))))) + (min((((arr_0 [i_0]) ? (arr_1 [i_0] [7]) : (arr_0 [5]))), (arr_0 [i_0])))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_23 |= ((183 > (~2586570717)));
        var_24 = (max(var_24, (arr_1 [i_1] [i_1])));
        var_25 = 520093696;
        arr_5 [i_1] [i_1] = -46975;
    }
    var_26 = (max(((max((!var_3), var_18))), var_11));
    var_27 |= ((((max(var_18, ((var_19 ? 109 : 0))))) ? var_18 : ((17415727151277987913 ? 1 : 177))));
    #pragma endscop
}
