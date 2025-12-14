/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            var_12 = (((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_1] [i_1]) : var_2));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_2] [i_2] &= (-((890748183 ? var_3 : (((41 % (arr_4 [i_2] [i_2])))))));
            var_13 = (((((((-8737722488084793877 ? 1 : (arr_0 [i_0] [i_0]))) / (~var_5)))) ? var_6 : (max((arr_9 [i_0] [i_2] [i_0]), (arr_0 [i_2] [i_0])))));
            arr_11 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        }

        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] = ((26 ? 59 : 18446744073709551580));
            arr_16 [0] [2] [i_3] |= var_2;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_14 |= ((((((arr_12 [i_0]) ? 0 : var_6))) <= (max(1046386483, 18446744073709551580))));
            var_15 = ((((min((((arr_7 [i_4]) ? 59 : -60)), (arr_1 [i_0])))) ? ((((arr_4 [i_4] [i_0]) != (((arr_4 [i_0] [i_4]) | 81))))) : (arr_18 [i_4] [i_0])));
            arr_21 [i_0] [0] [i_4] &= (min(var_2, var_3));
            arr_22 [8] [8] |= (arr_1 [6]);
            arr_23 [i_0] [i_0] = (~1);
        }
    }
    #pragma endscop
}
