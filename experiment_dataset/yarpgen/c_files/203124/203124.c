/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_4 | var_0);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [6] [i_0] [i_0] = ((4294967295 ? (arr_5 [i_0] [i_1 + 1] [i_0]) : ((((arr_3 [i_0] [i_0]) ? var_0 : 58003)))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_16 = ((((((arr_0 [i_0]) ? 4294967282 : (arr_0 [i_2])))) ? (((arr_7 [i_0] [i_0] [i_0] [i_0]) % (arr_8 [14] [i_2] [i_2] [i_0]))) : (~54486)));
                    var_17 ^= (arr_4 [i_0] [i_0] [i_1 + 2]);
                    arr_11 [i_0] [i_0] [i_2] [i_3] = ((!(~1520377545977601281)));
                    var_18 ^= 4294967290;
                }
                arr_12 [i_1] [i_0] = ((~((0 ? var_1 : (arr_0 [i_0])))));
                arr_13 [i_0] [i_0] = ((arr_7 [i_0] [i_0] [i_1 + 2] [i_2]) % 768);
                arr_14 [i_0] [i_0] [i_2] = arr_3 [i_0] [19];
                var_19 = (arr_5 [i_0] [i_1] [i_0]);
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_20 = var_11;
                var_21 = (((arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 1]) && (arr_5 [i_0] [i_1] [i_0])));
            }
        }
        var_22 = (~(min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_23 = (min(((var_10 ? (((max(153, 46525)))) : 18446744073709551609)), 9410684607148950892));
        var_24 = (min(var_24, var_9));
    }
    #pragma endscop
}
