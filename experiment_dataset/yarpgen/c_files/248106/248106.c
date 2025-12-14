/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((1 & (arr_1 [i_0 + 2])))) ? (((var_8 * (arr_1 [i_0])))) : (((arr_0 [i_0] [i_0]) ? -5655970397992731726 : (arr_0 [i_0] [i_0])))))) ? (((((((arr_0 [i_0 - 4] [i_0 - 1]) ? (arr_2 [8] [i_0]) : (arr_2 [i_0] [i_0])))) != ((3032216756805675649 & (arr_1 [i_0])))))) : (arr_1 [i_0 - 2])));
        var_16 *= ((((max(((5 ? 15937 : (arr_2 [i_0 + 2] [i_0 + 2]))), var_1))) ? (((+(((arr_2 [i_0 + 2] [i_0]) ? 23603 : 10))))) : -5655970397992731710));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = (min(((((arr_2 [i_1] [i_1]) ? 38207 : ((min(var_8, (arr_1 [9]))))))), (min(((-(arr_4 [i_1] [i_1]))), (min(18446744073709551615, (arr_2 [i_1] [i_1])))))));
        var_18 = 5569589969564331048;
        arr_6 [0] [0] |= ((!(arr_5 [2])));
        var_19 = ((((min(((-5655970397992731740 ? 3547687538 : 65535)), (((var_10 <= (arr_2 [i_1] [i_1]))))))) ? ((var_5 ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_20 *= ((+((((arr_8 [i_2 - 1]) <= (arr_8 [i_2 - 1]))))));
        var_21 *= (arr_7 [i_2]);
    }
    var_22 = var_4;
    var_23 = ((!((max((-4655658142794726460 != var_9), -9855902310236829395)))));
    var_24 = ((((((15917 ? 17052679187509562372 : var_1)))) ? ((((var_1 ? 17 : 1)))) : ((((min(-6226297759053246141, 4294967276)) <= (var_7 >= var_8))))));
    #pragma endscop
}
