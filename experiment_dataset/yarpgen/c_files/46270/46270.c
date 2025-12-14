/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max((((!(((3442623342935392972 ? 1471084780 : 1471084787)))))), (max((~0), var_0)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((min(1, (max((arr_2 [i_0 - 2] [i_0]), var_7)))))));
        var_18 = (max(var_18, var_2));
        arr_4 [i_0] [i_0] = (((arr_1 [i_0 - 2] [i_0 + 1]) ? (((var_6 << ((((var_4 << (var_11 - 15830244526308588326))) - 9143970080612745210))))) : (min((arr_2 [i_0 - 1] [i_0 + 2]), var_0))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = 4264449709;
        var_20 = (max(var_20, (((-(arr_2 [i_1] [i_1 + 3]))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_21 = (+(((((-2120502443 + 2147483647) << (15593644196054410959 - 15593644196054410959))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((((var_10 ? (arr_6 [i_5] [i_5]) : var_15)) * -2120502443))))));
                        arr_15 [i_4] = var_2;
                        var_23 = (arr_5 [i_2]);
                    }
                }
            }
        }
        var_24 = (arr_5 [i_2]);
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_25 = 9223372036854775807;

        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_26 = (max(var_26, (arr_8 [i_6 - 2])));
            arr_20 [i_7] = ((~(arr_3 [i_6 + 3])));
            arr_21 [1] [i_6] [i_7 - 1] |= (-1892455586 / -70);
            var_27 = (max(var_27, (arr_3 [i_6 - 2])));
        }
    }
    #pragma endscop
}
