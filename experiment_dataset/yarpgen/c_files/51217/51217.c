/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (arr_2 [i_0 + 1]);
            var_12 = (!var_4);
        }
        var_13 = ((!(arr_3 [i_0])));
        var_14 += 151;
        arr_5 [i_0] = ((((var_2 ? (arr_0 [i_0] [i_0]) : var_5))));
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_15 = 13094637459684344913;
        var_16 = 148;
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 - 3] [i_3] = (-((~(~3188962977))));
        var_17 = (min(var_17, 3188962970));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_18 = 18446744073709551615;
        var_19 *= ((-(~0)));
    }
    var_20 = ((var_8 | ((((!((max(var_8, 0)))))))));
    var_21 = ((((max(-var_3, 3))) * ((~(min(255, var_8))))));
    #pragma endscop
}
