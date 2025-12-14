/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = min(((var_2 | (arr_1 [1]))), (arr_0 [i_0] [i_0 - 1]));
        arr_2 [i_0] = (2046161994 ? 0 : -2046162003);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_12 |= ((3840959674769252017 >> (((((-2860095567227722186 ^ 873) ? ((var_4 ? (arr_1 [i_1]) : 2046161994)) : (((var_5 ? var_4 : var_3))))) - 3283060922408263603))));
        arr_6 [i_1 + 2] = ((((((arr_0 [i_1 + 1] [i_1 + 1]) * 2046161994))) ? -413504750 : (((7721437773428002042 ? var_5 : var_5)))));
        var_13 = (min(var_13, ((((((~(arr_5 [i_1 - 2])))) ? ((((((arr_5 [9]) ? 40785 : (arr_0 [3] [i_1 + 2])))) ? (max(2860095567227722185, 856)) : ((2662158957020616442 ? 41350 : -6269519362641550037)))) : 64680)))));
        var_14 = ((4294836224 ? ((((!((min((arr_1 [i_1]), 3197393859))))))) : (min((((6 ? var_3 : var_0))), (arr_1 [i_1])))));
    }
    var_15 *= ((((var_3 ? var_0 : (var_4 + var_3))) <= var_7));
    #pragma endscop
}
