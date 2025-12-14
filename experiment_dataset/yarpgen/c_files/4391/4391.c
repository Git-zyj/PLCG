/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(1640832792, 13161161945669048479))) ? -var_14 : var_18));
    var_21 -= (min(((min(114, var_15))), ((~(min(var_4, 5285582128040503137))))));
    var_22 &= (var_9 || -13161161945669048479);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_23 = (((arr_0 [i_0]) ? (((~((var_15 - (arr_0 [i_0])))))) : ((-(min(5285582128040503141, (arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = 5285582128040503137;
        var_24 = 13161161945669048478;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((~(arr_3 [i_1]))))));
        var_26 += (~var_15);
        var_27 = (max(var_27, (var_8 - 5285582128040503143)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = arr_4 [11];
        var_28 = -64;
        arr_10 [i_2] [i_2] = (((1 || (((-51 ? (arr_8 [2]) : 63))))));
        var_29 = ((-27 ? 2053658258064999511 : ((((((arr_4 [i_2]) ? 107 : (arr_4 [i_2])))) + (max(var_8, (arr_7 [i_2])))))));
    }
    #pragma endscop
}
