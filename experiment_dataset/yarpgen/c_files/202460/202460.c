/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(15798837701989160576, ((((min(8081, (arr_0 [i_0]))))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = (max(var_19, var_14));
                    var_20 = (((min(1, (((arr_5 [i_0] [0] [i_2]) % 4329135340641091343)))) | (min(4329135340641091356, ((min(var_1, var_8)))))));
                }
                for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] = ((((~(arr_10 [i_0] [i_0]))) | (arr_10 [i_0] [i_0])));
                    var_21 = ((((min(var_0, 4556165322176692151))) ? ((((min(-1, var_0))) ? (~1) : (!-4440))) : (arr_5 [2] [2] [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_22 = (1 ? 4611686018427387903 : 17318542565551298992);
                    var_23 = 9223372036854775802;
                    arr_15 [i_1] = 7587665681520958533;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_24 = (var_7 | var_8);
                        var_25 = (min(var_25, ((!(arr_18 [i_0] [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_4] &= -4556165322176692151;
                        var_26 = (min(var_26, ((((((14024327774929865241 ? (arr_18 [i_0] [i_6]) : var_8))) == 1961762508929202238)))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_27 = (((arr_17 [9] [i_1] [i_1] [i_1] [i_1]) < var_14));
                        var_28 = ((var_8 ? (arr_5 [i_0] [i_4 + 2] [i_7]) : (arr_12 [2] [i_4 + 2] [i_7])));
                        var_29 = (min(var_29, (((18446744073709551612 ? (arr_5 [i_4 - 4] [i_4 + 2] [i_4 + 2]) : (arr_5 [i_4 - 3] [i_4 + 1] [i_4 - 3]))))));
                        var_30 = (max(var_30, (var_16 + var_16)));
                    }
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] [i_1] [i_0] [i_10] [i_1] = ((247 ? (!4) : (arr_18 [i_1] [i_1])));
                                var_31 = (~((min((arr_4 [i_1] [i_9]), var_2))));
                                var_32 = (((--1) ? (((min((min(var_15, 8)), 1)))) : ((((min(1, 6678098398270042273))) ? (arr_20 [i_10] [i_9] [i_8 - 3] [i_1] [3]) : (min(18446744073709551615, 1))))));
                                arr_36 [i_1] [i_8] [i_1] [i_1] = var_5;
                            }
                        }
                    }
                    arr_37 [i_0] [i_1] [i_1] [i_1] = (((((min(5889526027659798802, 13835058055282163712))) ? var_10 : ((var_15 ? -15350 : var_7)))));
                }
                arr_38 [i_1] = ((((-551827675002793271 || (arr_27 [i_0] [i_1] [i_0] [i_0]))) ? (arr_29 [8] [i_1] [8] [i_0] [i_0]) : (((arr_13 [i_1] [i_1] [i_1]) ? var_9 : var_8))));
                var_33 = (max(var_33, ((min(var_8, ((-(17192843376029258236 < var_6))))))));
            }
        }
    }
    var_34 = var_14;
    #pragma endscop
}
