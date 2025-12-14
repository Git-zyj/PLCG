/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_2);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = (min(106, (((((max(var_6, var_10)))) % (min((arr_2 [i_0]), var_1))))));
        arr_3 [i_0] = var_7;
        arr_4 [18] [i_0] = (((((max(31, (arr_0 [i_0] [i_0]))) ? (arr_2 [i_0]) : (arr_0 [i_0 + 1] [i_0])))));
        arr_5 [i_0 + 1] = (((-(arr_2 [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] = (arr_1 [i_1 - 1]);
        var_22 = var_8;

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_23 = (((arr_14 [i_1] [i_1 - 1] [i_1 - 1]) >> (-8968630191857771776 + 8968630191857771786)));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_24 = (var_13 + var_6);
                arr_18 [6] [i_2] [i_3] [i_3] = (((arr_6 [i_1 - 1]) - (arr_6 [i_1 - 1])));
                var_25 = (arr_8 [i_2] [i_2]);
            }
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_26 = (var_8 > var_11);
                var_27 = var_8;
                arr_22 [i_1] [i_1] [i_4] = ((-var_6 ? var_18 : (arr_1 [i_1])));
            }
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_28 = 1;
                    arr_28 [i_6] [i_1 - 1] [i_2 - 1] [i_1 - 1] = var_6;
                }
                var_29 += (~1);
                var_30 = var_11;
            }
        }
    }
    var_31 = ((-6867924714385455263 / ((min(var_18, (var_4 || 2398549867521408035))))));
    #pragma endscop
}
