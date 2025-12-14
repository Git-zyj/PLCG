/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max(var_10, 1144902887)))));
    var_18 |= ((~(((var_6 % var_2) ? var_3 : ((var_11 ? var_0 : var_16))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~698358676);
        var_19 = (min(var_19, (((((((arr_0 [i_0 + 1]) ? var_2 : (arr_0 [i_0 - 3])))) ? ((~(arr_0 [i_0 + 1]))) : 6727)))));
        arr_3 [i_0] [i_0] = ((536805376 ? 698358676 : ((var_3 ? ((((arr_1 [i_0] [i_0]) ? var_7 : var_2))) : 2235853894627301009))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [12] &= (arr_5 [14]);
            var_20 = (max(var_20, (((-(((arr_1 [i_1] [i_0]) / var_13)))))));
        }
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = ((((((arr_8 [i_2]) / ((var_2 ? var_2 : (arr_9 [i_2] [i_2])))))) ? ((((((arr_0 [6]) ? (arr_1 [i_2] [i_2]) : var_0))) ? (((arr_5 [i_2]) ? var_4 : (arr_1 [i_2] [i_2]))) : (((min((arr_8 [i_2]), (arr_6 [i_2]))))))) : (((~(((((arr_0 [i_2]) + 2147483647)) << (((arr_5 [i_2]) - 1347190305)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_22 = (min(((max((!2235853894627301009), (var_3 >= var_5)))), (min((arr_14 [i_3] [0] [i_5 - 1]), (arr_13 [i_2] [i_2] [i_2] [i_2])))));
                        arr_17 [i_2] [i_2] [i_2] [i_2] [i_5] = ((!((((1 + -42) ? (((-(arr_9 [i_4] [i_3])))) : ((-698358686 ? -698358676 : 16210890179082250607)))))));
                        var_23 = (((((!var_13) ? ((-1445010056 ? -4239 : 1558185849)) : (((27225 ? 1873628037 : 1))))) != (arr_9 [i_4] [2])));
                        var_24 = (((max(((((arr_16 [5] [i_2] [i_2] [i_2]) ? var_13 : var_15))), (arr_1 [i_2] [i_3]))) + (arr_11 [i_4 + 2] [i_4 + 2] [i_5 + 1])));
                    }
                    var_25 -= (arr_15 [i_2] [i_3] [i_2] [1] [i_3]);
                    var_26 = ((((!((max(-11815, 1445010067))))) ? (113 + -698358678) : (~1774899314)));
                }
            }
        }
    }
    var_27 |= ((((min(1445010075, 1873628032))) ? (((var_12 ? var_8 : var_16))) : (((((var_0 & var_15) > ((var_13 ? var_10 : var_3))))))));
    #pragma endscop
}
