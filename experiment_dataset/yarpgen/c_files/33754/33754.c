/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((max(-103, 18446744073709551615)) != 3731944049)))) ^ (max(var_0, var_5))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = ((~(min((61572651155456 || 3), (((arr_0 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) + var_16));
        arr_4 [i_0] = (-5787719329700730603 != var_0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 = var_1;
        var_23 = ((!(((arr_5 [i_1] [i_1]) <= var_3))));
        var_24 = ((-(~-14586341)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((((max((((arr_8 [i_2] [i_2]) >= var_12)), (var_11 > var_1))))) % 12100946464489051784);
        var_25 = (((((31 - 18446744073709551608) ? 5787719329700730577 : (1182381568 & -53))) >> (var_7 - 5522834997040863785)));
    }
    var_26 = (max(((min(var_17, 1))), 54043195528445952));
    var_27 = 6156974006654754187;
    #pragma endscop
}
