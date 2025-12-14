/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_1 - 18446744073709551605) ? ((((!var_5) || (!var_14)))) : var_10));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_17 |= (max(((max(-1674170825, -12388))), var_3));
        arr_2 [i_0] = ((-(((arr_0 [i_0]) ? (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0]))) : (min(1674170850, 6440))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_18 = (min(var_18, var_7));
            var_19 |= (-(arr_3 [i_2 - 3]));
            arr_10 [i_2] = (((((max((arr_3 [i_2]), (arr_8 [i_1] [i_1] [i_2])))) ? (max(-1674170832, 0)) : ((min(19932, (arr_5 [i_1])))))));
        }

        /* vectorizable */
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            var_20 |= (arr_8 [i_1] [i_3] [20]);
            arr_14 [i_1] [i_3] |= ((!(arr_7 [i_3 + 1] [i_3 - 4])));
        }
        var_21 |= ((!((min((arr_9 [i_1] [i_1]), (((0 ? (arr_11 [8] [i_1]) : 123))))))));
        var_22 -= 12288;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 |= (arr_13 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_5] [i_5] = 246;
            arr_20 [i_5] = -19946;
        }
        var_24 += (arr_11 [i_4] [i_4]);
        var_25 ^= 109;
    }
    var_26 = -6755349451781958698;
    #pragma endscop
}
