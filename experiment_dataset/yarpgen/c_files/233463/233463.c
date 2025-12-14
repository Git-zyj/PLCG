/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_7 ? 268435455 : var_5))), var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (9223372036854775807 < var_6)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_3] = ((!(!var_3)));
                                var_13 *= (((((arr_0 [i_0]) > -4935609133644363224)) && (arr_16 [11] [i_3] [i_3])));
                                var_14 = (max(((((~-1226836892338001381) ? (~var_1) : (~var_1)))), (((((8581545984 ? -13 : var_5))) ? ((var_3 ? var_7 : 4194303)) : (((var_4 ? var_4 : 1073741824)))))));
                                var_15 = (min(var_15, (max(((((!(arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))) && (((12853075484682660735 ? var_7 : (arr_14 [i_0] [19] [i_2] [14] [i_4])))))), (!55497)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_21 [i_5] [i_5] = 49781;
                                arr_22 [i_0] [i_0] [i_1] [i_2] [17] [i_3] [i_5] = (((((~(arr_10 [i_0] [3] [17] [3])))) ? ((-15 ? var_7 : 7636463968988030913)) : 0));
                            }
                            arr_23 [i_0] [i_1] [i_2] [i_3] = ((((max((((arr_18 [0] [0] [i_2] [8] [i_3]) ? (arr_10 [17] [i_1] [i_1] [i_0]) : 18446744073709551606)), ((((arr_10 [i_1] [i_1] [i_1] [14]) || var_4)))))) ? ((((min(var_0, -51))) ? (max((arr_8 [i_1] [i_1]), (arr_5 [16]))) : (arr_12 [i_0] [i_0] [i_0] [i_0]))) : var_6));
                        }
                    }
                }
                var_16 = ((!((max((((1 ? var_5 : -211328789))), ((11 ? (arr_18 [i_1] [5] [i_1] [i_0] [i_0]) : var_9)))))));
                arr_24 [i_0] [i_1] [i_0] = (min((((var_3 - var_9) ? (var_8 / 7) : (((245 ? var_5 : (arr_9 [18] [1] [4])))))), var_1));
            }
        }
    }
    var_17 = (max(((((((-3567737836177736062 ? var_1 : var_3))) ? var_10 : (min(var_4, var_8))))), ((((max(28672, var_0))) ? (max(-75, 4503599627368448)) : -7629986287837286933))));
    var_18 = min((max(((var_2 ? var_8 : var_7)), (((var_10 ? 1 : -113))))), var_6);
    #pragma endscop
}
