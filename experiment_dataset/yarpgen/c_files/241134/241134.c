/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 == ((((max(15998928621712747385, 15998928621712747385))) ? ((var_14 ? 15998928621712747402 : var_3)) : (var_16 ^ var_0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = -1;
        var_22 -= ((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_18))) ? (min((arr_0 [i_0]), 16038)) : ((10482 ? 960 : (arr_1 [i_0])))));
        var_23 = (arr_2 [2] [i_0]);
        arr_4 [1] = (min(((~(min(var_1, -34359738368)))), (1959851260676762384 > 16038)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = ((585733084 ? (max(2447815451996804237, ((max(585733084, var_7))))) : (((min(0, 1))))));

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                arr_15 [i_1] = 0;
                var_24 = (!3709234211);

                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    var_25 = (var_19 ? (arr_1 [i_2]) : ((min(9614, (arr_16 [i_1] [i_1] [i_3] [i_4] [i_4 + 3] [i_1])))));
                    var_26 |= ((32106 ? 4446252027436513165 : -8214720923413091494));
                    var_27 = (((arr_3 [i_1]) ? (arr_17 [i_1] [i_1] [i_1] [i_4]) : (min(((min(2147483647, var_19))), 2447815451996804237))));
                    var_28 = (max(var_28, (arr_10 [i_1] [i_2] [i_1])));
                    var_29 = -32103;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 6;i_6 += 1)
                    {
                        {
                            var_30 = (max(var_30, ((min((((arr_13 [i_6 + 4] [i_6 - 1] [i_3 - 1] [i_3 - 2]) ? (min(var_2, 11115881356490495802)) : (((((arr_22 [i_2] [i_5]) && -1)))))), var_8)))));
                            var_31 = (288195191779622912 > var_4);
                        }
                    }
                }
            }
            var_32 ^= (min(((12495 ? 60 : 12495)), (((arr_18 [i_1] [i_2] [i_2] [i_1]) ? 65535 : (((arr_11 [i_1]) ? (arr_19 [i_1]) : (arr_5 [i_1])))))));
            var_33 = 1;
        }
        arr_24 [i_1] = -32080;
        var_34 = (max(var_34, (arr_6 [i_1])));
        var_35 = 1;
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        var_36 = 22;
        arr_28 [i_7] = ((!(arr_3 [i_7 + 1])));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = (((((((((arr_31 [i_8] [i_8]) ? 176 : var_5))) ? var_6 : (arr_29 [i_8])))) ? ((15998928621712747379 ? (((arr_0 [i_8]) % 11223945260299810686)) : (((var_10 ? var_3 : 0))))) : -16046));
        arr_34 [i_8] = (((var_8 == var_7) << (2447815451996804237 - 2447815451996804208)));
        var_37 += var_12;
    }
    #pragma endscop
}
