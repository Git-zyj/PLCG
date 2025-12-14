/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (((~0) & (min(((0 | (arr_0 [i_0] [i_0]))), 2883413912))));
        var_17 = ((((arr_1 [i_0] [i_0]) < (arr_1 [20] [20]))));
        var_18 = 254;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = ((25 ? (!907953983) : 28));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = (((arr_5 [10]) ? var_4 : (arr_2 [i_1])));
            var_20 = (((arr_6 [i_1] [i_2]) / (arr_6 [i_1] [i_1])));
            var_21 |= (((arr_4 [i_1]) != (~var_10)));
            var_22 = (((((var_13 ? (arr_0 [19] [i_2]) : 255))) && (arr_4 [i_2])));
        }
        for (int i_3 = 4; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_23 = (31 ? ((503758950 ? var_14 : var_0)) : (arr_3 [i_1]));
            arr_11 [18] [i_3] |= (((arr_4 [i_3 - 2]) || (arr_4 [i_3 - 1])));
            var_24 = var_12;
        }
        for (int i_4 = 4; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_25 = (arr_14 [i_4 - 3]);
            var_26 = (!254);
            arr_16 [i_1] [i_4 - 2] = (13 >= 40225124);
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_27 = ((~(((arr_17 [9]) >> ((min(25, (arr_14 [i_5]))))))));
        var_28 = (max(var_28, (((((-((min(var_9, 234))))) != ((-((((arr_18 [6]) <= var_1))))))))));
    }
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        var_29 |= ((+((((min((arr_12 [i_6] [i_6] [17]), var_7))) ? var_8 : (arr_13 [i_6 - 1])))));
        var_30 = 0;
    }
    #pragma endscop
}
