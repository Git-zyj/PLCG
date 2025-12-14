/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~3542970870);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = (max(((var_6 + (((arr_0 [i_0]) ? 0 : 2003053289)))), (((arr_0 [i_0]) ? (79 < 2355868739) : (-127 - 1)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (arr_0 [i_1]);
        var_20 += (min((arr_2 [i_1]), (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = 4294967295;
        arr_10 [2] = (((((((3889583174 ? 1 : 3295995545))) ? ((var_14 & (arr_1 [1]))) : (arr_2 [i_2]))) <= (max((arr_1 [i_2]), (min((arr_1 [11]), (arr_3 [i_2])))))));
        arr_11 [i_2] = (((arr_6 [i_2] [i_2]) % (arr_5 [i_2] [i_2])));
        var_21 = 1430470272;
        var_22 *= (var_15 && 1479195031);
    }
    #pragma endscop
}
