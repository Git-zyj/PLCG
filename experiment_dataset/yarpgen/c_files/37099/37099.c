/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+(((!var_3) ? 1225899711 : (min(var_10, var_0))))));
    var_13 = (max(var_13, var_9));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((-((7270 ? (arr_0 [i_0] [i_0]) : -7266))))) ? ((-(arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
        var_15 -= ((7280 ? ((~(arr_0 [i_0] [i_0]))) : ((((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : (~7270))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = (((((7270 ? 7250 : ((0 ? 9815064025575141374 : 1))))) ? (((-7270 ? ((9815064025575141375 ? (arr_4 [i_1]) : (arr_2 [i_1]))) : ((max(0, (arr_4 [i_1]))))))) : ((+((8631680048134410247 ? (arr_0 [i_1] [9]) : (arr_3 [i_1])))))));
        arr_7 [i_1] = (max((((-((min((arr_4 [i_1]), (arr_3 [i_1]))))))), (min((arr_4 [i_1]), (max(9815064025575141374, (arr_3 [i_1])))))));
        arr_8 [i_1] = ((-(arr_4 [i_1])));
    }
    #pragma endscop
}
