/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(26, var_11))) ? -1507436742 : var_2))) ? var_0 : var_11));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((min((var_4 % 10634951942811889439), (arr_1 [i_0 - 2]))) - ((((arr_0 [i_0 - 2] [12]) ? (min(var_15, -7287269435946775117)) : (~var_11))))));
        arr_3 [i_0] = var_14;
        var_17 += var_9;
        arr_4 [i_0] = ((-7287269435946775117 ? -65 : 48));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_18 += ((((var_2 != (arr_5 [i_1 - 1]))) ? (min(((var_12 ? 1397878423 : 7287269435946775117)), (arr_5 [i_1 + 3]))) : (((min((!var_14), var_6))))));
        var_19 = (max(var_19, (((((arr_6 [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 + 1])))))));
        var_20 = 10209856576244403465;
        var_21 = (max(var_10, ((((arr_6 [i_1 + 1] [i_1 + 1]) == (arr_6 [i_1 + 2] [i_1 + 1]))))));
        arr_7 [i_1] = (max((max(91, (min(1900491889640095687, 127)))), ((max((-24914 == 55685), ((var_10 ? var_11 : 1)))))));
    }
    #pragma endscop
}
