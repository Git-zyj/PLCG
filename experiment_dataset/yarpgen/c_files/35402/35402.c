/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3172;
    var_13 = (!var_11);
    var_14 = ((((var_9 || ((max(13620379826594702500, 52808)))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), 4294967295));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] = 63614;
                                var_15 = ((5973211890268214445 ? (((((((arr_7 [i_0] [i_0] [i_0] [i_0]) && 1))) - ((max(var_5, 66)))))) : (arr_1 [i_0 + 2] [i_4 - 1])));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_5] [i_0] [i_2] = (((((arr_3 [i_1 - 1] [i_1] [i_0 + 2]) | 31)) * (((!-14066) & (max(1077884421, (arr_4 [i_0] [i_0] [i_2])))))));
                        var_16 = (((((arr_8 [i_0] [i_1 - 1] [i_5]) ? (11619 + 1077884421) : -12)) + 10001846867225753073));
                        var_17 = var_4;
                        arr_16 [i_0] [i_1] [i_2] [i_1] = (((((((max((arr_8 [i_0] [i_1] [i_2]), (arr_14 [i_0])))) != -18446744073709551612))) % (((!(!4294967268))))));
                    }
                    for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((2157041635 == ((max((var_10 < 1), (~55260))))));
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = 32767;
                        arr_22 [i_0] [i_1] [i_0] [i_6] = (~(-2147483647 - 1));
                        var_18 = (+((((arr_7 [i_1 - 1] [i_1] [i_1] [i_1]) >= (arr_7 [i_1 - 1] [i_1] [i_1] [i_1])))));
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6] = (min((-125 && 3420522487), ((!(arr_0 [i_0])))));
                    }
                    var_19 = ((var_6 ^ (((max(85, 1950162058))))));
                    var_20 = ((((max((arr_4 [i_2] [i_0] [i_0]), 0)) & (arr_13 [i_0] [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_1]))) * (max(var_0, (-125 & 2157041635))));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (max(((((85 | 4294967290) ? (arr_6 [i_0 - 1] [i_0]) : ((127 ? 2554341109 : var_2))))), (((max(var_2, 18446744073709551603)) * (arr_9 [i_1 - 1])))));
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = 32757;
        var_21 = (((((min((arr_7 [i_7] [i_7] [i_7] [i_7]), (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))) < (((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_5 [i_7] [i_7] [i_7] [i_7]) : 1173658048)))));
    }
    #pragma endscop
}
