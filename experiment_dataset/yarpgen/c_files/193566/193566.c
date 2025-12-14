/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((arr_1 [i_0]) < var_12)));
        var_15 = 18446744073709551594;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_2 [18]);
        arr_7 [i_1] = 19;
        var_16 = var_9;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_17 = 9223372036854775807;
        var_18 ^= (max(((min((281594407 && 1543248866), (arr_4 [i_2] [i_2])))), ((~((max(24576, (arr_8 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = (max(var_19, ((((107 && -43) ? ((((arr_12 [i_3]) < 1543248869))) : (((!(arr_12 [i_3])))))))));
        var_20 = (max(var_20, (139 <= -32362)));
        var_21 = 1;
    }
    var_22 = (max(var_13, var_0));
    var_23 = ((max(var_8, var_14)));
    #pragma endscop
}
