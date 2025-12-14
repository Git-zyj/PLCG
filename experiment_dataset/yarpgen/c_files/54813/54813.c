/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (-7106872802410520679 & 15024);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = ((((((var_6 ? 6 : -28)))) ? ((((min(var_7, 1027098257325766132))))) : (max((min(var_9, var_2)), (arr_1 [i_0])))));
        arr_2 [i_0] = (-(6 + 13));
        arr_3 [i_0] [i_0] = ((~((max((arr_0 [i_0] [i_0]), var_10)))));
        arr_4 [9] = (min((arr_0 [i_0] [i_0]), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((~(20677 >= var_11))))));
        var_18 = ((-(arr_0 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = (((arr_1 [i_1]) && ((((arr_0 [i_1] [i_1]) ? 1046411250754388819 : var_7)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (((((230 != 7559) + (((18446744073709551615 >= (arr_6 [7])))))) == (~var_10)));
        var_19 = (max((1 != -40), ((((((arr_7 [i_2] [i_2]) ? (arr_5 [i_2]) : 5591))) ? (59962 != 182) : -19374))));
        var_20 = (max(1198589096, (arr_10 [i_2] [i_2])));
    }
    #pragma endscop
}
