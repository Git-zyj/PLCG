/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = (min(var_15, (((min((arr_0 [i_0 + 3]), (arr_0 [i_0 - 2]))) | (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 2])))))));
        arr_3 [i_0] = -1;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 = ((-11105 - (max((!var_7), var_7))));
        arr_7 [12] [7] = (((((~(((arr_5 [i_1] [i_1]) ^ (arr_0 [i_1])))))) && (((var_7 ? var_6 : -1556997966)))));
        var_17 &= 18013848753668096;
        var_18 = (max(var_18, ((((((-(65535 || -1)))) ^ -var_2)))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [1] [i_2] = 4315162569461991228;
        arr_12 [i_2] &= (min((((arr_0 [i_2]) << ((((max(0, 254))) - 253)))), ((-(!-1556997983)))));
    }
    var_19 = (((-1 > 18446744073709551615) | ((~((-7012328506821163936 ? 1211412240 : 15))))));
    var_20 = var_0;
    var_21 = (min(var_21, var_14));
    #pragma endscop
}
