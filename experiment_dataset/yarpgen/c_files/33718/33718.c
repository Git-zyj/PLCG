/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_13 = (~var_3);
        var_14 = (min((arr_1 [i_0 + 1] [i_0]), var_0));
        var_15 = (((min((arr_0 [i_0 - 1] [i_0]), (~-4))) <= (((max(((var_1 <= (arr_0 [i_0 - 4] [i_0]))), (-8 <= var_12)))))));
        var_16 = ((((-(arr_0 [i_0] [i_0])))) && ((((min((arr_0 [i_0 + 1] [i_0]), (arr_0 [i_0 - 4] [i_0 - 2])))) < ((min((arr_0 [i_0] [i_0]), var_4))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((((-((max(var_5, var_3)))))) ? ((((min((arr_1 [i_1] [i_1]), 682))) ? (min(232, var_8)) : -56)) : var_1);
        var_18 -= (((((-(arr_0 [i_1] [i_1])))) ? ((((arr_2 [i_1]) / (arr_0 [i_1] [i_1])))) : ((~(arr_1 [i_1] [i_1])))));
        var_19 = (((--0) * (((var_8 || (arr_0 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_20 += ((min((((var_12 == (arr_5 [i_2])))), var_5)));
        var_21 = var_7;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_22 = (min((arr_8 [i_3] [i_3]), (~-29499)));
        var_23 |= (var_1 < (min((arr_5 [i_3]), (~var_8))));
    }
    var_24 = (min(var_7, (max(-var_8, var_6))));
    var_25 = -6035;
    #pragma endscop
}
