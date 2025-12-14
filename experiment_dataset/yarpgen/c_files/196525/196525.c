/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_19 = (min(var_19, (arr_0 [i_0])));
        var_20 -= (((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 3]) : 54239)) * (((((arr_1 [i_0 - 2]) || (arr_1 [i_0 - 1])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (((!var_18) ^ (arr_7 [i_1] [i_1])));
        var_21 = (~-1970458176285496609);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_22 = (((((~(-1970458176285496608 / 1970458176285496600)))) || (((~(arr_7 [i_2] [i_2]))))));
        var_23 = (min(var_23, (((!(((~(arr_4 [i_2] [i_2])))))))));
        var_24 = ((!((4031951257884166703 > (((~(arr_10 [i_2] [i_2]))))))));
        var_25 = (min(var_25, ((((var_13 | var_9) ^ ((min((arr_7 [i_2] [i_2]), (arr_4 [i_2] [i_2])))))))));
    }
    var_26 = -var_17;
    var_27 = (max(var_27, ((((((~((max(18039, 61)))))) ? (-1970458176285496612 < 137) : ((-1970458176285496609 >> (((max(11487766241324603108, 17)) - 11487766241324603082)))))))));
    var_28 = var_6;
    #pragma endscop
}
