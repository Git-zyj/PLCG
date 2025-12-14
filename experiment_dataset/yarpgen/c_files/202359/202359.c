/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (min(var_17, 76452635));
        arr_4 [i_0] = ((var_10 ? (arr_2 [i_0]) : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (1294224570 | 255);
        var_19 = ((-1294224570 ? ((max(12, (arr_7 [i_1] [i_1])))) : ((3493053069 ? -895347041 : (arr_5 [i_1])))));
        var_20 |= (((arr_6 [i_1] [18]) >= ((((!(arr_7 [16] [i_1])))))));
        var_21 = (max(var_21, var_1));
        var_22 = (i_1 % 2 == 0) ? ((((arr_6 [i_1] [i_1]) * (max((((arr_7 [i_1] [i_1]) + (arr_5 [i_1]))), (!1496400586)))))) : ((((arr_6 [i_1] [i_1]) / (max((((arr_7 [i_1] [i_1]) + (arr_5 [i_1]))), (!1496400586))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, var_1));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = (2910503786 || 1496400586);
                                var_25 = ((~(arr_13 [i_2] [i_3] [i_5] [i_5])));
                            }
                        }
                    }
                    var_26 = var_15;
                    var_27 = arr_17 [i_4] [4] [i_4] [i_3] [i_2];
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_28 = (var_6 * 111);
                                var_29 = (((min((arr_26 [i_2] [i_3] [i_4] [i_4] [i_4] [0] [i_8]), (((arr_6 [i_3] [i_4]) ? (arr_23 [i_2] [i_2] [i_3] [i_4] [2] [i_2] [i_8]) : 1384463511)))) == (((min((min(var_2, 14)), (!var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
