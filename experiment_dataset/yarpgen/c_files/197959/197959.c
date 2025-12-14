/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((2147483520 ? 2147483524 : -2147483526));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, -2147483517));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = 1;
            var_20 = 2147483520;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_21 = (((var_3 % (arr_6 [i_2] [i_0] [i_0]))));
            var_22 *= ((var_3 ? 2147483507 : (arr_6 [i_2] [i_2] [i_2 + 1])));
            var_23 = (min(var_23, var_5));
        }
    }
    var_24 = (max(var_17, (max((max(var_0, var_7)), var_15))));

    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        var_25 = (max(((((arr_10 [i_3] [i_3]) ? var_8 : (arr_8 [i_3] [i_3])))), ((var_3 ? (arr_10 [i_3 - 1] [i_3 + 1]) : -2147483520))));
        var_26 += (1 >> (((var_11 | var_13) - 1502630662239677399)));
        arr_11 [i_3] [i_3] = var_2;
        var_27 += ((1435415365 ? var_1 : (arr_8 [i_3] [i_3 - 1])));
    }
    #pragma endscop
}
