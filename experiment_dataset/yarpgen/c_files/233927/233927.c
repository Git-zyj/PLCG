/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(var_1, var_5))) ? ((var_8 ? var_2 : var_7)) : (((-9223372036854775807 - 1) ? 4294967295 : 14674511643542023584))))) ? (min((var_0 + var_5), 0)) : (max(var_8, 69))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((arr_1 [i_0 + 3]) ? (((((max((arr_2 [i_0]), 12668241962285322975))) ? var_0 : var_3))) : (arr_1 [i_0 + 3])));
        var_11 = -4294967295;
        arr_4 [i_0] [i_0 + 4] = ((-(max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = ((((max(((var_5 ? (arr_5 [i_1]) : 13764953645935647542)), var_4))) || (((~((-3 ? 10 : var_8)))))));
        arr_8 [i_1] = (min((((((arr_5 [i_1]) + 2147483647)) << (1984 - 1984))), 89));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {
                    arr_16 [i_3] [i_2] [i_3] [i_3] = (min((arr_6 [i_3 - 2]), var_5));
                    arr_17 [i_1] [i_2] [i_3] = (~9223372036854775807);
                    var_12 = 12668241962285322987;
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_13 = ((((min((min(1034400201, var_4)), var_3))) && (((((var_5 ? var_9 : var_4)) & (arr_10 [i_3 + 1]))))));
                                arr_25 [i_1] [i_1] [i_5] [i_4] [i_5 + 1] &= (max((arr_18 [i_1] [i_2] [i_4 - 1] [i_5 + 2]), 17200447141983951501));
                                var_14 = ((-(max(var_9, 163978615))));
                            }
                        }
                    }
                }
            }
        }
        var_15 = (max(5778502111424228640, ((max((((((arr_11 [i_1]) + 2147483647)) >> (9223372036854775807 - 9223372036854775798))), ((var_0 % (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_37 [i_6] [i_7] [i_8] [i_9] = (max((((arr_32 [i_6 + 2] [i_6 + 1]) << (((arr_32 [i_6 - 3] [i_6 + 2]) - 3229000046100500677)))), (min((arr_26 [i_8]), 1))));
                            arr_38 [i_6 - 1] [i_6 - 3] [i_6] [i_6 - 1] [i_6] = ((((max((max(-80, 1)), 1))) || ((((55070 * var_2) - ((min(var_3, (arr_30 [i_6 - 1] [i_7 + 2] [i_7 + 2] [i_6 - 1])))))))));
                        }
                    }
                }
                var_16 = (arr_28 [i_6]);
            }
        }
    }
    var_17 = var_5;
    var_18 = (((max((!var_9), var_9))) ? ((min(var_4, ((max(115, 0)))))) : (max(var_1, var_9)));
    #pragma endscop
}
