/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_3 ? (((min(103, -828677687)) & var_7)) : ((1 ? ((var_4 >> (-422841596 + 422841596))) : (var_9 | 144))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_12 = (max((max((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1] [i_0]))), 3265201090));
        var_13 = (max(var_13, ((((((((-3437087519304238783 || (arr_2 [i_0 - 1] [i_0]))) ? var_10 : (((13287534539230515487 ? (arr_1 [i_0] [i_0]) : (arr_1 [9] [i_0]))))))) || ((((arr_0 [3]) ? (((var_2 ? 0 : -1))) : ((var_6 ? var_10 : (arr_0 [i_0])))))))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_14 = (min((((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 2]) : var_10)), ((max((arr_2 [i_1] [i_1]), (arr_1 [i_1] [i_1 - 2]))))));
        var_15 = (min(var_15, (((((min(1, -4777916141022299492))) ? ((((arr_4 [i_1]) && (arr_2 [21] [i_1 - 2])))) : ((((arr_4 [1]) && (arr_3 [4])))))))));
    }
    var_16 = ((-var_4 ^ (max(1278131744757816453, -10376))));
    #pragma endscop
}
